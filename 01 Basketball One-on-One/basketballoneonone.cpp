#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    
    int a = 0;
    int b = 0;
    
    for(int i =0; i < s.length(); i += 2)
    {
        if(s[i] == 'A')
        {
            a += s[i + 1] - '0';
        }
        else
        {
            b += s[i + 1] - '0';
        }
    }
    cout << (a > b ? 'A' : 'B') << endl;
    return 0;
}