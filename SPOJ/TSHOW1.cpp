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
#include<set>
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

long long int K,sum;
int N;

cin>>N;

while(N--)
{
   cin>>K;
   sum=0;
   
   long long int i=1;
   int j=0;
   long long int mul=1;
   while(j<15)
   {
       cout<<"\n"<<(i&K)<<endl;
	   if( i&K ==0)
	   {
	      sum=sum+5*mul;
	   }
	   
	   else
	   {
	       sum=sum+6*mul;  
	   }
	   
	   j++;
	   mul*=10;
	   i=i*2;
   }
   
   cout<<sum<<endl;
}


}
