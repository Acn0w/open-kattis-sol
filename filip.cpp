#include <iostream>
#include <string>

using namespace std;

int flip(int);

int main()
{
    string primo,secondo;
    int a,b;

    cin >> primo;
    cin >> secondo;

    a = flip(stoi(primo.substr(0)));
    b = flip(stoi(secondo.substr(0)));

    cout << ((a>b) ? a : b);

    return 0;
}

int flip (int n)
{
    int flip=0, resto;
    while(n != 0)
    for (int i =0;i<3;i++)
    {
        resto = n%10;
        flip = flip*10 + resto;
        n /= 10;
    }
    return flip;
}
