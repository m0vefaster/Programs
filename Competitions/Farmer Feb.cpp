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
  int T,x,y;
  int N=2500;
  int prime[N+2],pn=1;
  int i,j,k;
  bool isprime;
  
  
  
  prime[0]=2;
  for(i=3;i<=N+1;i++)
  {
    isprime=true;
     for(j=0;j<pn;j++)
     {
        if(i%prime[j]==0)
          {
            isprime=false;
            //cout<<"Removing"<<i<<endl;
            break;
          } 
     }
     
     if(isprime)
     {
        prime[pn++]=i;
     }
     
     
  }
  
  
  /*for(k=0;k<pn;k++)
     {
       cout<<"\n Prime "<<prime[k]<<endl;
     }
    */ 
 cin>>T;
 
 
 while(T--)
 {
    cin>>x>>y;
    int sum =x+y;

    i=0;
    j=pn-1;
    
    while(i<j)
    {
        k=(i+j)/2;
       //cout<<"\n i , j , K are"<<i<<" "<<j<<" "<<k;  	
	   if(i+1==j )
      {
       k++;
       break;
      }
       else if( prime[k]==sum)
	   {
	      break;
	   } 
	   else if(k && prime[k]>sum && prime[k-1]<sum )
	   {
	     break;
	   }
	   else if( k<pn-1 && prime[k]<sum && prime[k+1]>sum)
	   {
	     break;
	   }
       else if(prime[k]<sum)
       {
           i=k+1;
       }
       
       else if(prime[k]>sum)
       {
          j=k-1;
       }
    }
    
    //cout<<"\n prime is "<<prime[k]<<" and sum is "<<sum<<endl;   

    if(prime[k]==sum)
    {
      cout<<(prime[k+1]-sum)<<endl;
    }

    else if( prime[k] >sum)
    {
      cout<<(prime[k]-sum)<<endl;
    }
    else if(sum> prime[k])
    {
      cout<<(prime[k+1]-sum)<<endl;
    }
    
      
 }
 
 }
 

   
   
   
   
   
   
   
   
 
 
