#include <bits/stdc++.h> 
using namespace std; 
#define MAX 200000
  
int main() { 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    long long int i, n, t, max = 1;
    long long int v[MAX];
    cin >> n >> t;
    for (int j = 0; j < n; j++){
        cin >> v[j];
        if (v[j] > max){
            max = v[j];
        }
    }
    long long int ini = 1, fim = max * t;
    while (ini < fim){
        long long int mid = (ini + fim)>>1, tot = 0;
        for (int j = 0; j < n; j++){
            tot += floor(mid / v[j]);
        }
        if (tot < t){
            ini = mid + 1;
        }
        else{
            fim = mid;
        }
    }
    cout << fim << endl;
    return 0;
    }