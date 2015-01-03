#include<iostream>
#include<stdio.h>
#include <algorithm>
#include<math.h>
#include<string.h>
#include<vector>
#include<map>
#include <utility>
#include <time.h> 
#include <fstream>
using namespace std;




int main()
{

int T;
double x,y,z;

cin>>T;

while(T--)
{
   cin>>x>>y;
   x=x*x;
   y=y*y;
   z= x-y;
   if(z<0)
   {
    z=z*-1;    
   }
   
   z=pow(z,0.5);
   
   cout<<z<<" ";
   
   z= x+y;
   z=pow(z,0.5);
   
   cout<<z<<endl;

}

}
