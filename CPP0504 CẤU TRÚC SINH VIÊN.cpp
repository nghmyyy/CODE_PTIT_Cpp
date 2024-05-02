#include<bits/stdc++.h>
using namespace std;
struct SinhVien
{
    string ten;
    string lop;
    string ngay;
    float diem;
};
void nhap( SinhVien &a){
    getline(cin, a.ten);
    getline(cin, a.lop);
    getline(cin, a.ngay);
    cin >> a.diem;
}
void in( SinhVien a){
    cout << "B20DCCN001 "<< a.ten <<" "<< a.lop <<" ";
    if(a.ngay[1] == '/'){
        a.ngay = "0" + a.ngay;
    }
    if(a.ngay[4] == '/'){
        a.ngay.insert(3, "0");
    }
    cout << a.ngay <<" ";
    cout << fixed << setprecision(2) << a.diem;
    cout << endl; 
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}