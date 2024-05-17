#include <bits/stdc++.h> 
using namespace std; 
  
int main() { 
    vector<int> v;
    for (int i = 0; i <= 100; i += 5){
        v.push_back(i);
    }
    int n;
    cin >> n;
    int up = v[lower_bound(v.begin(), v.end(), n) - v.begin()];
    int low = v[lower_bound(v.begin(), v.end(), n) - v.begin() - 1];
    if (abs(n - up) < abs(n - low)){
        cout << up << endl;
    }
    else{
        cout << low << endl;
    }
    return 0; 
} 