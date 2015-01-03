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
int c[25][25];

bool valid(int i,int j,int n,int m)
{
   cout<<"\nValidity of point i,j:"<<i<<" "<<j<<" is:";
   cout<<c[i][j]<<" ";
   if(i>=0 && i<=n-1 && j>=0 && j<=m-1 && c[i][j]==65535 && a[i][j]!=-1)
   {     
       cout<<"true\n";
       return true;
   }
   
   else
   {
     cout<<"false\n";
	 return false;
   }
      
}



bool wayToSort(vector<int> a,vector<int> b)
{
   return a.at(2)<b.at(2);
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
          c[i][j]=65535;
          
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
   
   for(i=0;i<n;i++)
   {
      cout<<"\n";
      for(j=0;j<m;j++)
      {
         cout<<c[i][j]<<" ";
      }
   }
   
   queue<vector<int> > q;
   vector<int> v;
   v.push_back(sx);
   v.push_back(sy);
   v.push_back(0);
   
   q.push(v);
   
   int sum=0;
   int input;
   while(!q.empty())
   {

   
      v=q.front();
      i=v.at(0);
      j=v.at(1);
      sum=v.at(2);
      q.pop();
      
      cout<<"\n Pop-ing i,j"<<i<<","<<j;
      
     // cin>>input;

           
     /* if(i==dx && j==dy && sum<c[i][j])
      {
         c[i][j]=sum;
      }
      
      else
      {*/
         if(c[i][j]>sum)
         {
           c[i][j]=sum;
         }
      
	     
		 
         vector<vector<int> > v2;
         if(valid(i-1,j,n,m))
	      {
	         c[i-1][j]=a[i-1][j]+sum;
	         vector<int> v;
	         v.push_back(i-1);
	         v.push_back(j);
	         v.push_back(c[i-1][j]);
	         cout<<"\nPushing i-1,j:"<<i-1<<","<<j;
	         v2.push_back(v);
	           
	      }
	      if(valid(i,j+1,n,m))
	      {
	         c[i][j+1]=a[i][j+1]+sum;
	         vector<int> v;
	         v.push_back(i);
	         v.push_back(j+1);
	         v.push_back(c[i][j+1]);
	         cout<<"\nPushing i,j+1:"<<i<<","<<j+1;
	         v2.push_back(v);
	          
	      }
	      
	      if(valid(i+1,j,n,m))
	      {
	         c[i+1][j]=a[i+1][j]+sum;
	         vector<int> v;
	         v.push_back(i+1);
	         v.push_back(j);
	         v.push_back(c[i+1][j]);
	         cout<<"\nPushing i+1,j:"<<i+1<<","<<j;
	         v2.push_back(v);
	        
	      }
	      if(valid(i,j-1,n,m))
	      {
	         c[i][j-1]=a[i][j-1]+sum;
	         vector<int> v;
	         v.push_back(i);
	         v.push_back(j-1);
	         v.push_back(c[i][j-1]);
	         cout<<"\nPushing i,j-1:"<<i<<","<<j-1;
	         v2.push_back(v);
	         
	      }
	      
	      sort(v2.begin(),v2.end(),wayToSort);
	      
	      int k=0;
	      while(k<v2.size())
	      {
	        q.push(v2.at(k));
			k++;
	      }
	     
    
      
      
   }
   
   
   for(i=0;i<n;i++)
   {
      cout<<"\n";
      for(j=0;j<m;j++)
      {
         cout<<c[i][j]<<" ";
      }
   }
   
   
      
   cout<<c[dx][dy]<<endl;

   
}



}
