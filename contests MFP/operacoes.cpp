#include <iostream>

using namespace std;

int main(){
    char op;
    double n1, n2;
    cin >> op;
    cin >> n1;
    cin >> n2;
    if (op == 'M'){
        cout<< n1 * n2;
    }
    else{
        cout<< n1/n2;
    }
    return 0;
}