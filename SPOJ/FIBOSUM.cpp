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

int max=1;
long long int S=100000;
long long int SUM[S];
int a,b,c;
a=0;
b=1;


SUM[0]=0;
SUM[1]=1;

while(T--)
{
int N,M;

cin>>N>>M;

if(M>max)
{
   
   while(max<=M)
   {
     c=a+b;
     a=b;
     b=c;
     SUM[max+1]=SUM[max]+c;
     SUM[max+1]%=1000000007;
     max++;
   }   
}

cout<<SUM[M]-SUM[N-1]<<endl;

/*
for(int i=0;i<=max;i++)
{
  cout<<F[i]<<" ";
}

cout<<endl;
for(int i=0;i<=max;i++)
{
  cout<<SUM[i]<<" ";
}
*/
}



}
