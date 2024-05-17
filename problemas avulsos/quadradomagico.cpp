#include <iostream>

using namespace std;

int main(){
    int n, q[10][10], in = 0, s = 0, sim = 1;
    cin>>n;
    // pega matriz e checa linhas
    for (int i = 0; i < n; i++){
        s = 0;
        for (int j = 0; j < n; j++){
            cin>>q[i][j];
            s += q[i][j];
        }
        if (i != 0 && s != in){
            sim = 0;
            break;
        }
        in = s;
    }

    if (sim){
        for (int j = 0; j < n; j++){
        s = 0;
            for (int i = 0; i < n; i++){
                s += q[i][j];
            }
            if (s != in){
                sim = 0;
                break;
            }
        }
    }

    if (sim){
        s = 0;
        for (int k = 0; k < n; k++){
            s+= q[k][k];
        }
        if (s != in){
                sim = 0;
        }
        s = 0;
        for (int k = 0; k < n; k++){
            s+= q[k][n - k - 1];
        }
        if (s != in){
                sim = 0;
        }
    }

    if (sim){
        cout<<in;
    }
    else{
        cout<<-1;
    }


    return 0;
}
