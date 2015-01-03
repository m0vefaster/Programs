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




int main()
{
  int m,n,x;
  string s;
  int i,j;
  cin>>n;
  cin>>m;
  cin>>s;
  
  int a[n+1];
  int b[n+1][10];
  
  

  
  for(i=1;i<=n;i++)
  {
      a[i]= s.at(i-1)-48;
      
  }
  
  

  
  for(i=0;i<=n;i++)
  {
     for(j=0;j<10;j++)
     {
        b[i][j]=0;
     }
  }
  
  
  for(i=1;i<=n;i++)
  { 
     
     
	  for(j=0;j<10;j++)
      {
         b[i][j]=b[i-1][j];
      }
	  
	  b[i][a[i]]=b[i-1][a[i]]+1;
	 
  }
  
  /*
  for(i=0;i<=n;i++)
  {
     cout<<"\n";
     for(j=0;j<10;j++)
     {
        cout<<" "<<b[i][j];
     }
  }*/
  
  
  while(m--)
  {
      

      cin>>x;
      i=0;
	  int sum=0;
	  
	  int val=a[x];
	  int temp; 
      //cout<<"\n val is "<<val<<endl;
      
      while(i<val)
      {
          temp = (val- i)*b[x][i];
          sum+=temp;
          //cout<<"\n temp is "<<temp<<endl;
          //cout<<"\n sum is "<<sum<<endl;
          i++;
      }
      
      i=val+1;
      
      while(i<=9)
      {
          temp= (i- val)*b[x][i];
          sum=sum + temp;
          //cout<<"\n temp2 is "<<temp<<endl;
          //cout<<"\n sum2 is "<<sum<<endl;
		  i++; 
      }
      
      cout<<sum<<endl;
      
      
  }
 
 }
 
 

   
   
   
   
   
   
   
   
 
 
