//TLE: solução provável: não usar stack, só um array mudando as posições

#include <bits/stdc++.h> 
using namespace std; 
  
int main() {
    int n;
    vector<stack<int>> t;
    cin >> n;
    for (int i = 0; i < n; i++){
        int s, v = 0;
        cin >> s;
        for (auto & stack : t){
            if (stack.top() > s){
                stack.emplace(s);
                v = 1;
                break;
            }
        }

        if (i == 0 || v == 0){
            stack<int> st;
            st.emplace(s);
            t.push_back(st);
        }

    }
    cout << t.size() << endl;
    return 0;
    }