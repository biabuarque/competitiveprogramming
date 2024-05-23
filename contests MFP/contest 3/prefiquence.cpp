#include <bits/stdc++.h> 
using namespace std; 
#define MAX 200000
int main() {
    int t, n, m;
    cin >> t;
    for (int i = 0; i < t; i++){
        string a, b;
            cin >> n >> m;
            cin >> a >> b;
            int posa = 0, posb = 0;
            while (posb < m){
                if (a[posa] == b[posb]){
                    posa++;
                }
                posb++;
            }
            cout << posa << endl;
    }
    return 0;
    }