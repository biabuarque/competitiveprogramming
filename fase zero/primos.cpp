#include <bits/stdc++.h> 
using namespace std; 
bool prime (long long int num){
    bool prime[num + 2];
    memset(prime, true, sizeof(prime));
    if (num == 0 || num == 1){
        return false;
    }
    for (int p = 2; p * p < num + 1; p++) {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true) {
            // Update all multiples of p
            for (int i = p * p; i < num + 1; i += p){
                if (i == num){
                    return false;
                }
                prime[i] = false;
            }
        }
        return true;
    }
}

int main() {
    

    long long int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int num;
        cin >> num;
        if (num % 2 == 0){
            cout << -1 << endl;
        }
        else{
        int l = num / 2, r = num - l;
        if (l > r){
            swap(l, r);
        }
        while (l >= 0){
            if (prime(l) || prime(r)){
                l--;
                r++;
            }
            else{
                break;
            }
        }
        if (l < 0){
            cout << -1 << endl;
        }
        else{
            cout << l << " " << r << endl;
        }
        }
    }
    return 0;
    }