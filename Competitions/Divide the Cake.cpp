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

#define gc getchar

void scanint(  int &x)
{
    register  int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}


int main()
{


int T;

cin>>T;

while(T--)
{
   int N;
   cin>>N;
   
   if(360%N ==0 )
   {
      cout<<"y ";
   }
   
   else
   {
     cout<<"n ";
   }
   
   
   
   
   
   if(N<=360 )
   {
    cout<<"y ";
   }
   else
   {
     cout<<"n ";
   }
   
   
   
   
   /*if(N<360 && 360%N!=0)
   {
     cout<<"y ";
   }
   */
    if (N*(N+1) < 720)
   {
      cout<<"y ";
   }
   
   else
   {
    cout<<"n ";
   }
   
   cout<<endl;
} 

}
