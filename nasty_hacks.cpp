#include <iostream>
#include <string>

using namespace std;
#define MAX 100


/*
advertise = 0 E
not advertise = 1 R
not matter = 2 M
*/

int main()
{
    char s[MAX];
    int n,r,e,c;

    cin >> n;

    for (int i=0;i<n;i++)
    {
        cin >> r;
        cin >> e;
        cin >> c;

        if(r == (e - c))
            s[n]='m';
        else
        {

            if (r<0 && (e-c)<0)
            {
                if(r > (e - c))
                    s[n]='r';
                else
                    s[n] ='e';
            }
            if ((e-c)>0)
            {
                if(r<(e-c))
                    s[n]='e';
                else
                    s[n]='r';
            }
        }
    }


    for (int i=0;i<n;i++)
    {
        switch(s[n])
        {
            case 'e':
            {
                cout << "advertise"<<endl;
                break;
            }
            case 'r':
            {
                cout<< "do not advertise"<<endl;
                break;
            }
            case 'm':
            {
                cout<<"does not matter"<<endl;
                break;
            }
        }
    }

    return 0;
}
