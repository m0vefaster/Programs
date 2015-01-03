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
 
long long int T;
cin>>T;
while(T--)
{
 
string s;
cin>>s;
 
long long int i,j=0;
long long int open=0, close=0;
long long int maxLen=0;
 
for(i=0;i<s.length();i++)
{
     if(s.at(i) == '<')
     {
        open++;
     }
     
     else if(s.at(i) == '>')
     {
        close++;
     }
     
     else
     {
        break;
     }
     
     if(close>open)
     {
      break;//j=i+1;
     }
     
     if(open==close && i+1>maxLen && s.at(i)=='>')
     {
        maxLen=i+1;
     }
}
 
cout<<maxLen<<endl;
 
}
 
}
