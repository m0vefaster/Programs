
#include<iostream>
#include<stdio.h>
#include <algorithm>
#include<math.h>
#include<string.h>
#include<vector>
#include<map>
#include <utility>
#include <time.h> 
#include <fstream>

using namespace std;


int findMaxSubArray(int *,int ,int);
int findCrossingSum(int *,int ,int,int);

int main()
{
 
   srand (time(NULL));
   int n=10,i;
   int a[n];
   cout<<"The initial sequence is:\n";
   
   for(i=0;i<n;i++)
   {
      a[i]= rand() % 1000;
      cout<<a[i]<<" ";
   }
   
   //Differences
   for(i=0;i<n-1;i++)
   {
      a[i]= a[i+1]-a[i];
   }
   
   n=n-1;


   cout<<"The intermediate sequence is:\n";
   for(i=0;i<n;i++)
   {
      cout<<a[i]<<" ";
   }
   
   
   
   cout<<"\nThe maximum subarray is:"<<findMaxSubArray(a,0,n-1);
      
}


int findMaxSubArray(int *a, int left, int right)
{
  if( left>=right)
     return left;
    
  else
  {
     int mid= (left+right)/2;
     
     int leftSum= findMaxSubArray(a,left,mid);
     int rightSum= findMaxSubArray(a,mid+1,right);
     int crossingSum= findCrossingSum(a,left,mid,right);
     
     return max(max(leftSum,rightSum),crossingSum);
  }	 

}

int findCrossingSum(int *a,int left, int mid, int right)
{

int leftSum= INT_MIN;
int rightSum= INT_MIN;
int sum=0;

int i,j;

for(i=mid;i>=0;i--)
{
  sum+=a[i];
  if(sum>leftSum)
  {
    leftSum=sum;
  }
  
}

sum=0;
for(i=mid+1;i<=right;i++)
{
  sum+=a[i];
  if(sum>rightSum)
  {
    rightSum=sum;
  }
  
}

return leftSum+rightSum;

}



