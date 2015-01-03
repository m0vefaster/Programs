#include<iostream>
#include<stdio.h>
#include <algorithm>
#include<math.h>
#include<string.h>
#include<vector>
#include<map>
#include <utility>
#include <time.h> 
#include <iomanip>
#define gc getchar

using namespace std;

void scanint( long long int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}


int main()
{

long long int T;
cin>>T;

while(T--)
{
long long int N,M;
long long int i,j,k;

cin>>N>>M;

long long int c[N],p[N],sum[N];
vector<long long int> v[N];


for(i=0;i<N;i++)
{
  scanint(c[i]);
  scanint(p[i]);
  
  sum[i]=0;  
}


v[0].push_back(p[0]);
sum[0]+=p[0];


for(i=1;i<N;i++)
{
   for(j=i-1;j>=0;j--)
   {
      for(k=0;k<v[j].size();k++)
      {
           
           v[j+1].push_back(v[j].at(k)+p[i]);
           sum[j+1]+=(v[j].at(k))+p[i];
      }
      
   }
   
   v[0].push_back(p[i]);
   sum[0]+=p[i];
}

long long int sumT=0;
long long int n=0;
for(i=M-1;i<N;i++)
{
  //cout<<"\nRow"<<i<<" sum is"<<sum[i]<<" "<<v[i].size()<<endl;
  //cout<<"\nVector is:";
  
  //for(j=0;j<v[i].size();j++)
   // cout<<v[i].at(j)<<" ";
    
  sumT+=sum[i];
  n+=v[i].size();
}

 long double ans= (( long double)sumT)/(( long double)n);
cout<<setprecision(10)<<ans<<endl;


}


}
