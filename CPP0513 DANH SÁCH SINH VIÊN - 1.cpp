#include<bits/stdc++.h>
using namespace std;
struct MatHang
{
    string nhom, mh;
    int stt;
    double gm, gb;
    double ln ;
};
void nhap(MatHang a[], int n){
    for(int i = 0; i < n; i++){
        cin.ignore();
        getline(cin, a[i].mh);
        getline(cin, a[i].nhom);
        cin >> a[i].gm >> a[i].gb;
        a[i].stt = i + 1;
        a[i].ln = a[i].gb - a[i].gm;
    }
}
void sx(MatHang a[], int n){
    for(int i = 0; i < n; i++){
        sort(a, a+n, [](MatHang &a, MatHang &b){
            return a.ln > b.ln;
        });
    }
}
void in(MatHang a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i].stt <<" "<< a[i].mh << " " << a[i].nhom << " " <<fixed<<setprecision(2) << a[i].ln << endl;
    }
}
int main(){
    struct MatHang ds[50];
    int n; cin >> n;
    nhap(ds, n);
    sx(ds,n);
    in(ds,n);
}
