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
#include<cstdio>
using namespace std;

#define gc getchar

void scanint( long long int &x)
{
    register  long long int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}


int main()
{

  long long int N,M,P;
cin>>N>>M>>P;
  long long int i,j,k;
priority_queue< long long  int> p[N];


  
k=0;
while(k<P)
{
   //cin>>i>>j;
   scanint(i);
   scanint(j);
   i--;j--;      
   p[i].push(j);
   k++;
}


for(i=0;i<N;i++)
{
  //cout<<"\n\n Calculating for row"<<i<<endl;
    long long int secondVal=-1, secondTimes=0;
    long long int firstVal=-1, firstTimes=0;
   long long int sum=M-1;
  
  
  if(!(p[i].empty()) && p[i].top()==M-1) 
  {   
     secondVal=p[i].top();
     p[i].pop();
     secondTimes=1;
     while(!(p[i].empty()) && p[i].top() == secondVal)
     {
          p[i].pop();
          secondTimes++;
     }
  }
  
  else if(!(p[i].empty()))
  {
     secondVal=p[i].top()+1;
     secondTimes=0;
  }
  
 //cout<<"\nOutside Second Val and Second Times:"<<secondVal<<" "<<secondTimes<<endl;

	  while(!(p[i].empty()))
	  {
	     
	     firstVal=p[i].top();
	     p[i].pop();
	     firstTimes=1;
	     while(p[i].size() && p[i].top() == firstVal)
	     {
	          p[i].pop();
	          firstTimes++;
	     }
	     
	     //cout<<"\nSecond Val and Second Times:"<<secondVal<<" "<<secondTimes<<endl;
	     //cout<<"\nFirst Val and First Times:"<<firstVal<<" "<<firstTimes<<endl;
	     
	     if(secondVal>=firstVal+1)//Adjacent
	     {
	       if(secondTimes+1>=firstTimes)
	       {
	          sum=sum+secondTimes-firstTimes;
	       }
	       else
	       {
	          sum=-1;
	          break;
	       }
	     }
	     
	     else
	     {
	        sum=sum+secondTimes;
	     }
	     
	     secondTimes=firstTimes;
	     secondVal=firstVal;
	  }
	  
	  //cout<<"\n Sum before extra check is "<<sum<<endl;
	  if(sum!=-1 && p[i].empty() && secondTimes>0 && secondVal!=0)
	  {
	    sum+=secondTimes;
	  }

   cout<<sum<<endl;
}



}
