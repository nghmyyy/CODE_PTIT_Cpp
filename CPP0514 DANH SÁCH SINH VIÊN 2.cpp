#include<bits/stdc++.h>
using namespace std;
struct SinhVien     
{
    string ten, lop, ns;
    double gpa;
};
void viethoa(string &s){
        s[0] = toupper(s[0]);
    for(int i = 1; i < s.size(); i++){
        s[i] = tolower(s[i]);
    }
}
void nhap(SinhVien a[], int n){
    for(int i = 1; i <= n; i++){
        cin.ignore();
        getline(cin, a[i].ten);
        cin >> a[i].lop >> a[i].ns >> a[i].gpa;
    }
}
void in(SinhVien a[], int n){
    for(int i = 1; i <=n; i++){
        cout << "B20DCCN";
        string s = to_string(i);
        s = string(3 - s.size(), '0') + s;
        cout << s << " ";
        vector<string> v;
        stringstream ss(a[i].ten);
        string tok;
        while(ss >> tok){
            v.push_back(tok);
        }
        for(int j = 0; j < v.size(); j++){
            viethoa(v[j]);
            cout << v[j] <<" ";
        }
        cout << a[i].lop << " ";
        if(a[i].ns[1] == '/') a[i].ns = "0" + a[i].ns;
        if(a[i].ns[4] == '/') a[i].ns.insert(3, "0");
        cout << a[i].ns << " ";
        cout << fixed << setprecision(2) << a[i].gpa;
        cout << endl;

    }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}