#include<iostream>
#define R(i,k,n) for(int i=k;i<=n;i++)
using namespace std;
int j,n,t,a[110][110],s;
main(){cin>>t;while(t--){cin>>n;s=0;R(i,1,n){R(j,1,i){cin>>a[i][j];a[i][j]+=max(a[i-1][j],a[i-1][j-1]);s=max(s,a[i][j]);}}cout<<s<<endl;}}
