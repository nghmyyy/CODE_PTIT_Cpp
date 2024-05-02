#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int q = n + m;
        int a[100001];
        int b[100001];
        int c[200002];
        int j = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            c[j++] = a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
            c[j++] = b[i];
        }
        sort(c, c + q);
        for(int j = 0; j < q; j++){
            cout << c[j] <<" ";
        }
        cout << endl;
    }
    
}