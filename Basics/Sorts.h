#ifndef Sorts_H
#define Sorts_H

#include <iostream>

using namespace std;

template <typename T>
void merge(T *,T ,T ,T);

template <typename T>
void insertionSort(T *a,T n)
{
  int i,j;
  
  for(i=1;i<n;i++)
  {
    T key= a[i];
    
    for(j=i-1;j>=0 && key<a[j];j--)
    {
       a[j+1]=a[j];
    }
    
    a[j+1]=key;
  }
}


template <typename T>
void mergeSort(T *a, T p, T r)
{
  if( p < r)
  {
    int q = (p+r)/2; 
    mergeSort(a,p,q);
	mergeSort(a,q+1,r);
	merge(a,p,q,r); 
  }
    
}

template <typename T>
void merge(T *a, T p, T q,T r)
{
   int left=p;
   int right=q+1;
   int i,j,k;
   
   T leftArray[q-p+1];
   T rightArray[r-q];
   
   j=0;
   for(i=p;i<=q;i++)
   {
      leftArray[j]=a[i];
      j++;
   }
   
   
   j=0;
   for(i=q+1;i<=r;i++)
   {
      rightArray[j]=a[i];
      j++;
   }
   
   j=0;
   k=0;
   for(i=p;i<=r && j<q-p+1 && k<r-q ;i++)
   {
     if(leftArray[j]<rightArray[k])
     {
       a[i]=leftArray[j++];
     }
     
     else
     {
        a[i]=rightArray[k++];
     }
   }
   
   while(j<q-p+1)
   {
       a[i]=leftArray[j++];
       i++;
   }
   
   while(k<r-q)
   {
     a[i]=rightArray[k++];
     i++;
   }
}

#endif


