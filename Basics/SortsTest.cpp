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
#include "Sorts.h"
using namespace std;

int main()
{
 
   srand (time(NULL));
   int n=10,i;
   int a[n];
   cout<<"The initial sequence is:\n";
   
   for(i=0;i<n;i++)
   {
      a[i]= rand() % 1000;
      cout<<a[i]<<" ";
   }
   
   //insertionSort(a,n);
   mergeSort(a,0,n-1);
   cout<<"\nFinal sequence is:\n";
   
   for(i=0;i<n;i++)
   {
      cout<<a[i]<<" ";
   }
   
}
