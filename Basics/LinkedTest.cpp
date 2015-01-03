
#include "Linked.h"
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
   Linked<int> head ; 
   for(int i=0;i<=10;i++)
   {
     head.insertStart(i);
   }
   

   head.printList();
  
   head.deleteStart();
   head.printList();

   head=head.reverseList();
   head.printList();   
}
