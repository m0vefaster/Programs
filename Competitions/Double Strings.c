#include<stdio.h>
main()
{
      
      int i,T,p,max,count;
      
      scanf("%d",&T);

      
    for(i=0;i<T;i++)
    {
       scanf("%d",&p);

       count = p - p%2 ;
       printf("%d\n",count);
    }
    
    return 0;

}
