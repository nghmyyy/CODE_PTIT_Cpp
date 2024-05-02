#include<bits/stdc++.h>
using namespace std;
int pr[40000];
// void sangnguyento()
// {
//     for(int i=0;i<40000;i++)  pr[i]=1;
//     pr[0]=0;pr[1]=0;pr[2]=1;
//     for(int i=2;i<40000;i++)
//     {
//         for(int j=i*i;j<40000;j+=i)
//         {
//             pr[j] = 0;
//         }
//     }
// }
int nt(long long x)
{
    if(x==1 || x==0 ) return 0;
    if(x==2) return 1;
    for(int i=2;i<=sqrt(x);i++)
    {
        if(x%i==0) return 0;
    } 
    return 1;
}
int tang(long long n)
{
    long long x=n;
    int d=x%10;//123
    x/=10;
    while(x!=0)
    {
        int l = x%10;
        if(l>=d) return 0;
        x/=10;
        d=l;
    }
    return 1;
}
int giam(long long n)
{
    long long y=n;
     int d=y%10;
    y/=10;//321 d=1 l=2  
    while(y!=0)
    {
        int l = y%10;
        if(l<=d) return 0;
		y/=10;
		d=l;
       
    }
    return 1;
}
// void dreamer(int n)
// {
   
// }
int main()
{
    // sangnguyento();
    int t;
    cin>>t;
    while(t--)
    {
        long long n;cin>>n;
        int cnt=0;
    int first=1;
    for(int i =1;i<n;i++) first*=10;
    long long end=1;
    for(int i=0;i<n;i++) end*=10;
    end-=1;
    for(long long i=first;i<=end;i++)
    {
        if( (tang(i)||giam(i))&& nt(i) )
    		cnt++;
    }

        cout<<cnt;
        cout<<endl;
    }
}