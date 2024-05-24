// after some study...

#include <bits/stdc++.h> 
using namespace std;
#define MAX 200000

int main() {
    int n;
    long long int v[MAX];
    cin >> n;
    int maxind = 0, max = INT_MIN;
    for (int i = 0; i < n; i++){
        cin >> v[i];
        maxind += v[i];
        if (maxind > max){
            max = maxind;
        }
        if (maxind < 0){
            maxind = 0;
        }
    }
    
    cout << max << endl;
    return 0;
    }