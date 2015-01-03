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




int main()
{


int i,j,k,T=24;

i=0;
string a,b;

while(i<24)
{
  cin>>a>>b;
  
  //int pos=a.find(b);
  //cout<<"\n Pos is :"<<pos;
  
  if(a.find(b)==-1)
     cout<<"0"<<endl;
     
  else
     cout<<"1"<<endl;   
  
  i++;
   
}


}
