
#include<iostream>
#include<stdio.h>
#include <algorithm>
#include<math.h>
#include<string.h>
#include<vector>
#include<map>
#include <utility>
#include <time.h> 
#include <windows.h>
using namespace std;

bool compare(const pair<long long int,long long int>&i, const pair<long long int,long long int>&j)
{
    return i.first < j.first;
}

long long int Max(long long int x,  long long int y)
{
	return x>y?x:y;
}
long long int MaxWeight(vector<pair<long long int ,long long int> > v,long long int index,long long int curW,long long int curC, long long int k )
{
	
	cout<<"Index:"<<index<<" CurW:"<<curW<<" curC:"<<curC<<" k:"<<k<<endl;  
	Sleep(2000);
	if(curC>k)
	{
		cout<<"     Exceeded"<<endl;
		return -1;
		
	}
	
	if(index==v.size())
	{
		cout<<"    All Checked"<<endl;
		 return curW;
	}
	
	
	if(curC==k)
	{
		cout<<"     Exact"<<endl; 
		return curW;
	}
	

	
	return Max((Max(MaxWeight(v,index+1,curW,curC,k), MaxWeight(v,index+1,curW+v[index].second,curC+v[index].first,k))),curW);
	
	
}
int main()
{
	long long int T,n,k,i,j,f,s;
	
	cin>>T; 
	
	while(T--)
	{
		cin>>n>>k;
	    vector<pair<long long int,long long int> > v;

		
		i=0;
		srand (time(NULL));
		while(i<n)
		{
			//cin>>f>>s;
			f=rand()%100;
			s=rand()%100;
			v.push_back(make_pair(f,s));
			i++;
		}	
		
		
		sort(v.begin(), v.end(), compare);
			
		
        /*i=0;
		
		while(i<n)
		{
			cout<<v[i].first<<"  "<<v[i].second<<endl;
			i++;
		}*/
		
		cout<<MaxWeight(v,0,0,0,k)<<endl;
	
	
	    
              
	}
	
	return 1;
}
