#include<iostream>
#include<stdio.h>
#include <algorithm>
#include<math.h>
#include<string.h>
#include <queue>

using namespace std;
#define MOD 1000000007

long long int gcd(long long int x,long long int y)
{
while (x * y != 0) {
        if (x >= y) x = x % y;
        else y = y % x;
    }
    return (x + y);
 return x;
}


long long int Find(long long cur, long long int K, long long int D[],long long int sum,long long int cur_gcd)   
{
	//cout<<"Inside Find"<<endl;
	
	if(cur>K)
	   return cur_gcd;
	   
	for(long long int i=1;i<=D[cur];i++)
        {	
           long long int temp= gcd(cur_gcd,i)   ;   
           
           if(cur==K)
               {
               	sum=sum% MOD;
               	temp=temp%MOD;
               	sum+=temp;
               	sum=sum%MOD;
               }
           else
		   {       
			  // cout<<"Current GCD and sum are:"<<temp<<"  "<<sum<<endl; 
			   sum=Find(cur+1,K,D,sum,temp);
	       }
        }
     
    // cout<<"Returning sum as:"<<sum<<endl;
	 return sum;   
}


int main()
{
	
	long long int T,K,i,sum;
	
	cin>>T;

	while(T>0)
	{
        cin>>K;
        
        long long int D[K+1];
        
        i=1;
        
        while(i<=K)
        {
        	cin>>D[i];
        	i++;
        }
        
        sum=0;
        
        for(i=1;i<=D[1];i++)
        {	
		   sum=Find(2,K,D,sum,i);
        }
        
        cout<<sum<<endl;
		T--;
	}

return 1;	
}
	
	
	
