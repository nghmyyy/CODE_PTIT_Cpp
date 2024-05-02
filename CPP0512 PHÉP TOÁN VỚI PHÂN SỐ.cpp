#include<bits/stdc++.h>
using namespace std;
struct PhanSo
{
    long long tu, mau;
};
void rutgon(long long &a, long long &b){
    long long i = __gcd(a,b);
    a /= i;
    b /= i;
}
void process(PhanSo &a, PhanSo &b){ 
    long long a1 = a.tu, a2 = a.mau, b1 = b.tu, b2 = b.mau;
    // tim C
    long long mc = (a.mau * b.mau) / __gcd(a.mau, b.mau);
    a.tu = mc/a.mau * a.tu;
    b.tu = mc/b.mau * b.tu;
    a.mau = mc;
    a.tu += b.tu;
    a.tu *= a.tu;
    a.mau *= a.mau;
    rutgon(a.tu, a.mau);
    cout << a.tu <<"/"<< a.mau<< " ";
    // tim D
    a1 = a1*b1*a.tu;
    a2 = a2 * b2 * a.mau ;
    rutgon(a1, a2);
    cout << a1 << "/" << a2 << endl;
     
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}