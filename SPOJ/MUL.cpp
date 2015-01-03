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

string shift(string a,int x)
{
   string b;

   int i;
   for(i=0;i<x;i++)
   {
       b.at(i)='0';
   }
   
   b = a+ b;
   
   return b;
}
string getInt(int x)
{
   string a;
   
   a.at(0)=x-48;
   
   return a;
  
}
string add(string a,string b)
{
   int n=a.length();
   int m=b.length();
   
   string z;
   int c=0;
   
   int i,j,k;
   i=0;
   j=0;
   k=0;
   while(i<n && j<m)
   {
       int sum= a.at(i)+b.at(j)+c-96;
       c = sum %10 ;
       sum=sum/10;
       z = getInt(sum) + z;
       i++;
       j++;
       k++;
   } 
   
   while(i<n)
   {
       int sum= a.at(i)+c-48;
       c = sum %10 ;
       sum=sum/10;
       z = getInt(sum) + z;
       i++;
       k++;
   }
   
   while(j<m)
   {
       int sum= b.at(j)+c-48;
       c = sum %10 ;
       sum=sum/10;
       z = getInt(sum) + z;
       j++;
       k++;
   }
   
   return z;
}


string mul(string a,string b)
{
  int n=a.length();
  int m=b.length();
  if(n==0 && m==0)
  {
     return "";
  }
  
  else if( n>=1 && m==0)
  {
     return a;
  }
  
  else if( n==0 && m>1)
  {
      return b;
  }
  
  else if (n==1 && m==1)
  {
     int x1=a.at(0)-48;
     int y1=b.at(0)-48;
     int z1=x1*y1;
     return getInt(z1);
  }
  
  string x1,x2,y1,y2,z1,z2,z3;
  
  x1=a.substr(0,n/2);
  x2=a.substr(n/2+1,n-1); 
  
  y1=b.substr(0,m/2);
  y2=b.substr(m/2+1,m-1); 
  
  z1=mul(x2,y2);
  z2=mul(x1,y1);
  
  z3=mul(add(x2,y2),add(x1,y1));

   return add(add(shift(z1,n),shift(z3,n/2)),z2);
}



int main()
{

int T;

cin>>T;

while(T--)
{
string a,b;

cin>>a;
cin>>b;

int n=a.length();
int m=b.length();
if(n>m)
cout<<add(a,b);

else
cout<<add(b,a);

}


}
