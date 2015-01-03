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

long long int a;

cin>>a;

a=a%6;

if(a==0 || a==1 || a==3 )
  cout<<"yes";
  
else
   cout<<"no";
    

}
