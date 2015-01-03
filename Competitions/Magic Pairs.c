#include<stdio.h>
main()
{
      
      int i,T,n;
      
      scanf("%d",&T);

      
    for(i=0;i<T;i++)
    {
       scanf("%d",&n);

       int j=0;
       
	   int x;
       
	   while(j<n)
       {
        scanf("%d",&x);	  
        ++;
       }
       
       int count ;
       if( n%2 ==0)
       {
       	  count = n/2;
       	  count = count *(n-1);
       	  
       }
       
       else
       {
       	   count = (n-1)/2;
       	   count = count * n;
       	   
       }
       printf("%d\n",count);
    }
    
    return 0;

}
