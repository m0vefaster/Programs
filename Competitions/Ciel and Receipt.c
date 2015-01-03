#include<stdio.h>
main()
{
      
      int i,T,p,max,count;
      
      scanf("%d",&T);

      
    for(i=0;i<T;i++)
    {
       scanf("%d",&p);

       max=2048;
       count =0 ;
       
       while(p!=0)
       {
	     count+= p/max;
       	 p= p%max;
       	 max=max/2;
       }
       
       printf("%d\n",count);
    }
    
    return 0;

}
