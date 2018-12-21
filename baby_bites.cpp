#include <iostream>
#include <string>

using namespace std;

int main()
{

    int n;
    string s;

    cin >> n;
    for(int i=1; i <= n; i++)
    {
        cin >> s;
        if(s == "mumble" || i == stoi(s))
        {}
        else
        {
            cout << "something is fishy" << endl;
            break;
        }
        if(i == n) cout << "makes sense" << endl;
    }

    return 0;

}
