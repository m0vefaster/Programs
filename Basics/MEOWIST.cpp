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

bool wayToSort(pair<string,int> a, pair<string,int> b)
{
   if(a.second>b.second)
   {
      return true;
   } 
   
   else if(a.second < b.second)
   {
      return false;
   }

    return a.first<b.first ;

}

int convertToInt(string s)
{
   int sum=0;
   int i=0;
   while(i<s.length())
   {
      sum=sum*10+(s.at(i)-48);
      i++;
   }
   
   return sum;
}

int main()
{

int i,j;
vector<pair<string,int> > data;

std::string line;
string s1,s2;
int a;

while(1) 
{

    getline(std::cin,line);
    
    if(line.empty())
       break;
       
    int pos=line.find(" ");

    data.push_back(make_pair(line.substr(0,pos),convertToInt(line.substr(pos+1))));
    
} 



sort(data.begin(),data.end(),wayToSort);
cout<<"\n";

for(i=0;i<data.size();i++)
{
     cout<<data[i].first<<endl;
}



}

