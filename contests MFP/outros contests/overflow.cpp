#include <iostream>

using namespace std;

int main(){
    int n, p, q, r;
    char c;
    cin>> n;
    cin>> p;
    cin>> c;
    cin>> q;
    if (c == '+'){
        r = p + q;
    }
    else{
        r = p * q;
    }
    if (r > n){
        cout<< "OVERFLOW";
    }
    else{
        cout<< "OK";
    }
    return 0;
}
