#include <bits/stdc++.h> 
using namespace std; 
  
int main() { 
    long long int n, x;
    cin >> n >> x;
    vector<long long int> v, c;
    for (int k = 0; k < n; k++){
        int t;
        cin >> t;
        c.push_back(t);
        v.push_back(t);
    }
    sort(v.begin(), v.end());
    int i = 0, j = n - 1;
    while(i < j) {
        if (v.at(i) + v.at(j) < x){
            i++;
        }
        else if (v.at(i) + v.at(j) > x){
            j--;
        }
        else if (v.at(i) + v.at(j) == x){
            break;
        }
    }

    if (i >= j){
        cout << "IMPOSSIBLE" << endl;
    }
    else{
        int x, y;
        for (int k = 0; k < n; k++){
            if (c.at(k) == v.at(i)){
                x = k + 1;
                break;
            }
        }
        for (int k = 0; k < n; k++){
            if (c.at(k) == v.at(j) && k != x - 1){
                y = k + 1;
                break;
            }
        }
        if (x > y){
            cout << y << " " << x << endl;
        }
        else{
            cout << x << " " << y << endl;
        }
    }
    return 0; 
} 