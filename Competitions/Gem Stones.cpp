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

int N;

int a[26];
int x[26];
int i,j;
string s;
for(i=0;i<26;i++)
{
    a[i]=0;
}

cin>>N;
j=0;
while(j<N)
{
   cin>>s;
   
   for(i=0;i<26;i++)
    {
    x[i]=0;
    }
   for(i=0;i<s.length();i++)
   {
      //cout<<s.at(i)-97;
      x[s.at(i)-97]++;
   }
   
    for(i=0;i<26;i++)
    {
      if(x[i])
      {
        a[i]++;
      }
    }
    
    
   j++;
}


int val=0;

  for(i=0;i<26;i++)
  {
     if(a[i]==N)
     {
        //cout<<"At i:"<<i<<endl;
        val++;
     }
  }
  
  cout<<val;
}


