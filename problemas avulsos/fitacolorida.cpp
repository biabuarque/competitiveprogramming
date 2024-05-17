#include <iostream>

using namespace std;

int main(){
    int n, t = 0, f[10000], z[10000];
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>f[i];
        if (f[i] == 0){
            z[t] = i;
            t++;
        }
    }
    
    int minimo;
    for (int i = 0; i < n; i++){
        minimo = 10000
        for (int j = 0; j < t; j++){
            int d = abs(i - z[j]);
            if (d < minimo){
                minimo = d;
            }
        }
        if (minimo > 9){
            minimo = 9;
        }
        cout<<minimo<<" ";
    }
    return 0;
}
