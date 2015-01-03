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

int T;
cin>>T;
while(T--)
{

string s;
cin>>s;

int i,j=0;
int open=0, close=0;
int maxLen=0;


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
     
     if(close>open)
     {
       open=0;
       close=0;
     }
     
    else if ((2*min(open,close))>maxLen && s.at(i)=='>')
     {
        maxLen=2*min(open,close);
     }
}

cout<<maxLen<<endl;

}

}
