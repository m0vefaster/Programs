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


//bool visit[25][25];

bool valid(int i,int j,int n,int m)
{
   //cout<<"\nValidity of point i,j:"<<i<<" "<<j<<" is:";
   //cout<<c[i][j]<<" ";
   if(i>=0 && i<=n-1 && j>=0 && j<=m-1 )// && !visit[i][j])
   {     
       //cout<<"true\n";
       return true;
   }
   
   else
   {
     //cout<<"false\n";
	 return false;
   }
      
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
      
      
      
   int a[n][m];
   int c[n][m];
   bool v[n][m];
   
   int sx,sy,dx,dy;
   
   for(i=0;i<n;i++)
   {
      for(j=0;j<m;j++)
      {
          cin>>ch;
           //ch=gc();
          c[i][j]=65535;
          v[i][j]=false;
          //visit[i][j]=false;
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
		    v[i][j]=true;
		  }
          else
          {
             a[i][j]=ch-48;
          }
      }
   }
   
  /* for(i=0;i<n;i++)
   {
      cout<<"\n";
      for(j=0;j<m;j++)
      {
         cout<<c[i][j]<<" ";
      }
   }*/
   
   queue<int> q;

   q.push(sx);
   q.push(sy);
   
   c[sx][sy]=0;
   
   
   //int sum=0;
   int input;
   while(!q.empty())
   {

   
 
      i=q.front();
      q.pop();
      j=q.front();
      q.pop();
      
      //cout<<"\n Pop-ing i,j"<<i<<","<<j;
      
     // cin>>input;

           
     /* if(i==dx && j==dy && sum<c[i][j])
      {
         c[i][j]=sum;
      }
      
      else
      {*/

         //int old=a[i][j];
         //a[i][j]=-1;
	     
	     v[i][j]=true;
	     
         if(valid(i-1,j,n,m) && !v[i-1][j] )
	      {
	         if(a[i-1][j]+c[i][j]<c[i-1][j] )
	             c[i-1][j]=a[i-1][j]+c[i][j];
	             
	         
	         q.push(i-1);
	         q.push(j);

	         //cout<<"\nPushing i-1,j:"<<i-1<<","<<j;
	        
	           
	      }
	      if(valid(i,j+1,n,m) && !v[i][j+1] )
	      {
	         if(a[i][j+1]+c[i][j]<c[i][j+1] )
	           c[i][j+1]=a[i][j+1]+c[i][j];
	            
	         
	         q.push(i);
	         q.push(j+1);
	         //cout<<"\nPushing i,j+1:"<<i<<","<<j+1;
	         
	          
	      }
	      
	      if(valid(i+1,j,n,m) && !v[i+1][j] )
	      {
	         if(a[i+1][j]+c[i][j]<c[i+1][j] )
	            c[i+1][j]=a[i+1][j]+c[i][j];
	  
	         q.push(i+1);
	         q.push(j);
	         
	         //cout<<"\nPushing i+1,j:"<<i+1<<","<<j;
	        
	        
	      }
	      if(valid(i,j-1,n,m) && !v[i][j-1] )
	      {
	         if(a[i][j-1]+c[i][j]<c[i][j-1] )
	            c[i][j-1]=a[i][j-1]+c[i][j];
	         
	         q.push(i);
	         q.push(j-1);
	         
	         //cout<<"\nPushing i,j-1:"<<i<<","<<j-1;
	         
	         
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
