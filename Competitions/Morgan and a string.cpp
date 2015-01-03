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

string find(string,string,long long int,long long int,long long int,long long int,long long int,string ans);


int main()
{

long long int N;
string a,b;
int i=0,j=0;
cin>>N;
while(i<N)
{
cin>>a;
//cout<<a.length();
cin>>b;
//cout<<b.length();
//scanf(” %[^\n]s”,ab;
  cout<<find(a,b,0,0,a.length(),b.length(),0,"")<<endl;
  i++;
}


}


string find ( string a , string b , long long int  posA, long long int posB, long long int lenA, long long int lenB, long long int val,string ans)
{
    //cout<<endl<<posA<<" "<<posB<<" "<<lenA<<" "<<lenB; 
   if(posA==lenA && posB==lenB)
   {
   
      return ans;
   }
   
   else if(posA==lenA)
   {
      return ans+b.substr(posB,lenB-1);
   }
   
   else if(posB==lenB)
   {
      return ans+b.substr(posA,lenA-1);;
   }
   
   else if(a.at(posA)<b.at(posB))
   {
      //cout<<a.at(posA);
      return find(a,b,posA+1,posB,lenA,lenB,val+1,ans+a.at(posA));
   }
   
   else if(a.at(posA)>b.at(posB))
   {
      //cout<<b.at(posB); 
      return find(a,b,posA,posB+1,lenA,lenB,val+1,ans+b.at(posB));
   }
   
   else
   {
      //cout<<"probelm";
      //int x;
      //cin>>x;
      string x=find(a,b,posA+1,posB,lenA,lenB,val+1,ans+a.at(posA));
      string y=find(a,b,posA,posB+1,lenA,lenB,val+1,ans+b.at(posB));
      
      if(x.length()>y.length())
      {
         return x;
      }
      
      else
      {
        return y;
      }
      
   }
}




