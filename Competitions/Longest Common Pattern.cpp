
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
	
	long long int T,i,j;
	string A,B;
	long long int u[26],l[26],d[10],count;
	
	cin>>T;
	
	while(T--)
	{
		cin>>A>>B;
		count=0;
		for(i=0;i<26;i++)
		{
		   u[i]=l[i]=0;
		}
		for(i=0;i<10;i++)
		{
		   d[i]=0;
		}
		i=0;
		while(i<A.length())
		{
		    int v = A.at(i);
		    //cout<<v<<endl;
		    if(v>=48 && v<=57)
		    {
		       d[v-48]++;
		    }
		    
		    else if( v>=65 && v<=90)
		       u[v-65]++;
		       
		    else if(v>=97 && v<=122)
			   l[v-97]++;   
			   
			i++;   
		}
		
		i=0;
		while(i<B.length())
		{
		  int v= B.at(i);
		  
		    if(v>=48 && v<=57 && d[v-48])
		    {
		      // cout<<"d & v "<<d[v-48]<<" "<<count<<endl; 
		       d[v-48]--;
		       count++;
		    } 
		    else if( v>=65 && v<=90 && u[v-65])
		      {
		           u[v-65]--;
		           count++;
		      }  
		       
		    else if(v>=97 && v<=122 && l[v-97] )
		    {
		      l[v-97]--;  
			   count++; 
		    }
		    
		   // cout<<v<<endl;
		  //  cout<<"count ="<<count<<endl<<endl<<endl;
		    i++;
			  
		}
		
		cout<<count<<endl;
	}
	
	//return 1;
}
