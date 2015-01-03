#include<stdio.h>
#include<string.h>

main()
{
      
      int i,j,k,T;
      char x[1000000];
      scanf("%d",&T);

      
    for(i=0;i<T;i++)
    {
      
       scanf("%s",&x);



       j=0;
       k=strlen(x)-1;
       int  count = 1 ;
       while(j<k)
       {
       	   char start= x[j];
       	   char end= x[k];
       	   
       	   if( start==end)
       	   {
       	   	   if(start == '?' )
       	   	   {
       	   	   	   count = (count *26)  % 10000009;
       	   	   	   count =count;
       	   	   }
       	   	   
           }
           
           else if ( start == '?' || end == '?' )
            {
            	 
            }
           
           else 
           {
           	 count=0;
           	 break;
           }
           
           j++;
           k--;
       }
       
       if(count!=0 && j==k )
       {
       	   if( x[j] == '?')
       	   {
       	    count = (count *26)  % 10000009;
       	   }
       }
       
       printf ("%d\n", count);
    }
    
    return 0;

}
