#include<iostream>
using namespace std;
	
	int main(){
		int t;
		cin >> t;
		while(t--){
			int n;
			cin >> n;
			int a[1001];
			for(int i = 0; i < n;i++){
				cin >> a[i];
			}
			int l, r;
			cin >> l >> r;
			int max = 0;
			int k;
			for(int i = l; i <= r; i++){
				if(a[i] > max){
					max = a[i];
					k = i;
				}
			}
			int dem = 0;
			for(int i = l; i < k; i++){
				if(a[i] >  a[i+1]){
					dem++;
					cout << "No\n";
					break;
				}
			}
		//			cout << dem << k;
			for(int j = k ; j <= r; j++){
				if(a[j] < a[j+1]){
					dem++;
					cout << "No\n";
					break;
				}
			}
		//	cout << dem << k;
			if(dem == 0){
				cout << "Yes\n";
			}
		}
	}	
			
			
			
			
			
			
