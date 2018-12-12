#include <iostream>

using namespace std;

#define MAX 100

int main() 
{
    int x, n, s[MAX], t;
    
    cin >> x; // Megabytes per month
    cin >> n; // Megabytes spent per n month
    
    for(int i = 0; i < n; i++) cin >> s[i];

    t =  0;
    
    for(int i = 0; i < n; i++) {
        t = t + x - s[i];
    }
    
    cout << t + x;
    
    return 0;
}
