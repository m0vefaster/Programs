#include<iostream>
#include<stdio.h>
#include <algorithm>
#include<math.h>
#include<string.h>
#include<vector>
#include<map>
#include <utility>
#include <time.h> 
#include<limits>
#include<queue>
using namespace std;


class Sums
{
 public:
 priority_queue<long long int> p;
 long long int sum;
 
 Sums()
 {
    p.push(0);
    sum=0;
 }
 
 void setSum(long long int val)
 {
  sum=val;
 }
 
 void add(long long int e)
 {
     p.push(e);
     
 }
 
 long long int calSum()
 {
   while(p.size())
   {
    long long int left=p.pop();
    long long int right=0;
    long long int cur=0;
	long long int temp;
	
	if(p.size())
	{
	   temp=p.pop();while(temp)
	}
	
	else
	{
	
	}
	
	
	 
   }
   
    return sum;
 }
    
};




int main()
{

long long int N,M,P;
cin>>N>>M>>P;

long long int i,j,k;
Sums sums[N];


for(i=0;i<N;i++)
  sums[i].setSum(M-1);
  
k=0;
while(k<P)
{
   cin>>i>>j;
   i--;j--;      
   sums[i].add(j);
   k++;
}


for(i=0;i<N;i++)
{
  cout<<sums[i].calSum()<<endl;
}



}
