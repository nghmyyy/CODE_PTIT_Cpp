#include<bits/stdc++.h>
using namespace std;
struct MatHang
{
    string nhom, mh;
    int stt;
    double gm, gb;
    double ln = gb - gm;
};
void nhap(MatHang a[], int n){
    for(int i = 0; i < n; i++){
        cin.ignore();
        getline(cin, a[i].mh);
        cin.ignore();
        getline(cin, a[i].nhom);
        cin >> a[i].gm >> a[i].gb;
        a[i].stt = i + 1;
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
        cout << a[i].stt <<" "<< a[i].nhom << " " << a[i].mh << " " << a[i].ln << endl;
    }
}