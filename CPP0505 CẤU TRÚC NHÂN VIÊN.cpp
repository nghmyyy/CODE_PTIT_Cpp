#include<bits/stdc++.h>
using namespace std;
struct NhanVien
{
    string ten, gt, ns, dc, mst, nkhd;
};
void nhap(NhanVien &a){
    getline(cin, a.ten);
    cin >> a.gt >> a.ns;
    getline(cin, a.dc);
    cin >> a.mst >> a.nkhd;
}
void in(NhanVien a){
    cout << "00001" << a.ten <<" " << a.gt <<" "<<a.ns<<" " << a.dc  <<" "<< a.mst << " " <<a.nkhd;
    cout << endl;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}