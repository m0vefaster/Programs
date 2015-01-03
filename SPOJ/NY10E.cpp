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


long long int c[70][10];

long long int calc(long long int d,long long int max)
{
    //cout<<"\nCalc:"<<d<<" "<<max<<" ";
    if(c[d][max]!=-1)
    {
       //cout<<"\nReturning:"<<c[d][max];
       return c[d][max];
    }
       
       
    if(d==1)
	{
	    c[1][max]=10-max;//0..max=max+1
	    //cout<<"\nRetutning:"<<c[1][max];
	    return c[1][max];
	}   
	
	long long int sum=0,i;
	
    for(i=max;i<=9;i++)
    {
        sum+=calc(d-1,i);
        
    }
    c[d][max]=sum;
   //cout<<"\nReturning sum for d and max as:"<<d<<" "<<max<<" "<<sum;
   return sum;
	
}


int main()
{

int T;
long long int i,j,d,x;

cin>>T;

for(i=1;i<70;i++)
{
   for(j=0;j<10;j++)
   {
      c[i][j]=-1;
   }
}

while(T--)
{
    cin>>x;
    cin>>d;

    


    cout<<x<<" "<<calc(d,0)<<endl;
    
    //cout<<endl<<endl;
    
    
   /* for(i=1;i<=d;i++)
    {
      cout<<endl;
      for(j=0;j<=9;j++)
      {
         cout<<c[i][j]<<" ";
      }
    }
    */
    
    
}

}
