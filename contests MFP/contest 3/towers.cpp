//TLE: solução provável: não usar stack, só um array mudando as posições

#include <bits/stdc++.h> 
using namespace std; 
#define MAX 200000
int main() {
    int n, size = 0;
    long long int t[MAX], max = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        int s;
        cin >> s;
        if (s >= max){
            t[size] = s;
            size++;
        }
        else{
        for (int j = 0; j < size; j++){
            if (t[j] > s){
                if (t[j] = max){
                    max = s;
                }
                t[j] = s;
                break;
            }
        }
        }
        
    }
    cout << size << endl;
    return 0;
    }