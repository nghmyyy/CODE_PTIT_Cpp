#include<iostream>
using namespace std;
int main (){
	int n, m;
	int a[1000], b[1000];
	cin >> n >> m;
	for(int i = 0; i < n;i++){
		cin >> a[i];
	}
	for(int j = 0; j < m; j++){
		cin >> b[j];	
	}
	int p;
	cin >> p;
	for(int i = 0; i < p; i++){
		cout << a[i] << " ";
	}
	for(int j = 0; j < m; j++){
		cout<< b[j] <<" ";
	}
	for(int i = p; i < n;i++){
		cout<< a[i] <<" ";
	}
	cout << endl;
}
