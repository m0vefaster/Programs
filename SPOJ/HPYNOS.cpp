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

long long int N;
int s[10]={0,1,4,9,16,25,36,49,64,81};

cin>>N;

int k=0;
set<long long int> myset;

while(N!=1)
{
   int sum=0;
   //cout<<"\n"<<N;
   while(N>0)
   {
     sum=sum+s[N%10];
     N=N/10; 
   }
   
   
   if(myset.find(sum)==myset.end())
   {
      myset.insert(sum);
   }    
   
   else
   {
      k=-1;
      break;
   }
   
    N=sum;
    k++;
}

cout<<k;

}
