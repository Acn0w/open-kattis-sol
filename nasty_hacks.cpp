#include <iostream>
#include <string>

using namespace std;

/*
advertise = 0 E
not advertise = 1 R
not matter = 2 M
*/

int main()
{

    int n,r,e,c;

    cin >> n;

    for (int i = 0; i < n; i++)
    {

        cin >> r;
        cin >> e;
        cin >> c;

        //IF EQUALS
        if(r == (e - c))
            cout<<"does not matter"<<endl;
        else
        {
            //IF BOTH NEGATIVE
            if (r < 0 && (e - c) < 0)
            {
                //IF r LESS NEGATIVE OF (e - c)
                if(r > (e - c))
                    cout<< "do not advertise"<<endl;
                else
                    cout << "advertise"<<endl;
            }
            else //IF BOTH NOT NEGATIVE
                {
                    if (r < (e - c) > 0)
                        cout << "advertise"<<endl;
                    else
                        cout<< "do not advertise"<<endl;
                }
            }
        }


    return 0;
}
