#include<bits/stdc++.h>
using namespace std;
struct tt
{
    int hour, minus, sc;
};
void nhap(tt a[], int n){
    for(int i = 0; i < n; i++){
        cin >> a[i].hour >> a[i].minus >> a[i].sc;
    }
}
bool cmp(tt a, tt b){
    if(a.hour != b.hour){
        return a.hour < b.hour;
    }
    else{
        if(a.minus != b.minus) return a.minus < b.minus;
        else{
            return a.sc < b.sc; 
        }

    }
}
void sx(tt a[], int n){
    for(int i = 0; i < n;i++){
        sort(a, a+n, cmp);
    }
}
void in(tt a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i].hour <<" "<< a[i].minus<<" "<< a[i].sc << endl;
    }
}
int main(){
    struct tt a[5001];
    int n; cin >> n;
    nhap(a, n);
    sx(a,n);
    in(a,n);
    
}