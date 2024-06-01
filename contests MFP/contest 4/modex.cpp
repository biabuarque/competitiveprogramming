#include <bits/stdc++.h> 
using namespace std; 

long long int modex(long long int x, long long int y, long long int n){
    long long int mod = 1;
    x %= n;
    if (x == 0){
        return 0;
    }
    while (y > 0){
        if (y % 2 == 1){
            mod = (mod * x) % n;
        }

        y /= 2;
        x = (x * x) % n; 
    }
    return mod;
}  

int main() { 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    long long int c, end;
    cin >> c;
    for (int i = 0; i < c; i++){
        long long int x, y, n, z;
        cin >> x >> y >> n;
        cout << modex(x, y, n) << endl;
    }
    cin >> end;
    return 0;
    }