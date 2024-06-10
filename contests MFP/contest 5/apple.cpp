#include <bits/stdc++.h> 
using namespace std; 
  
int main() { 
    int n;
    vector<long long int> p;
    cin >> n;
    for (int i = 0; i < n; i++){
        long long int x;
        cin >> x;
        p.push_back(x);
    }
    sort(p.begin(), p.end());
    long long int g1 = 0, g2 = 0, ini = 0, fim = n - 1;
    while (ini < fim - 1){
        if (ini % 2 == 0){
            g1 += p[fim] + p[ini];
        }
        else{
            g2 += p[fim] + p[ini];
        }
        ini ++;
        fim --;
    }
    if (ini == fim){
        if (abs(g1 - g2 + p[ini]) <= abs(g1 - g2 - p[ini])){
            g1 += p[ini];
        }
        else{
            g2 += p[ini];
        }
    }
    else{
        if (abs(g1 - g2 + p[fim]) <= abs(g1 - g2 - p[fim])){
            g1 += p[fim];
        }
        else{
            g2 += p[fim];
        }
        if (abs(g1 - g2 + p[ini]) <= abs(g1 - g2 - p[ini])){
            g1 += p[ini];
        }
        else{
            g2 += p[ini];
        }
    }
    cout << abs(g1 - g2) << endl;
    return 0;
    }