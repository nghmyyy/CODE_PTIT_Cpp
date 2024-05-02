#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		int a[150][150];
		cin >> n;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> a[i][j];
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if(j == n - 1 && i == 0){
					cout << a[i][j] <<"\n";
				}
				else if(i == 0 || j == 0 || i == n - 1 ){
					cout << a[i][j] <<" ";
				}
				else if(j == n - 1){
					cout << a[i][j] << "\n";
				}	
				else{
					cout << " " << " ";
				}

			}
		}
		cout << endl;
	}
}
	
