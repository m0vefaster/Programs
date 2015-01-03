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

   long int N,K,i,j,l,r;
    cout<<"hello1";
     long int A[500000],B[500000];
   
   cout<<"hello";
   cin>>N>>K;
   
   long long int a[N+1];
   i=1;
   
   while(i<=500001)
   {
      A[i]=-1;
      B[i]=-1;
      i++;
   }
   
   i=1;
   while(i<=N)
   {
      cin>>a[i];
      B[a[i]]=i;
      
      i++;
   }
   
   i=N;
   
   while(i>=1)
   {
      A[a[i]]=i;
      i--;
   }
   
}
