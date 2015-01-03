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

int N,A,B;
int i,j,k;
cin>>N>>A>>B;

long long int S[N+1];
//S[0]=-20000001;

for(i=1;i<=N;i++)
{
  cin>>S[i];

}
sort(S+1,S+N+1);

i=0;
long long int sum=0,count=0;
long long int cases=pow(2,N)-1;
//long long int D[cases];
//D[cases]=-1;


while(i<=cases)
{
   j=1;
   k=1;
   sum=0;
   
   while(k<=N)
   {
      if(j & i)
      {
         
         sum+=S[k];
      }
      
    if(sum>B)
    {
      k=-1;
      break;
    }

      j=j*2;
      k++;
   }
    
	  
    //cout<<"\nSum for i is:"<<sum<<" "<<i; 
   if(sum>=A && k!=-1)
     count++;
   
   i++;
}

cout<<count;

}
