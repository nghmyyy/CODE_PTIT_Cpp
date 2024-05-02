#include<bits/stdc++.h>
using namespace std;
struct PhanSo
{
    unsigned long long a, b;
};
void nhap(PhanSo &n){
    cin >> n.a >> n.b;
}
void rutgon(PhanSo &n){
    long long i =  __gcd(n.a, n.b);
    n.a /= i;
    n.b /= i;
}
void in(PhanSo n){
    cout << n.a << "/" << n.b;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}