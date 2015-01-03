#include<iostream>
#include<stdio.h>
#include <algorithm>
#include<math.h>
#include<string.h>
#include <queue>
using namespace std;
 
long long int binarySearch(long long int arr[], long long int low, long long int high, long long int no)
{
   if (high < low)
       return -1;
   long long int mid = (low + high)/2;  /*low + (high - low)/2;*/
   if (no == arr[mid])
     return mid;
   if (no > arr[mid])
     return binarySearch(arr, (mid + 1), high, no);
   else
     return binarySearch(arr, low, (mid -1), no);
}


int main()
{
	long long int T,i,cur=1;
	long long int max=-1;
	long long int N;
	long long int F[10000];
	
	i=0;
	F[0]=0;
	F[1]=1;
	cin>>T;
	
	while(i<T)
	{
		cin>>N;
		
		if(N>max)
		{
			max=N;
		}
		
		if( max > F[cur])
		{
			while(F[cur]<=max)
			{
				F[cur+1]=F[cur]+F[cur-1];
				cur++;
				//cout<<"Inside and Fib is"<<F[cur-1]<<endl<<endl;
			}
			
			if(F[cur-1]==N)
				{
				   cout<<"IsFibo"<<endl;
	     	    }
        	else
	     	   {
	     		   cout<<"IsNotFibo"<<endl;
	     	   }    
			
		}
		
		else
		{
			
             long long int found = binarySearch(F,0,cur,N);
             if(found>=0)
             {
             	cout<<"IsFibo"<<endl;
	     	 }
        	else
	     	 {
	     		cout<<"IsNotFibo"<<endl;
	     	 }     
		
		}
		i++;
	}
	


     
}
	
