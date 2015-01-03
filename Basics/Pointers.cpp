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

  //Single Pointers
  int a;
  int *p;
  
  a=10;
  p= &a;
  
  cout<<"a="<<a<<endl;
  cout<<"p="<<p<<endl;
  cout<<"*p="<<*p<<endl;
  
  
  //Double Pointers
  int **pp;
  pp=&p;
  

  cout<<"*pp="<<*pp<<endl;
  cout<<"**pp="<<**pp<<endl;
  
  
}
