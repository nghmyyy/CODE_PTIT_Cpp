#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[101];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    for(int i = 0; i < n-1; i++){
        int j = i + 1;
        while(j < n){
            if(a[i] == a[j]){
                for(int k = j; j < n -1; k++){
                    a[k] = a[k+1];
                }
                n--;
                i--;
            }
            else{
                j++;
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}