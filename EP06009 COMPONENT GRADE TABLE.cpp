#include<bits/stdc++.h>
using namespace std;
vector<string> v;
struct student{
    int stt;
    string id, name, cls;
    double fg, sg, tg;
};
void nhap(student a[], int n){
    for(int i = 0; i < n; i++){
        cin >> a[i].id;
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].cls >> a[i].fg >> a[i].sg >> a[i].tg;
    }
}
string chuanhoa(string s){
    stringstream ss(s);
    string token;
    string res = "";
    while(ss >> token){
        v.push_back(token);
    }
    res += v[v.size() - 1];
    for(int i = 0; i < v.size() - 1; i++){
        res += v[i];
    }
    return res;
}
bool cmp(student a, student b){
    string ten1 = chuanhoa(a.name);
    string ten2 = chuanhoa(b.name);
    return ten1 < ten2;
}
void sx(student a[], int n){
    for(int i = 0; i < n; i++){
        sort(a, a + n, cmp);
    }
}
void in(student a[], int n){
    for(int i = 0; i < n; i++){
        a[i].stt = i + 1;
        cout << a[i].stt <<" ";
        cout << a[i].id <<" "<<a[i].name<<" "<<a[i].cls<<" ";
        cout<<fixed<< setprecision(1)<<a[i].fg<<" "<<a[i].sg<<" "<<a[i].tg;
        cout << endl;
    }
}
int main(){
    struct student a[101];
    int n; cin >> n;
    nhap(a,n);
    sx(a,n);
    in(a,n);
}