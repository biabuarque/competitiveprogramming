#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    set<int> s;
    vector<int> v;
    int n;
    for (int i = 0; i < n; i++){
        cin >> v[i];
        s.insert(v[i]);
    }
    cout << s.size() << endl;
    return 0; 
} 