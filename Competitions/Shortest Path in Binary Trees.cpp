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
     int count=0;
     
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
 

   
   
   
   
   
   
   
   
 
 
