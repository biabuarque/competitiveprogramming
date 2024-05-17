#include <iostream>
#include <vector>
#include "../../../../usr/include/c++/11/bits/algorithmfwd.h"

using namespace std;

int main(){
    string s;
    vector<char> melhor;
    cin >> s;
    for (int i = 0; i < s.size(); i++){
        melhor.push_back(s[i]);
    }
    sort(melhor.begin(), melhor.end());

    return 0;
}