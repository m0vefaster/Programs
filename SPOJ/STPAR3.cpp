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
#include<stack>
#include<cstdio>
#include<list>
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


while(1)
{
long long int N;
long long int input;
list<long long int> q;
stack<long long int> s;
stack<long long int> o;

long long int i,j;


    cin>>N;

    if(N==0)
	  break; 
	   
    i=0;
    while(i<N)
    {
       cin>>input;
       q.push_back(input);
       i++;
    }
    q.push_back(65538);
    q.push_back(65539);
    //cin>>input;//for the 0
    //long long int x=q.pop();//side
    //long long int y=q.pop();//incoming
    //bool notpossible=false;

    s.push(65537);
    o.push(-65539);
    
   while(o.size()!=N+1)
   {
     
      long long int x1,x2,y,z;
      
      
      
      x1=q.front();
      q.pop_front();
      x2=q.front();

      
      y=s.top();
      z=o.top();
      
      
      q.push_front(x1);

      //cout<<"\n x1,x2 y and z are:"<<x1<<" "<<x2<<" "<<y<<" "<<z;
	  //cin>>input;
      if(x1<x2)
      {
         if(x1<y)
         {
            if(x1>z)
            {
             q.pop_front();
             o.push(x1);
            }
            else
            {
             break;
            }
           
         }
         else
         {
            if(y>z)
            {
             s.pop();
             o.push(y);
            }
            else
            {
              break;
            }
            
         }
      }
      else
      {
         if(x1<y)
         {
         q.pop_front();
         s.push(x1);
         }
         
         else if(x1>y && y>z)
         {
            s.pop();
            o.push(y);
         }
         else
         {
            break;
         }
      }
      

	}
      
       
if(o.size()==N+1)
{
   cout<<"yes\n";
}

else
{
   cout<<"no\n";
}
    
}

   
}
