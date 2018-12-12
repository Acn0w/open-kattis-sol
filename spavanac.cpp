#include <iostream>
#include <string>

using namespace std;


int main()
{
    string hour,min;
    int h,m;

    cin >> hour;
    cin >> min;

    h = stoi(hour.substr(0));
    m = stoi(min.substr(0));


    if(m<45)
    {
        if (h==0)
        {h=23;}
        else
        {h--;}

        m = 60 - (45 - m);
    }
    else
    {
        m = m-45;
    }

    cout << h << " " << m;

    return 0;
}
