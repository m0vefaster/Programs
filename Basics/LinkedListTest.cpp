#include "LinkedList.h"
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
   LinkedList<int> head(10); 
   head.insertStart(12);
   head.insertStart(13);
   head.printList();
  
   head.deleteStart();
   head.printList();

   head=head.reverseList();
   head.printList();   
}


