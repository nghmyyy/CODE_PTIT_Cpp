#include<bits/stdc++.h>
using namespace std;
struct ThiSinh
{
    string ten;
    string sinhnhat;
    double d1, d2, d3;
};
void nhap(ThiSinh &a){
    getline(cin, a.ten);
    getline(cin,a.sinhnhat);
    cin >> a.d1 >> a.d2 >> a.d3;
}
void in(ThiSinh a){
    cout << a.ten << " "<< a.sinhnhat <<" ";
    cout << fixed << setprecision(1) << a.d1 + a.d2 + a.d3;
    cout << endl;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}