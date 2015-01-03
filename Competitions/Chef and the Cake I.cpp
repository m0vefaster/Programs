
#include<iostream>
#include<stdio.h>
#include <algorithm>
#include<math.h>
#include<string.h>
#include<vector>
#include<map>
using namespace std;


void swap(long long int &a,long long int &b)
{
	long long int t;
	t=a;
	a=b;
    b=t;
	
}
long long int find (long long int x1,long long int y1,long long int x2,long long int y2,long long int x3,long long int y3,long long int x4,long long int y4)
{
	
	if(x3<x1 )
	{
	//	cout<<"rev";
	   return find(x3,y3,x4,y4,x1,y2,x3,y3);	
	}
	
    
    
	if(x1<=x3 && y3>=y1 )
	{
		
          if( x4<=x2)
          {
          	 if(y4<=y2)
          	 {
          	 	return (x4-x3)*(y4-y3);
          	 }
          	 else if(y4>=y2 && y2>=y3)
          	 {
          	 	return (x4-x3)*(y2-y3);
          	 }
          }
          
          else
          {
              if(y4<=y2)
              {
              	return (x2-x3)*(y4-y3);
              }
          	else if(y4>=y2 && y2>=y3)
          	{//cout<<"here";
          		return (x2-x3)*(y2-y3);
          	}
          }
	}
	
	else if(x1<=x3 && y1>=y3 )
	{
		if(x4<=x2)
		{
			 if(y4>=y1 && y4<=y2)
			 {
			 	return (x4-x1)*(y4-y1);
			 }
			 else if( y4>=y2)
			 {
			 	return (x4-x3)*(x2-x1);
			 }
		}
		else
		{
			if(y4>=y1 && y4<=y2)
			{
				return (x2-x3)*(y4-y1);
			}
			
			else if(y4>=y2)
			{
				return (x2-x3)*(y2-y1);
			}
		}
	}
	

	
	return 0;
	
	
}
int main()
{
	long long int T,N,K,i,j;
    long long int x1,y1,x2,y2,x3,y3,x4,y4;
    long double sum,sum1,sum2,sum3;
    cin>>T;
    j=1;
    while(j<=T)
    {
    	
    	cin>>x1>>y1>>x2>>y2;
    	cin>>x3>>y3>>x4>>y4;
    	if(x2<x1)
    	{
    		swap(x1,x2);
    		swap(y1,y2);
    		
    	}
    	
    	if(x4<x3)
    	{
    		swap(x3,x4);
    		swap(y3,y4);
    		
    	}
    	
    	sum1 = (x2-x1)*(y2-y1);
    	
    	sum2 = (x4-x3)*(y4-y3);
    	
    	sum3= find(x1,y1,x2,y2,x3,y3,x4,y4);
    	
       // cout<<"Sums sum1,sum2,sum3:"<<sum1<<"  "<<sum2<<"  "<<sum3<<endl;
    	sum = sum1+sum2 - sum3;
    	
    	cout<<sum<<endl;
    	
    	j++;
    }
    
}
