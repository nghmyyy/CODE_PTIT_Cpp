#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string tok;
        vector<string> a;
        while(ss >> tok){
            a.push_back(tok);
        }
        int chan = 0, le = 0, dem = 0;
        for(int i = 0; i < a.size();i++){
            int k = a[i].size() - 1;
            if((a[i][k] - '0') % 2 == 0){
                chan++;
            }
            else{
                le++;
            }
            dem++;
        }
        if(chan > le && dem%2 == 0){
            cout << "YES" << endl;
        }
        else if(chan < le && dem%2 != 0){
            cout << "YES" << endl; 
        }
        else{
            cout << "NO" <<endl;
        }
    }
    
}