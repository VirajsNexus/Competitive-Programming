#include <iostream>
#include "knapsack.h"

using namespace std;

int main()
{
    int n, W;

    cout << "\n\nEnter number of items: \t";
    cin >> n;

    int wt[n];
    int val[n];

    cout << "\n\nEnter weights: \t";
    for (int i = 0; i < n; i++)
        cin >> wt[i];

    cout << "\n\nEnter values: \t";
    for (int i = 0; i < n; i++)
        cin >> val[i];

    cout << "\n\nEnter knapsack capacity: \t";
    cin >> W;
    
    cout << "\n\n==================================\n\n" << endl;

    cout << "\nMaximum Profit = \t" << knapsack(wt, val, W, n) <<"\n\n" << endl;

    return 0;
}