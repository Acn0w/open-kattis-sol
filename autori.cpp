#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    size_t pos = 0;

    cin >> s;

    cout << s.substr(0,1);
    while ((pos = s.find("-")) != string::npos) //nops indicate the end of the string
    {
        cout << s.substr(pos+1,1);
        s.erase(0, pos + 1);
    }


    return 0;
}
