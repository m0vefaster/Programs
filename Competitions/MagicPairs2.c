#include<stdio.h>
main()
{
      
      int i,T;
       long long int n,x,j;
      scanf("%d",&T);

      

    for(i=0;T>=1 && T<=4 && i<T ;i++)
    {
    	
       scanf("%lld",&n);

       j=0;
       
       
	   while(j<n)
       {
        scanf("%lld",&x);	  
        j++;
       }
       
        long long int count ;
       if( n==0 || n==1 )
         count = n;
       else if ( n>100000 || n<1 )
	      count =0 ;  
       else if ( n%2 ==0)
       {
       	  count = n/2;
       	  count = count *(n-1);
       	  
       }
       
       else
       {
       	   count = (n-1)/2;
       	   count = count * n;
       	   
       }
       printf("%lld\n",count);
    }
    
    return 0;

}
