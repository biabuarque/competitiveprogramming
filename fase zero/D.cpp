#include <bits/stdc++.h> 
using namespace std; 
  
int main() {
    long long int e, v, tot, min, hr;
    cin >> e >> v;
    v /= 60;
    tot = (int) e / v;
    min = tot % 60;
    hr = (tot - min) / 60;
    hr = (hr + 19) % 24;
    return 0;
    }