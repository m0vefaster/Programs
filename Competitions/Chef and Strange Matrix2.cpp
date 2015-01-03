#include<iostream>
#include<stdio.h>
#include <algorithm>
#include<math.h>
#include<string.h>
#include<vector>
#include<map>
#include <utility>
#include <time.h> 
#include<limits>
using namespace std;

int main()
{

long long int N,M,P;

cin>>N>>M>>P;

long long int a[N][M],i,j,k;

for(i=0;i<N;i++)
{

for(j=0;j<M;j++)
  {
    a[i][j]=j+1;
  }
}

k=0;

while(k<P)
{
   cin>>i>>j;
   i--;j--;
   
   a[i][j]++;
   k++;
}





for(i=0;i<N;i++)
{
int sum=0;
for(j=M-1;j>0;j--)
  {
    
    if(a[i][j]>=a[i][j-1])
    {
       sum=sum+a[i][j]-a[i][j-1];
       //cout<<"\nSum is:"<<sum<<" "<<a[i][j]<<" "<<a[i][j-1];
    }
    else
    {
       sum=-1;
       break;
    }
      
    
  }
  cout<<sum<<endl;
}


}




