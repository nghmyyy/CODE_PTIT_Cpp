#include<iostream>
using namespace std;
int main(){
	int t; 
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[100000];
		int max = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < n; i++){	
			if(a[i] > max){
				max = a[i];
			}
		}
		cout << max << endl;
	}
}
