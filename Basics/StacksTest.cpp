#include "Stacks.h"
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
   Stacks<int> stack; 

   for(int i=0;i<=10;i++)
   {
     stack.push(i);
   }
   

   stack.printStack();
   stack.pop(); 
   stack.printStack();
 
}
