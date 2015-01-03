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

   long long int N,K,i,j,l,r;
   
   
   cin>>N>>K;
   long long int a[N+1];
   map<long long int,long long int> mymap1,mymap2;

   i=1;
   while(i<=N)
   {
      cin>>a[i];
    //  mymap1.insert ( std::pair<long long int,long long int>(a[i],i) );
      
      i++;
   }
   
   i=N;
   
   while(i>0)
   {

      mymap1.insert ( std::pair<long long int,long long int>(a[i],i) );
      
      i--;
   }
   
   
 /*  while(i>=1)
   {
      mymap1.insert ( std::pair<long long int,long long int>(a[i],i) );
      i--;
   }
   
   */
   
   
   i=1;
   long long int count=1000001;

   while(i<=N)
   {
      long long int x= K- a[i];
     
       //long long int c= mymap1.count(x);
       l= mymap1.find(x)->second ;
       //cout<<"\n\nFor i & x & l:"<<i<<" "<<x<<" "<<l<<endl;;
       if( x!=a[i] && l>0 && l<=N && a[l]==x )
       {
		      
		     // r= mymap2.find(x)->second ;
		      
		      if( l >i )
		      {
		         if(max(i,N+1-l) < count)
		           {
		               count= max(i,N+1-l);
		              //cout<<"Cond1:"<<i<<" "<<l<<"  "<<count<<endl;
		           }
		         
				 if(l<count)
				   {
				     count= l; 
				    //cout<<"Cond2:"<<i<<" "<<l<<"  "<<count<<endl;
		           } 
		         
				 if(max(N+1-i,N+1-l)<count)
				 {
				     
				     count = max(N+1-i,N+1-l) ;
					 //cout<<"Cond3:"<<i<<" "<<l<<"  "<<count<<endl;
				 }  
		      }
		      
		      /*
		      if(r>0 && r > i )
		      {
		        if(max(i,N-1-r) < count)
		        {
				  count = max(i,N-r+1);
		          //cout<<"Cond3:"<<i<<" "<<r<<"  "<<count<<endl;
		        }
		           
		         
				if(max(i,r)<count)
				{
				  count= max(i,r);   
				  //cout<<"Cond4:"<<i<<" "<<l<<"  "<<count<<endl;
				}
				    
		      }
		      */
		     
       
       
       
       }
     

      
      i++;
   }
   
   if(count==1000001)
   {
    count=-1;
   }
   
   

     cout<<count<<endl;
   
  
   
   
}
