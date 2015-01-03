#include<stdio.h>
#include <stdlib.h> 
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
main()
{
      
      int i,j,T,s[11],k,n,l;
      int c[11];
      
      scanf("%d",&T);

      
    for(i=0;i<T;i++)
    {
    	
       for(j=0;j<11;j++)
       {
    	 scanf("%d",&s[j]);
       } 
       
      qsort (s, 11 , sizeof(int), compare); 
      
      
      int n=0;
	  c[n]=1;
	    
      for(j=9;j>=0;j--)
	  {
	  	

	  	
	  	 if(s[j+1]==s[j])
	  	  {
	  	  	 c[n]=c[n]+1;
	      }
	     else
		 {
		 	 n++;
		 	 c[n]=1;
	     } 
		 

      }


 
       scanf("\n%d",&k);
	   j=0;
       while(c[j]<=k)
       {
       	 k=k-c[j];
       	 j++;
       }
       

       
       if(k==0)
       {
       	 printf("1\n");
       }
       else
       {
       printf("%d\n",perm(c[j],k));
       }
    }
    return 0;

}


int perm(int n, int r)
{
	if (r > n/2)
		r = n - r;
	int i;
	int temp1 = 1, temp2 = 1;
	for (i = 1; i <= r; i++) {
		temp1 *= i;
		temp2 *= n--;
	}
	
	return temp2/temp1;
}
