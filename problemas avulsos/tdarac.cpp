#include <bits/stdc++.h> 
using namespace std; 
  
int main() {
    int n1, d1, n2, d2, nf, df;
    char div1, div2, op, eq = '=';
    cin >> n1 >> div1 >> d1 >> op >> n2 >> div2 >> d2;
    switch(op){
        case '+':
            nf = (n1 * d2 + n2 * d1);
            df = d1 * d2;
        case '-':
            nf = (n1 * d2 - n2 * d1);
            df = d1 * d2;
        case '*':
            nf = n1 * n2;
            df = d1 * d2;
        case '/':
            nf = n1 * d2;
            df = n2 * d1;
    }
    return 0;
    }