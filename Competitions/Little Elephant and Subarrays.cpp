
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

vector<pair<long long int,long long int> >addToVector(vector<pair<long long int,long long int> > v,long long int val,long long int count )
{
    int i=0;
    //cout<<"\n\n The Vector is:";
    while(i<v.size())
    {
       
       //cout<<v.at(i).first<<","<<v.at(i).second<<" ";
       
       if(v.at(i).first == val)
       {
           v.at(i).second = v.at(i).second + count ;
           return v;
       }
       
       i++;
    }
    
    v.push_back(make_pair(val,count));
    return v;
}
	
int main()
{

   long long int N,i=0,j,Q,q;
    
	cin>>N;
	
	long long int a[N],min[N],minC[N];
	
	while(i<N)
	{   
	     cin>>a[i];
	     i++;
	}
	
	
	
	i=1;
	min[0]=a[0];//min sliding window
	minC[0]=1;//corresponding count
	
	//int incr=1;
	int size=1;
	vector<pair<long long int,long long int> > v;
	while(i<N)
	{
	    
	    
	    //cout<<"\n\n\nAdding element:"<<a[i]<<"to ";
	    
	    j=0;
	    while(j<size)
	    {
	       //cout<<min[j]<<","<<minC[j]<<"  ";
	       j++;
	    }
	    
	    //cout<<endl;
	    
	    
	    
	    j=size-1;
	    while(j>=0)
	    {
	        if( a[i]<min[j])
	        {
	           //add to vector & update also
	           v= addToVector(v,min[j],minC[j]);
	           size--;
	        }
	        
	        else
	          {
	             minC[j]++;
	          } 

	        j--;
		}
		
		//cout<<"\n Size of array is:"<<size<<"\n";
		
		min[size] = a[i] ;
		minC[size] = 1 ;
		size++;
		
		i++;
	}
	
	    j=size-1;
	    while(j>=0)
	    {
               //cout<<"\n\nThe element is:"<<min[j]<<","<<minC[j]<<endl;
	           v= addToVector(v,min[j],minC[j]);
	        j--;
		}
	
    cin>>Q;
	while(Q--)
	{
	   cin>>q;
	    i=0;
	    int found=0;
	    while(i<v.size())
	    {
	       
	       
	       if(v.at(i).first == q)
	       {
	           cout<<v.at(i).second<<endl;
	           found=1;
	           break;
	       }
	       
	       i++;
		   
		}
		
		
		if(!found)
		   cout<<"0\n";
    }
		
}	
