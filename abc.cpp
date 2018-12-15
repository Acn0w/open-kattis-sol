#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;

int main()
{
    int v[3], o[3];
    string s;

    for(int i = 0; i < 3; i++) cin >> v[i];

    cin >> s;

    sort(v, v + 3);

    o[s.find("A")] = v[0];
    o[s.find("B")] = v[1];
    o[s.find("C")] = v[2];

    for(int i = 0; i < 3; i++) cout << o[i] << " " ;

    return 0;
}
