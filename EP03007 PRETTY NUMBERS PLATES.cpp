#include<bits/stdc++.h>
using namespace std;
// 5 6 7 9 10
int asc(string n){
    if(n[5] < n[6] && n[6] < n[7] && n[7] < n[9] && n[9] < n[10]){
        return 1;
    }
    else{
        return 0;
    }
}
int identical(string n){
    if(n[5] == n[6] && n[6] == n[7] && n[7] == n[9] && n[9] == n[10]){
        return 1;
    }
    else{
        return 0;
    }
}
int pr(string n){
    int count = 0;
    if(n[5] == n[6] && n[6] == n[7]){
        count++;
    }
    if(n[9] == n[10]){
        count++;
    }
    if(count == 2){
        return 1;
    }
    else{
        return 0;
    }
}
int loc_phat(string n){
    if(n[5] != '6' && n[5] != '8'){return 0;}
    if(n[6] != '6' && n[6] != '8'){return 0; }
    if(n[7] != '6' && n[7] != '8'){return 0; }
    if(n[9] != '6' && n[9] != '8'){return 0;}
    if(n[10] != '6' && n[10] != '8'){return 0;}
     return 1;
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string n;
        getline(cin,n);
        if(asc(n) == 1 || identical(n)==1 || pr(n)== 1 || loc_phat(n) == 1){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
        cout << endl;
    }

}