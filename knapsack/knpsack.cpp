#include "knapsack.h"

int knapsack(int wt[], int val[], int W, int n)
{
    if (n == 0 || W == 0)
        return 0;

    if (wt[n - 1] <= W)
    {
        int include = val[n - 1] +
                      knapsack(wt, val, W - wt[n - 1], n - 1);

        int exclude = knapsack(wt, val, W, n - 1);

        if (include > exclude)
            return include;
        else
            return exclude;
    }
    else
    {
        return knapsack(wt, val, W, n - 1);
    }
}