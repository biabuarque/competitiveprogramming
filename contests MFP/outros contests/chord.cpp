#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    string v;
    cin >> v;
    if (v == "ACE" || v == "BDF" || v == "CEG" || v == "DFA" || v ==  "EGB" || v ==  "FAC" || v ==  "GBD"){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0; 
} 