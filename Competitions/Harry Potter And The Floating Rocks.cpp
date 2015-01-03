
#include<iostream>
#include<stdio.h>
#include <algorithm>
#include<math.h>
#include<string.h>
#include<vector>
#include<map>
#include <utility>
#include <time.h> 
using namespace std;


int main()
{
	double T , x1,x2,y1,y2,m,i;
	
	

cin>>T;

while(T--)
{
	cin>>x1>>y1>>x2>>y2;
	
	

	if( x1>x2)
	{
		swap(x1,x2);
        swap(y1,y2);
	}

	
	if( x2==x1)
	{
		
		cout<<abs(int(y2-y1-1));
	}
	
	
	
	else
	{
	  double m= (y2-y1)/(x2-x1);
	  
	  double a = m * x1 ;
	  //long long int b = m* x1;
	  
	  if ( a != (int(a)))
	  {
	     cout<<"0"<<endl;
	  }
	  
	 else if ( y2==y1)
	 {
	 	cout<<abs(int(x2-x1-1));
	 } 
	 
	 else
	  {
	  	 long long int count=0;
	  	 
	     for(int x=x2-x1;x<=x2;x=x+(x2-x1))
	     {
	     	if((int)(x*m)==(x*m))
	     	{
	     		count++;
	     	}
	     }
	     
	  
        cout<<count<<endl;
      	 
      }
    }
}
	
	return 1;
}
