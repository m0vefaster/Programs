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

void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}



class Sums
{
 public:
 vector< int> v;
 int sum;
 int M;
 
 Sums()
 {
    sum=0;
 }
 
 /*void setSum(long long int val)
 {
   M=val;
   sum=val-1;
 }*/
 
 void add( int e)
 {
     v.push_back(e);   
 }
 
 int calSum( int newM)
 {
    M=newM;
    sum=M-1;
    int x[M];
    int i,j,k;
    for(i=0;i<M;i++)
    {
      x[i]=0;
    }
    
    
    for(i=0;i<v.size();i++)
    {
       x[v.at(i)]++;
    }
    
    /*cout<<"\nThe array is:";
    for(i=0;i<M;i++)
    {
      cout<<x[i]<<" ";
    }*/
    
    
    k=0;
	while(k<v.size())
	{
	
	   j=v.at(k);
	
	   int cur= x[j];
	       
	   int left=-3;
	   int right=-3;
	       
	       
	       
	       if(cur!=-2)
	       {
	       
			       if(j>=1 )
			       {
			          left=x[j-1];
			       }
			       
			       if(j+1<=M-1)
			       {
			         right=x[j+1];
			       }
			       
			       
			       //cout<<"\nLeft Cur and Right:"<<left<<" "<<cur<<" "<<right<<endl;
			       
			       if(left!=-2 && left!=-3)
			       {
			          if(cur+1>= left)
			          {
			             //cout<<"\nIncrementing row with cur-left";
			             sum+=cur-left;
			          }
			          else
			          {
			             //cout<<"\n1)Row"<<i<<" is -1";
			             sum=-1;
			             break;
			          }
			          //cout<<"\nRow "<<i<<" is:"<<row[i];
				   }
				   
				   if(sum!=-1 && right!=-2 && right!=-3)
				   {
				       if(right+1>=cur)
				       {
				         //cout<<"\nIncrementing row with right -cur";
				         sum+=right-cur;
				       }
				       else
				       {
				          //cout<<"\n2)Row"<<i<<" is -1";
				          sum=-1;
			              break;
				       }
				       //cout<<"\nRow "<<i<<" is:"<<row[i];
				   }
				   
			}	   
	       x[j]=-2;
	       k++;
	   }
	   
	   
    
    return sum;
 }
    
};




int main()
{

int N,M,P;
cin>>N>>M>>P;
int i,j,k;
Sums sums[N];


  
k=0;
while(k<P)
{
   //cin>>i>>j;
   scanint(i);
   scanint(j);
   i--;j--;      
   sums[i].add(j);
   k++;
}


for(i=0;i<N;i++)
{
  //cout<<"\n\n Calculating for row"<<i<<endl;
  cout<<sums[i].calSum(M)<<endl;
}



}
