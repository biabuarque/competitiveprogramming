#include <iostream>

using namespace std;

int main(){
    int n, t[50], r[50];
    cin>>n;

    for (int i = 0; i < n; i++){
        cin>>t[i];
    }
    for (int i = 0; i < n; i++){
        r[i] = 0;
        if (t[i] == 1){
            r[i]++;
        }
        if (i != 0 && t[i - 1] == 1){
            r[i]++;
        }
        if (i != n - 1 && t[i + 1] == 1){
            r[i]++;
        }
        cout<<r[i]<<"\n";
    }

    return 0;
}
