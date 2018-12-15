#include <iostream>
#include <string>

using namespace std;
void sort (char&,char&,char&);

int main()
{
    char uno,due,tre;
    string s;
    char c[3];

    cin >> uno;
    cin >> due;
    cin >> tre;
    cin >> s;

    sort(uno,due,tre);

    c[s.find("A")]=uno;
    c[s.find("B")]=due;
    c[s.find("C")]=tre;

    for(int i =0;i<3;i++)
        cout << c[i]<<" ";

    return 0;
}


void sort(char& x, char& y, char& z)
{
    if (y < x)
    {
        if (z < x)
        {
            if (z < y)
            {
                swap(x, z);
            }
            else
            {
                char tmp = std::move(x);
                x = std::move(y);
                y = std::move(z);
                z = std::move(tmp);
            }
        } else
        {
            swap(x, y);
        }
    } else
    {
        if (z < y)
        {
            if (z < x)
            {
                char tmp = std::move(z);
                z = std::move(y);
                y = std::move(x);
                x = std::move(tmp);
            }
            else
            {
                swap(y, z);
            }
        }
    }
}
