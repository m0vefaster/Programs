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

   long long int N,K,i,j;
   
   
   cin>>N>>K;
   long long int a[N];
   map<long long int,long long int> mymap;

   i=0;
   while(i<N)
   {
      cin>>a[i];
      mymap.insert ( std::pair<long long int,long long int>(a[i],i) );
      
      i++;
   }
   
   
   i=0;
   long long int count=1000001;
  // cout<<"\n\nK is "<<K;
  int found=0;
   while(i<N)
   {
      long long int x= K- a[i];
      long long int r=mymap[x];
     // cout<<"\n\nr for x  and a[i]is:"<<r<<" "<< x << " "<<a[i]<<endl;
      if(r>0 && x!=a[i])
      {
         if( r <= i)
         {
            break; 
         }
         
         if(  ( max(i,N-r-1) + 1) < count )
             count= max(i,N-r-1) + 1;
      }
      
      i++;
   }
   
   

     cout<<count<<endl;
   
  
   
   
}
