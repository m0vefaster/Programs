#include<iostream>
//#include<stdio.h>
#include <algorithm>
#include<math.h>
#include<string>
#include<vector>
#include<map>
#include <utility>
#include <time.h> 
#include<limits>
#include<queue>
#include<stack>
#include<cstdio>
#include<list>
using namespace std;




int main()
{

long long int N,A,B;
long long int i,j,k,m,l,count=0;
cin>>N>>A>>B;

long long int S[N+1];
//S[0]=-20000001;

for(i=1;i<=N;i++)
{
  cin>>S[i];

}
//sort(S+1,S+N+1);


long long int cases=pow(2,N)-1;
long long int D[cases];
D[0]=0;
D[1]=S[1];

if(A<=0 && 0<=B)//empty subset
  count++;
  
if(A<=S[1] && S[1]<=B)//first subset
   count++;   
   


i=2;
long long int num=2;//current num 

while(i<=cases)
{

  
   D[i]=S[num];
   if(D[i]>=A && D[i]<=B)
       count++;
   //cout<<"\nSum1 for i is:"<<D[i]<<" "<<i; 
   k=i; 
   j=i+1;
   i++;
   while(j<2*k)//will run for i to 2*i-1
   {
     D[i]=D[k]+D[j%k];
     
     if(D[i]>=A && D[i]<=B)
       count++;
     
     //cout<<"\nSum2 for i is:"<<D[i]<<" "<<i; 
     //cout<<",D[k] and D[j%k] and j and  k are:"<<D[k]<<" "<<D[j%m]<<" "<<j<<" "<<k;
     j++;
     i++;
   }
   
  // m=m*2;//modulus
   num++;
}

//cout<<"\n\n";
cout<<count;

/*
//all d's

for(i=1;i<=cases;i++)
 cout<<"\ni and D[i] are:"<<i<<" "<<D[i];
*/

}
