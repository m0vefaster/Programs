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
using namespace std;

#define gc getchar

void scanint(  int &x)
{
    register  int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}


int main()
{

int N;

cin>>N;

int one=0;
int two=0;
int three=0;
int a,b;
char ch;

while(N--)
{
  cin>>a;  
  cin>>ch;
  cin>>b;
  
   if(a==1 && b==2)
     two++;
   else if(a==1 && b==4)
     one++;
   else if(a==3 && b==4)
      three++;
	    
     
}

//cout<<one<<" "<<two<<" "<<three<<endl;


int sum=0;//3/4 and 1/4
int x=min(one,three);
sum+=x;
one-=x;
three-=x;
//cout<<one<<" "<<two<<" "<<three<<endl;
//cout<<sum<<endl;

x=two/2;//1/2's
sum+=x;
two-=x*2;
//cout<<one<<" "<<two<<" "<<three<<endl;
//cout<<sum<<endl;

if(two && one)//1/2 and 1/4
{
   sum+=1;
   two-=1;
   if(one==1)
      {
         one-=1;
      }
   else 
    {  
        one-=2;
    }   
}
//cout<<one<<" "<<two<<" "<<three<<endl;
//cout<<sum<<endl;

x=one/4;
sum+=x;
one-=x*4;
//cout<<one<<" "<<two<<" "<<three<<endl;
//cout<<sum<<endl;

if(one>=1)
{
  one=0;
  sum+=1;
}
//cout<<one<<" "<<two<<" "<<three<<endl;
//cout<<sum<<endl;


//cout<<one<<" "<<two<<" "<<three<<endl;
sum+=one+two+three;
//extra

sum++;
cout<<sum;

}


