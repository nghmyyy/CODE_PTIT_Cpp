#include<bits/stdc++.h>
using namespace std;
struct SinhVien
{
    string msv, ten, ns, lop;
    double gpa;
};
void nhap(SinhVien a[], int n){
    for(int i = 0; i < n; i++){
        cin.ignore();
        getline(cin, a[i].ten);
        cin >> a[i].lop >> a[i].ns >> a[i].gpa;
        a[i].msv = to_string(i+1);
        a[i].msv = string(3-a[i].msv.size(), '0') + a[i].msv;
        a[i].msv = "B20DCCN" + a[i].msv;
    }
}
void viethoa(string &s){
    s[0] = toupper(s[0]);
    for(int i = 1; i < s.size(); i++){
        s[i] = tolower(s[i]) ;
    }
}
bool cmp1(SinhVien n, SinhVien m){
    return n.gpa > m.gpa;
}
void sapxep(SinhVien a[], int n){
    sort(a, a + n, [](SinhVien &a, SinhVien &b){
        return a.gpa > b.gpa;
    });
}
void in(SinhVien a[], int n){
    for(int i = 0; i < n; i++){

        cout << a[i].msv <<" ";
        vector<string> v;
        stringstream ss(a[i].ten);
        string tok;
        while(ss >> tok){
            v.push_back(tok);
        }
        for(int j = 0; j < v.size(); j++){
            viethoa(v[j]);
            cout << v[j] << " ";
        }
        if(a[i].ns[1] == '/') a[i].ns = "0" + a[i].ns;
        if(a[i].ns[4] == '/') a[i].ns.insert(3, "0");
        cout << a[i].lop <<" " <<a[i].ns<<" ";
        cout << fixed << setprecision(2) << a[i].gpa;
        cout << endl;

    }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
