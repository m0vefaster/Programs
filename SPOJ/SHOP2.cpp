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

void scanint( long long int &x)
{
    register  long long int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}

int a[25][25];

bool valid(int i,int j,int n,int m,vector< pair<int,int> > v)
{
   //cout<<"\nValidity of point i,j:"<<i<<" "<<j<<" is:";
   
   if(i>=0 && i<=n-1 && j>=0 && j<=m-1)
   {
       int k=0;
       while(k< v.size()) 
       {
          if(v.at(k).first ==i && v.at(k).second ==j)
          {
            //cout<<"false1";
            return false;
          }
          k++;
       }
       
       //cout<<"true";
       return true;
   }
   
   else
   {
     //cout<<"false2";
	 return false;
   }
      
}


int find(int i,int j,int sx,int sy,int dx,int dy,int n,int m,vector<pair<int,int> > v,int sum)
{
   //cout<<"\n";
   
   //for(int z=0;z<v.size();z++)
     // cout<<"=";
   //cout<<"Looking at i,j and val:"<<i<<" "<<j<<"  "<<a[i][j];
   //int f;
   //cin>>f;
   
   if(!valid(i,j,n,m,v) || a[i][j]==-1)
   {   
     return 65535;
   }
   
   else if(i==dx && j==dy )
   {
      //cout<<"\n\n Found Destiination, sum is:"<<sum;
      return sum;
   }
   
   //cout<<"\nConitinuing with i,j:"<<i<<" "<<j<<"  ";
   v.push_back(make_pair(i,j));
   sum+=a[i][j];
   
   int up   =find(i-1,j,sx,sy,dx,dy,n,m,v,sum);
   int right=find(i,j+1,sx,sy,dx,dy,n,m,v,sum);
   int down =find(i+1,j,sx,sy,dx,dy,n,m,v,sum);
   int left =find(i,j-1,sx,sy,dx,dy,n,m,v,sum);
   
  
   return (min(min(min(up,right),down),left));
    
}


int main()
{

int n,m,i,j;
char ch;
while(1)
{
   cin>>m>>n;
   
   if(m==0 && n==0)
      break;
      
      
      
   //int a[n][m];
   int sx,sy,dx,dy;
   
   for(i=0;i<n;i++)
   {
      for(j=0;j<m;j++)
      {
          cin>>ch;
          
          if(ch == 'S')
          {  
             a[i][j]=0;
             sx=i;sy=j;
          }
          
          else if (ch == 'D')
          {
             a[i][j]=0;
             dx=i;dy=j;
          
		  }
		  
		  else if(ch=='X')
		  {
		    a[i][j]=-1;
		  }
          else
          {
             a[i][j]=ch-48;
          }
      }
   }
   
   /*for(i=0;i<n;i++)
   {
      cout<<"\n";
      for(j=0;j<m;j++)
      {
         cout<<a[i][j]<<" ";
      }
   }*/
   
   vector<pair<int,int> > v;
   cout<<find(sx,sy,sx,sy,dx,dy,n,m,v,0);
   
   
}



}
