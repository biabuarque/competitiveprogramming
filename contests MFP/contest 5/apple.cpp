#include <bits/stdc++.h> 
using namespace std; 

int solve(int i, long long int p[], long long int s1, long long int s2, int n){
    if (i == n){
        return abs(s1 - s2);
    }
    return min(solve(i + 1, p, s1 + p[i], s2, n), solve(i + 1, p, s1, s2 + p[i], n));
}

int main() { 
    int n;
    long long int p[21];
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> p[i];
    }
    cout << solve(0, p, 0, 0, n) << endl;
    return 0;
    }