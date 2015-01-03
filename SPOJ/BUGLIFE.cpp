#include<iostream>
//#include<stdio.h>
#include <algorithm>
#include<math.h>
#include<string>
#include<vector>
#include<map>
#include <utility>
#include <time.h> 
#include<limits>
#include<queue>
#include<stack>
#include<cstdio>
#include<list>
#include<set>
using namespace std;

#define gc getchar

void scanint(  int &x)
{
    register  int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}


int main()
{

int T;
int i,j,k=1;
cin>>T;


while(k<=T)
{

int bugs,inter;
int x,y;

cin>>bugs>>inter;

int a[bugs];

for(i=0;i<bugs;i++)
 a[i]=-1;
 
cin>>x>>y;
a[x]=0;
a[y]=1;

bool good=true;
for(i=1;i<inter;i++)
{
cin>>x>>y;
	
  if(good)
   {
   
	
        int d1=a[x];
        int d2=a[y];
	
	
		if(d1==-1 && d2==-1)
		{
		  a[x]=2;
		  a[y]=2;
		}
		
		
		else if(d1==-1 && d2!=-1)
		{
		   if(d2==0 || d2==1)
		     a[x]=1-a[y];
		     
		   if(d2==2)
		      a[x]=2;  
		}
		
		else if(d1!=-1 && d2==-1)
		{
		   if(d1==0 || d1==-1)
		     a[y]=1-a[x];
		    
		   if(d1==2)
		      a[y]=2;	 
		     
		}
		
		else if(d1!=-1 && d2!=-1)
		{
		    if(d1==2 && d2==2)
			{
			  continue;
			} 
			
			if(d1==2 && d2!=2)
			{
			   a[x]=1-a[y];
			}
			else if(d1!=2 && d2==2)
			{
			   a[y]=1-a[x];
			}
			
			else
			{
			  cout<<"\nBug found for x and y"<<x<<" "<<y<<endl;
			   good=false;
			}
		
		
		}
	}

}

cout<<"Scenario #"<<k<<":\n";
if( good)
{
   cout<<"No suspicious bugs found!\n";
}

else
   cout<<"Suspicious bugs found!";
k++;

}



}
