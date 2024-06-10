#include <bits/stdc++.h> 
using namespace std; 
  
int main() { 
    long long int f, s, g, u, d, count = 0;
    cin >> f >> s >> g >> u >> d;
    while (true){
        if (s < g){
            if (s + u <= f && u != 0){
                s += u;
                count++;
            }
            else if (s + u - d <= f && s - d >= 1 && u != 0 && d != 0){
                s += u - d;
                count += 2;
            }
            else {
                cout << "use the stairs" << endl;
                return 0;
            }
        }
        else if (s > g){
            if (s - d >= 1 && d != 0){
                s -= d;
                count++;
            }
            else if (s + u - d >= 1 && s + u <= f && u != 0 && d != 0){
                s += u - d;
                count += 2;
            }
            else {
                cout << "use the stairs" << endl;
                return 0;
            }
        }
        else {
            cout << count << endl;
            return 0;
        }
    }
    }