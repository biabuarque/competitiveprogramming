#include <bits/stdc++.h> 
using namespace std; 
#define MAX 200000
int main() { 
    int n, q;
    long long int v[MAX];
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> q;
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    for (int i = 0; i < q; i++){
    int l = 0, r = n - 1, s, ind = -1;
    cin >> s;
    while (l < r){
        int m = l + r / 2;
        if (v[m] == s){
            ind = m;
            break;
        }
        else if (v[m] > s){
            r = m;
        }
        else {
            l = m;
        }
    }
    cout << ind << "\n";
    }
    return 0;
    }