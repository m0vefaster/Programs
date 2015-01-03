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

cin>>T;

while(T--)
{
  int n,m;
  cin>>n>>m;
  
  int i,j;
 
 if(n <= m)
        {
            if(n%2==0)printf("L\n");
            else if(n%2==1) printf("R\n");
        }
  else if(n > m)
        {
            if(m%2==0)printf("U\n");
            else if(m%2==1) printf("D\n");
        }
  cout<<endl;
       
}


}
