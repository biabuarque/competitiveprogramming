#include <bits/stdc++.h> 
using namespace std; 
  
int main() { 
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n, cont = 0;
        cin >> n;
        vector<int> v;
        for (int j = 0; j < n; j++){
            cin >> v[j];
        }
        sort(v.begin(), v.end());
        int med = (int)(n / 2);
        for (int j = med; j < n; j++){
            if (v[j] > v[med]){
                break;
            }
            cont++;
        }
        cout << cont << endl;
    }
    return 0; 
}