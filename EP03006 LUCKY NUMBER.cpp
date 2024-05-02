#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int sumdigits(int n){
    int sum = 0;
    while(n>0){
        sum += (n%10);
        n/=10;
    }
    return sum;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string a;
        cin >> a;
        int tmp = 0;
        int temp;
        for(int i = 0; i < a.length(); i++){
            temp = a[i] - 48;
            tmp += temp;
        }
        set<int> ll;
        ll.insert(9);
        for(int i = 0; i < 1000; i++){
            if(ll.find(sumdigits(i)) != ll.end()){
                ll.insert(i);
            }
        }
        if(ll.find(tmp) != ll.end()){
            cout << "1" << endl;
        }
        else{
            cout << "0" << endl;
        }

    }
}