#include <bits/stdc++.h> 

using namespace std;

int main(){
    int n;
    cin >> n;
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    vector<string> ordem;
    for (int i = 0; i < n; i++){
        string s;
        cin >> s;
        ordem.push_back(s);
    }

    vector<string> prioridade;
    unordered_map<string, int> percorridas;
    for (int i = 0; i < n; i++){
        string s;
        cin >> s;
        prioridade.push_back(s);
        percorridas[s] = 0;
    }

    int pior = 0;
    for (int i = 0; i < n; i++){
        cout << prioridade[pior] << " ";

        string atual = ordem[i];
        percorridas[atual] = 1;
        while(percorridas[prioridade[pior]] != 0){
            pior++;
        }
    }
    cout << "\n";

}