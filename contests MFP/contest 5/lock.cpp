#include <bits/stdc++.h>
using namespace std;

bool possible(vector<int> v, int sum, int i, int n){
    if (i == n){
        return sum % 360 == 0 || sum == 0;
    }
    return possible(v, sum - v[i], i + 1, n) || possible(v, sum + v[i], i + 1, n);
}

int main(){
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    if (possible(v, 0, 0, n)){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}