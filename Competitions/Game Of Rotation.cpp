#include<iostream>
#include<stdio.h>
#include <algorithm>
#include<math.h>
#include<string.h>
#include<vector>
#include<map>
#include <utility>
#include <time.h> 
using namespace std;




int main()
{

long long int N;
cin>>N;

long long int a[N],i,j,sumT=0,sumCur=0,sumMax;

for(i=0;i<N;i++)
{
  cin>>a[i];
  sumT+=a[i];
  sumCur+=a[i]*(i+1);
}

sumMax=sumCur;
for(i=0;i<N;i++)
{
    sumCur=sumCur-sumT+a[i]*N;
    if(sumCur>sumMax)
     sumMax=sumCur;
}


cout<<sumMax;

}
