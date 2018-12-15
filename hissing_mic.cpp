#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    size_t pos = 0, pos1 = 0;

    cin >> s;

    if (s.find("ss") ==-1  )
    {
        cout << "no hiss";
    }
    else
    {
        cout << "hiss";
    }

    return 0;
}
