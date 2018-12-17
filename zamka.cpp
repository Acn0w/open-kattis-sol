#include <iostream>
#include <string>

using namespace std;

int unitsum(int);

int main()
{
    int l, u, x;
    
    cin >> l;
    cin >> u;
    cin >> x;
    
    for(int i = l; i <= u; i++)
    {
        if(unitsum(i) == x)
        {
            cout << i << endl;
            break;
        }
    }
    for(int i = u; i >= l; i--)
    {
        if(unitsum(i) == x)
        {
            cout << i;
            break;
        }
    }
}

int unitsum(int n)
{
    string s = to_string(n);
    n = 0;
    for(int i = 0; i < s.size(); i++)
    {
        n = n + stoi(s.substr(i, 1));
    }
    
    return n;
}
