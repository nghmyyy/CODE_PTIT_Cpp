#include<bits/stdc++.h>
using namespace std;
struct SinhVien
{
    string ten, lop, ns;
    double gpa;
};
void nhapThongTinSV(SinhVien &a){
    getline(cin, a.ten);
    getline(cin, a.lop);
    getline(cin, a.ns);
    cin >> a. gpa;
}
void inThongTinSV(SinhVien a){
    cout << "N20DCCN001" << a.ten << a.lop;
    if(a.ns[1] == '/'){
        a.ns.insert(0, "0");
    }
    if(a.ns[4] == '/'){
        a.ns.insert(0, "0");
    }
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}