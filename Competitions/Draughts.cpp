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



#define gc getchar
int read_int() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}

int main()
{
 long long int N,M,K,i,j,s,f;
 
 cin>>N>>M;
 
 long long int O[N+1],C[N+1],Count[N+1];
 
     i=1;
 
	 while(i<=N)
	 {
	    cin>>O[i];
	    C[i]=i;
	    Count[i]=0;
	    i++;
	 }
	 
	 
	 
	 
	 
 
   i=1;
   
   while(i<=M)
   {
     cin>>s>>f;
     
     if(Count[s] < Count[f])
     {
       Count[s]++;
       C[f]=s;
     }
     
     else
     {
       Count[f]++;
       C[s]=f;
     }
     
     i++;
     
   }
   
   
   
   
   
   
   
   
 }
 
 
 
 
