#include <bits/stdc++.h> 
using namespace std; 
#define MAX 200000
  
int main() { 
    int n, q;
    cin >> n >> q;
    long long int v[MAX];
    v[0] = 0;
    for (int i = 1; i <= n; i++){
        int k;
        cin >> k;
        v[i] = v[i - 1] + k;

    }
    for (int i = 0; i < q; i++){
        int ini, fim;
        long long int sum = 0;
        cin >> ini >> fim;
        ini--;
        sum = v[fim] - v[ini];
        cout << sum << endl;
    }
    return 0;
    }