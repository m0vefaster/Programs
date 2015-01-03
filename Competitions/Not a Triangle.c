//http://www.codechef.com/problems/NOTATRI
#include<stdio.h>
#include<stdlib.h>
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

void sort(int* a,int lo,int hi)
{
  int x=part(a,lo,hi);
 if (lo<x-1) sort(a,lo,x-1);
 if (x<hi) sort(a,x,hi);
}


int part(int* a,int lo,int hi)
{int i=lo,j=hi,temp,pivot=a[(i+j)/2];
while (i<=j)
   {while (a[i]<pivot) i++;
    while (a[j]>pivot) j--;
    if (i<=j)
    {temp=a[j]; a[j]=a[i]; a[i]=temp; i++; j--;}
            
            
   }
   return i;
}


main()
{
      
      int i,j,k,n;
      


    
    do
    {  
    
       scanf("%d",&n);
       
       i=0;
       int x[n];
       
       
       while(i<n)
       {
       	   scanf("%d",&x[i]);
       	   i++;
       }
       
       //qsort (x ,  n , sizeof(int), compare); 
       sort(x,0,n-1);
       int count=0;
       
       
       for(i=n-1;i>=2;i--)
       {
       	  int l= 0;
       	  int r= i-1;
       	  
       	  
       	  while(l<r)
       	  {
       	  	  if(x[l]+x[r] < x[i])
       	  	  {
       	  	  	 
       	  	  	 count= count + r -l ;
				 l++;
       	  	  }
       	  	  else
       	  	     r--;
       	  }
       	  
       }
       
       printf("%d\n",count);
       
    }while(n!=0);
    
    return 0;

}
