#include<iostream>
#include<stdio.h>
#include <algorithm>
#include<math.h>
#include<string.h>
#include <queue>


            
using namespace std;


    
int main()
{
	long long int T,N,i,found;
    long long int val[100000];
    long long int cur=1;
    long long int ls= 1;
    val[1]= 9;
	cin>>T;
	while(T>0)
	{
		cin>>N;
		
		i=1;
		found=0;
		while(i<=cur)
		{
			if(val[i]%N==0)
			{
				found=1;
				cout<<val[i]<<endl;
				break;
			}
			i++;
		}
		
		if(found==0)
		{
		   while(found==0)
		   {
		      long long int temp=cur;
		      while(ls<=temp)
		      {
		      	 val[2*ls]=val[ls]*10;
		      	 val[2*ls+1]=val[2*ls]+9;
		      	 
				  // cout<<"val[2*ls]="<<val[2*ls]<<endl;
		      	 //cout<<"val[2*ls+1]="<<val[2*ls+1]<<endl;
		      	 
		      	 if(val[2*ls]%N==0)
		      	 {
		      	 	found=1;
				    cout<<val[2*ls]<<endl;
				    break;
		      	 }
		      	 else if(val[2*ls+1]%N==0)
		      	 {
		      	 	found=1;
				    cout<<val[2*ls+1]<<endl;
				    break;
		      	 }
		      	 
		      	 ls++;
		      	 cur+=2;
		      	 
		      }
		   }
		}
		T--;
	}
}
