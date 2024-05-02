#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++){

		int x, y, p;
		cin >> x >> y >> p;
		int A[101], B[101];

		for(int a = 0; a < x; a++){
			cin >> A[a];
		}
		for(int b = 0; b < y; b++){
			cin >> B[b];
		}
		cout << "Test " << i <<":\n";
		for(int a = 0; a < p; a++){
			cout << A[a] << " ";
		}
		for(int b = 0; b < y; b++){
			cout << B[b] << " ";
		}
		for(int a = p; a < x; a++){
			cout << A[a] << " ";
		}
		cout << endl;
	}
}
		
