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
#include<queue>
#include<stack>
#include<cstdio>
#include<list>
using namespace std;

/*
#define gc getchar

void scanint( int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}

*/

int getNotPossible(int *a,int lo,int hi,int x)
{
   int mid;
   //printf("\n Searching in %d %d",lo,hi);
   
   //if(x<a[lo])
     //return lo;
   
   if(x>a[hi])
      return -1;
  
   mid= (lo+hi)/2;

   if(lo==hi && a[lo]<=x)
   {
    return -1;
   }
   else if(lo==hi && a[lo]>x)
   {
     return lo;
   }
   
   //printf("\n Has come till here");
   
   if( x>=a[mid])
   {
    //printf("\nReturning from here1");
        /*if( mid+1<=hi && a[mid+1]>x)
        {
          //
          return mid+1;
        }
        else*/
        return getNotPossible(a,mid+1,hi,x);
   
   }
   
   else if(x<a[mid])
   {
   //printf("\nReturning from here2");
        /*if(mid-1>=lo && a[mid-1]<=x)
        {
           //
           return mid;
        }
        else*/
        return getNotPossible(a,lo,mid,x);
   }	       
   

   
}
int main()
{
int N;
int i,j,k;

while(1)
{

cin>>N;

if(N==0) break;

int a[N];

for(i=0;i<N;i++)
{
   cin>>a[i];    
}

sort(a,a+N);
/*
cout<<endl;

for(i=0;i<N;i++)
{
   cout<<a[i]<<" ";
}
*/
int sum=0;

for(i=0;i<N-2;i++)
{
   for(j=i+1;j<N-1;j++)
   {
       //cout<<"\n i,j,N are:"<<i<<" "<<j<<" "<<N;  
      int pos=getNotPossible(a,j+1,N-1,a[i]+a[j]);
      //cout<<"\n pos is:"<<pos;
      if(pos!=-1)
      {
         sum=sum+N-pos;
         //cout<<"\n sum1 for i is"<<sum;
      }
   }
   //cout<<"\n sum2 for i is"<<sum;
}


cout<<sum<<endl;

}


}
