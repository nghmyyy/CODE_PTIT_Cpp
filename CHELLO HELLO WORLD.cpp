#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double n;
	cin >> n;
	double sum = 0;
	while(n >= 1){
		sum += 1/n;
		n-- ;
	}
	std :: cout << fixed << setprecision(4) << sum << endl;
}