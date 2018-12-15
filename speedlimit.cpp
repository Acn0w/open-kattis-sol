#include <iostream>
#include <array>

using namespace std;

#define MAX 10

int countMiles(int[],int[], int);

int main(){
    
    int n = 0;
    int speed[MAX], hour[MAX];
    
    while(1) {
        
        cin >> n;
        
        if(n == -1) break;
        
        for(int i = 0; i < n; i++){
            cin >> speed[i];
            cin >> hour[i];
        }
        
        cout << countMiles(speed, hour, n) << " miles" << endl;
        
    }
    
    return 0;
}

int countMiles(int *s, int *h, int size){
    
    int miles = 0;
    int partialHour = 0;
    
    partialHour = h[0];
    miles = s[0] * partialHour;
    
    for(int i = 1; i < size; i++){
        partialHour = h[i] - h[i-1];
        miles = miles + s[i] * partialHour;
    }
    
    return miles;
}
