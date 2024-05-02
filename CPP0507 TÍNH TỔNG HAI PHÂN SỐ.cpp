#include<bits/stdc++.h>
using namespace std;
struct PhanSo 
{
    long long tu, mau;
};
void nhap(PhanSo &a){
    cin >> a.tu >> a.mau;
}
void rutgon(PhanSo &a){
    long long i = __gcd(a.tu, a.mau);
    a.tu /= i;
    a.mau /= i;
}
void in(PhanSo a){
    cout << a.tu <<"/"<< a.mau;
}
PhanSo tong(PhanSo a, PhanSo b){
    long long mc = a.mau * b.mau / __gcd(a.mau, b.mau);
    a.tu = mc/a.mau * a.tu;
    b.tu = mc/b.mau * b.tu;
    a.mau = mc;
    a.tu += b.tu;
    rutgon(a);
    return a;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}



