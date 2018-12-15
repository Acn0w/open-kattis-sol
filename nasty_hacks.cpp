#include <iostream>
#include <string>

using namespace std;
#define MAX 100

/*
advertise = 0 E
not advertise = 1 R
not matter = 2 M
*/

int main(){

    int n,r,e,c;

    cin >> n;

    for (int i = 0; i < n; i++) {
        
        cin >> r;
        cin >> e;
        cin >> c;

        if(r == (e - c)) cout<<"does not matter"<<endl;
        else {

            if (r < 0 && (e - c) < 0){
                if(r > (e - c)) cout<< "do not advertise"<<endl;
                else cout << "advertise"<<endl;
            } else if ((e - c) > 0){
                if(r < (e - c)) cout << "advertise"<<endl;
                else cout<< "do not advertise"<<endl;
            }
        }
    }

    return 0;
}
