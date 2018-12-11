#include <iostream>

#define MAX 10

using namespace std;


int main()
{
    int n, fact[MAX];

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> fact[i];

        switch (fact[i])
        {

            case 0:
            {
                fact[i] = 1;
                break;
            }

            case 1:
            {
                fact[i] = 1;
                break;
            }


            case 2:
            {
                fact[i] = 2;
                break;
            }

            case 3:
            {
                fact[i] = 6;
                break;
            }


            case 4:
            {
                fact[i] = 4;
                break;
            }

            default:
            {
                fact[i] = 0;
                break;
            }
        }
    }

    for (int i = 0; i<n; i++)
        cout << fact[i] << endl;

    return 0;
}
