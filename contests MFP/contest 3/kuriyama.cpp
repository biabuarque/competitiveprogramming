#include <bits/stdc++.h> 
using namespace std; 
#define MAX 200000
  
int main() { 
    int n, m;
    long long int v[MAX], u[MAX];
    cin >> n;
    v[0] = 0;
    u[0] = 0;
    for (int i = 1; i <= n; i++){
        int k;
        cin >> k;
        v[i] = v[i - 1] + k;
        u[i] = k;
    }
    sort(u, u + n + 1);
    for (int i = 1; i <= n; i++){
        u[i] += u[i - 1];
    }
    cin >> m;
    for (int i = 0; i < m; i++){
        int type, ini, fim;
        long long int sum;
        cin >> type >> ini >> fim;
        ini--;
        if (type == 1){
            sum = v[fim] - v[ini];
            cout << sum << endl;
        }
        else{
            sum = u[fim] - u[ini];
            cout << sum << endl;
        }
    }
    return 0;
    }