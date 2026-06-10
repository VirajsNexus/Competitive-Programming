#include <iostream>
using namespace std;

int main(void)
{
    int stones;
    cin >> stones;
    
    if(stones % 2)
        cout << "Alice" <<endl;
    else
        cout << "Bob" << endl;
        
    return 0;
}