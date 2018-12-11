#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

#define MAX 20

int main() 
{
    int n;
    int odds[MAX];
    
    cin >> n;
    
    for(int i = 0; i < n; i++) cin >> odds[i];
    
    for(int i = 0; i < n; i++) {
        if (abs(odds[i]) % 2 == 0) cout << odds[i] << " is even" << endl;
        else cout << odds[i] << " is odd" << endl;
    }
    
    return 0;
}
