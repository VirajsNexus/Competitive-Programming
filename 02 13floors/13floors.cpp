#include <iostream>
using namespace std;

int main()
{
    int floorNumber;
    cin >> floorNumber;
    
    if(floorNumber >= 13)
    {
        cout << floorNumber + 1;
    }
    else
    {
        cout << floorNumber;
    }
    
    return 0;
}