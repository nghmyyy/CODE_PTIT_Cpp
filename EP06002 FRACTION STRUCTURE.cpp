#include<bits/stdc++.h>
using namespace std;
struct Fraction{
    long long mau, tu;
};
void input(Fraction &a){
    cin >> a.tu >> a.mau;
}
void simplify(Fraction &a){
    long long x1 = __gcd(a.tu, a.mau);
    a.tu /= x1;
    a.mau /= x1;
}
void print(Fraction &a){
    cout << a.tu <<"/"<< a.mau << endl;

}
int main() {
	struct Fraction p;
	input(p);
	simplify(p);
	print(p);
	return 0;
}