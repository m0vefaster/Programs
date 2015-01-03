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

int getInput(int *x)
{
char ch;
int i=0;
   while(1)
   {
     //cout<<"\nwaiting for next char";
     ch=getchar();
     //cout<<"\nValue entered is"<<ch;
     if(ch>=48 && ch<= 57)
     {
        x[i]=ch-48;
        i++;
     }
     
     else break;
   } 
   
   //cout<<"\n Out of loop";
   return i;
}


int* add(int *x,int *y,int startX,int endX,int startY,int endY)
{
   int z[2000];
   int i,j;
   i=startX;
   j=startY;
   
   while(j<endX && )
   
     
}


int main()
{

int T;

cin>>T;

getchar();
while(T--)
{
int x[1000];
int y[1000];

int n=getInput(x);
int m=getInput(y);

int i,j;



}


}


