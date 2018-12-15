#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    string primo,secondo;
    int h,angle;

    cin >> primo;
    cin >> secondo;

    h = stoi(primo.substr(0));
    angle = stoi(secondo.substr(0));

    cout <<ceil(h/sin(angle*3.141592653589793/180));

    return 0;
}
