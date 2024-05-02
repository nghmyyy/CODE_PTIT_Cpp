#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[1000001];
        int b[1000001];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        long long max = 0;
        long long min = 100000000;
        for(int i = 0; i < n ; i++){
            if(a[i] > max){
                max = a[i];
            }
        }
        for(int i = 0; i < n ; i++){
            if(b[i] < min){
                min = b[i];
            }
        }
        cout << max*min << endl;

        
        
    }
    
}