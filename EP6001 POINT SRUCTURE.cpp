#include<bits/stdc++.h>
using namespace std;
struct Point{
    double x, y;
};
void input(Point &a){
    cin >> a.x >> a.y;
}
void distance(Point a, Point b){
    double a1 = (a.x-b.x)*(a.x-b.x);
    double b1 = (a.y - b.y) * (a.y - b.y);
    double kq = sqrt(a1 + b1);
}
int main(){
   struct Point A, B;
int t;
cin>>t;
while(t--){
 input(A); input(B);
cout << fixed << setprecision(4) << distance(A,B) << endl;
}
return 0;
}