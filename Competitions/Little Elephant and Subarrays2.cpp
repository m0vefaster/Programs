
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
	
	long long int a[N],l,r;
	
	while(i<N)
	{   
	     cin>>a[i];
	     i++;
	}
	
	
	
    i=0;

	vector<pair<long long int,long long int> > v;
	
	while(i<N)
	{
	    
	    
	    l=0;
		r=0;
	    
        j=i+1;
        
        while(j<N && a[i]<a[j])
        {
           r++;
           j++;
        }
        
        j=i-1;
        
        while(j>=0 && a[i]<=a[j])
        {
          l++;
          j--;
        }
        
        v= addToVector(v,a[i],((l+1)*(r+1)));
		
		i++;
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
