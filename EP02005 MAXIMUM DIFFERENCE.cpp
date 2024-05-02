#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		int a[10000];
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int min_val = a[0];
		int res = -1e9;
		for(int i = 1; i < n; i++){
			if(a[i] > min_val){
				res = max(res, a[i] - min_val);
			}
			min_val = min(a[i], min_val);
		}
		if(res == -1e9){
			cout << "-1";
		}
		else{
			cout << res;
		}
		cout << endl;
	}
}
