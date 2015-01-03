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

int T;
int i,j;
cin>>T;

while(T--)
{
int n;
cin>>n;

int a[n],index=0,count=0;

for(i=0;i<n;i++)
{
//cin>>a[i];
scanint(a[i]);
if(a[index]==a[i])
  count++;

else
  count--;
  
if(count==0)
{
 index=i;
 count=1;
}    

}


int maj=a[index];
count=0;
for(i=0;i<n;i++)
{
  if(a[i]==maj)
   count++;
}

if(count > n/2)
{
  cout<<"YES "<<a[index]; 
}

else
  cout<<"NO";

cout<<endl;  

}

}
