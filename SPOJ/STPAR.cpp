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

long long int N;
long long int input;
queue<long long int> q;
stack<long long int> s;
stack<long long int> o;

long long int i,j;
cin>>N;


    i=0;
    while(i<N)
    {
       cin>>input;
       q.push(input);
       i++;
    }
    
    cin>>input;//for the 0
    //long long int x=q.pop();//side
    //long long int y=q.pop();//incoming
    //bool notpossible=false;

    long long int min=-1;;
    
   while(o.size()!=N)
   {
     
      long long int x,y;
      
      //cout<<"\n queue and stack sizes  and i and min are:"<<q.size()<<" "<<s.size()<<" " <<i<<" "<<min;
	  cin>>input; 
      if(s.empty() && q.size()>1)
      {
         x= q.front();
         q.pop();
         y= q.front();
         
         
         if(x<y && x>min)
         {
           o.push(x);
           min=x;
         }
         
         else if(x<y && x<min)
         {
            break;
         }
         
         else if(x>y)
         {
            s.push(x);
         }
      }
      
      else if( s.empty() && q.size()==1)
      {
          x=q.front();
          q.pop();
          
          if(x>min)
          {
            i++;
            min=x;
          }
          else
          {
             break;
          }

      }
      
      else if(!q.empty() && !s.empty())
      {
         x=q.front();
         y=s.top();
         
         if(x<y && x>min)
         {
           i++;
           min=x;
           q.pop();
         }
         
         else if(x<y && x<min)
         {
            break;
         }
         
         else if( x>y)
         {
           s.push(q.front());
           q.pop();
         }
      }
      
      else if( !s.empty() && q.empty())
      {
         i=N;
      }
      
      
	}
      
      
cout<<endl<<i;      
if(i==N)
{
   cout<<"yes";
}

else
{
   cout<<"no";
}
    
    
}
