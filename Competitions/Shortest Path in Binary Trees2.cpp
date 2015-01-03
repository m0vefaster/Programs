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
  int N,i,j;
  
  cin>>N;
  
  while(N--)
  {
     cin>>i>>j;
     
      int x= log(i)/log(2);
      int y= log(j)/log(2);
    // cout<<"X and y "<<x<<" "<<y<<endl; 
	  int count=0; 
      if( x - y > 2)
      {
         i = i / ( pow (2,x-y-2));
         count=x-y-2;
      }
      
      else if (y-x > 2)
      {
          j = j / ( pow (2,y-x-2));
          count=y-x-2;
      }
      
      
     while ( i!=j )
     {
     
       if( i< j )
         j=j/2;
       else
	     i=i/2;
	     
	    count++; 	 	 
     }
     
     cout<<count<<endl;
  }
  
  
 
 }
 

   
   
   
   
   
   
   
   
 
 
