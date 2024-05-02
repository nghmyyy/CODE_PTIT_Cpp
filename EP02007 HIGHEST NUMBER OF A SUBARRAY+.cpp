#include<bits/stdc++.h>

using namespace std;

int main(){
    int T; cin >> T;
    while(T--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int &x : a) {cin >> x;}
        /* cách multiset
        multiset<int> ms;
        for(int i = 0; i < k; i++){
            ms.insert(a[i]);
        }
        cout << *ms.rbegin() << " ";

        for(int i = k; i < n; i++){
            // xóa phần tử ở chỉ số i-k
            // thêm phần tử ở chỉ số i
            ms.erase(ms.find(a[i-k]));
            ms.insert(a[i]);
            cout << *ms.rbegin() << " ";
        }
         cout << endl; */
        // cách deque
        deque<int> dq;
        for(int i = 0; i < k; i++){
            while(!dq.empty()&& a[i] > a[dq.back()]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        cout << a[dq.front()] << " ";
        for(int i = k; i < n; i++){
            if(dq.front() <= i-k){
                dq.pop_front();
            }
            while(!dq.empty() && a[i] > a[dq.back()]){
                dq.pop_back();
            }
            dq.push_back(i);
            cout << a[dq.front()] << " ";
        }
        cout << endl;
    }
}