#include <bits/stdc++.h> 
using namespace std; 
#define MAX 200000
  
int main() {
    int n;
    long long int v[MAX];
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    int start = 0, end = 0, sum = 0, max = 0;
    while (end < n){
        sum += v[end];
        if (sum - v[start] > sum){
            sum -= v[start];
            start++;
        }
        if (sum > max){
            max = sum;
        }
        end++;
    }
    cout << max << endl;
    return 0;
    }