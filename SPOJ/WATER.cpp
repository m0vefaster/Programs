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

#define gc getchar

void scanint( int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}

int min4(int a,int b,int c,int d)
{
   return min(min(min(a,b),c),d);
}


int main()
{

int T;
cin>>T;

while(T--)
{


int n,m,i,j;

scanint(i);
scanint(j);


int a[n][m];
bool visit[n][m];

for(i=0;i<n;i++)
{
  for(j=0;j<m;j++)
  {
     scanint(a[i][j]);
     visit[i][j]=true;
  }
}

int sum=0;
int temp;
for(i=1;i<n-1;i++)
{
  for(j=1;j<m-1;j++)
  {
     int up=a[i-1][j];
     int right=a[i][j+1];
     int down=a[i+1][j];
     int left=a[i][j-1];
     
     if(a[i][j]<up && a[i][j]<right && a[i][j]<down && a[i][j]<left )
     {
          temp=min4(up,right,down,left);
          sum=temp-a[i][j];
          a[i][j]=temp;
     }
     if(a[i][j]<up && a[i]<left )
     {
           temp=min(up,left);
              
     }
  }

}


}



}
