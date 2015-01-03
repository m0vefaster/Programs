//http://www.codechef.com/problems/LECANDY
#include<stdio.h>
#include<stdlib.h>
main()
{
      
      int i,j,T,n,c;
      
      scanf("%d",&T);

    
    for(i=0;i<T;i++)
    {  
    
       scanf("%d",&n);
       scanf("%d",&c);

      int x; 
      j=0;
      while(j<n)
       {
	     scanf("%d",&x);
	     c=c-x;
	     j++;
       }
      if( c>=0) 
       printf("Yes\n");
      else
       printf("No\n");
       
    }
    
    return 0;

}
