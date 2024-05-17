#include <iostream>

using namespace std;

int main(){
	int n, seq[10000], t;
	
	cin>>n;
	
	for (int i = 0; i < n; i++){
		cin>>seq[i];
	}
    for (int i = 0; i < n - 2; i++){
		if (seq[i] == 1 && (seq[i]+seq[i + 1]+seq[i + 2]) == 1){
            t++;
        }
	}

    cout<<t;
    return 0;
}