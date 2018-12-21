#include <iostream>
#include <string>

using namespace std;

int main()
{

    string s, ch;
    bool pos[3], tmp;

    cin >> s;
    pos[0] = true;
    pos[1] = false;
    pos[2] = false;

    for(int i=0; i< s.size(); i++)
    {
        ch = s.substr(i,1);
        if(ch.compare("A") == 0){
            tmp = pos[0];
            pos[0] = pos[1];
            pos[1] = tmp;
        } 
        else if(ch.compare("B") == 0)
        {
            tmp = pos[1];
            pos[1] = pos[2];
            pos[2] = tmp;
        } 
        else if(ch.compare("C") == 0)
        {
            tmp = pos[0];
            pos[0] = pos[2];
            pos[2] = tmp;
        }
    }

    for(int i=0; i < 3; i++)
    {
        if(pos[i]) cout << i+1 << endl;
    }

    return 0;

}
