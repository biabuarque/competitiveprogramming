#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n, t[1000][1000];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin>>t[i][j];
        }
    }
    int sl[1000], sc[1000];
    //soma linhas e guarda no vetor
    int s;
    for (int i = 0; i < n; i++){
        s = 0;
        for (int j = 0; j < n; j++){
            s+=t[i][j];
        }
        sl[i] = s;
    }
    //soma colunas e guarda no vetor
    for (int j = 0; j < n; j++){
        s = 0;
        for (int i = 0; i < n; i++){
            s+=t[i][j];
        }
        sc[j] = s;
    }
    int tot, maximo = -1000000;
    //verifica
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            tot = (sl[i] + sc[j] - (2*t[i][j]));
            if (tot > maximo){
                maximo = tot;
            }
        }
    }
    cout << setprecision(2) << maximo;


    return 0;
}