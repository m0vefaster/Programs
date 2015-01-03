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

   long long int N,K,i,j,ii;
   
   
   cin>>N>>K;
   long long int a[N];
   multimap<long long int,long long int> mymap;

   i=0;
   while(i<N)
   {
      cin>>a[i];
      mymap.insert ( std::pair<long long int,long long int>(a[i],i) );
      
      i++;
   }
   
   
   i=0;
   long long int count=1000001;
   long long int r;
   
   while(i<N)
   {
      long long int x= K- a[i];
      std::pair <std::multimap<long long int,long long int>::iterator, std::multimap<long long int,long long int>::iterator> ret;
      ret = mymap.equal_range(x);
      
	      if( x!=a[i] )  
	      {
		       for (std::multimap<long long int,long long int>::iterator it=ret.first; it!=ret.second; ++it)//both from left
		       
		       {
		         r= it->second;
		          if( r > i )
		          {
		              //cout<<"\n\nr for x  and a[i]is:"<<r<<" "<< x << " "<<a[i]<<endl;
		             if(  (r + 1) < count )//left
		                  {
						     count= r+ 1;
						     //cout<<"\n Count changed to:"<<count<<endl;
		                  } 
		             if( r>i &&  ( max(i,N-r-1) + 1) < count )//left&right
		             {
					  count= max(i,N-r-1) + 1;
		              //cout<<"\n Count changed to:"<<count<<endl;
		             }    
					 
					 ii=min(i,N-1-i);
					 
					 if( r>ii &&  ( max(ii,N-r-1) + 1) < count )//right
		             {
					  count= max(ii,N-r-1) + 1;
		              //cout<<"\n Count changed to:"<<count<<endl;
		             }   
					
		          }
		          
		       }
	       

	     }
      
      i++;
   }
   
   if(count==1000001)
   {
    count=-1;
   }
   
   

     cout<<count<<endl;
   
  
   
   
}
