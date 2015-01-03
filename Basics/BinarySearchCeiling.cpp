#include<stdio.h>
 


int getNotPossible(int *a,int lo,int hi,int x)
{
   int mid;
   //printf("\n Searching in %d %d",lo,hi);
   
   //if(x<a[lo])
     //return lo;
   
   if(x>a[hi])
      return -1;
  
   mid= (lo+hi)/2;

   if(lo==hi && a[lo]<=x)
   {
    return -1;
   }
   else if(lo==hi && a[lo]>x)
   {
     return lo;
   }
   if( x>a[mid])
   {
        if( mid+1<=hi && a[mid+1]>x)
        {
          //printf("\nReturning from here1");
          return mid+1;
        }
        else
        return getNotPossible(a,mid+1,hi,x);
   
   }
   
   else if(x<a[mid])
   {
        if(mid-1>=lo && a[mid-1]<=x)
        {
           //printf("\nReturning from here2");
           return mid;
        }
        else
        return getNotPossible(a,lo,mid,x);
   }	       
   
	    
}


/* Driver program to check above functions */
int main()
{
   //int arr[] = {1, 2, 8, 10,10,10,10,10,10,10,10,12,12 ,12, 19};
   int arr[]={2,4,6,10};
   int n = sizeof(arr)/sizeof(arr[0]);
   int x = 6;
   int index = getNotPossible(arr, 0, n-1, x);
   if(index == -1)
     printf("Ceiling of %d doesn't exist in array ", x);
   else 
     printf("ceiling of %d is %d at %d", x, arr[index],index);
   getchar();
   return 0;
}
