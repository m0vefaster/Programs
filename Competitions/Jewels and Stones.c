#include<stdio.h>
#include<string.h>
main()
{
      
      int i,T;
      
      scanf("%d",&T);

      
    for(i=0;i<T;i++)
    {
       char x[100];
       scanf("%s",&x);


       int countU[26];
       int countL[26];
       
       int j=0;
       int tmp;
       
       while(j<strlen(x))
       {
       	 
       	 tmp=x[j];
       	 if(tmp>=65 && tmp<=90)
       	 {
       	    countU[j]=tmp-65;  
       	 }
       	 
       	 else
       	 {
       	 	 countL[j]=tmp-97; 
       	 }
       	 j++;
       }
       
       char y[100];
	   gets(y);
	   j=0;
       int matches=0;
       while(j<strlen(y))
       {
       	   tmp=y[j];
       	 if(tmp>=65 && tmp<=90)
       	 {
       	    tmp=tmp-65;
       	    if(countU[tmp]>0)
       	    {
       	    	countU[tmp]--;
       	    	matches++;
       	    }
       	 }
       	 
       	 else
       	 {
       	 	 tmp=tmp-97; 
       	 	if(countL[tmp]>0)
       	    {
       	    	countL[tmp]--;
       	    	matches++;
       	    }
       	    
       	 }
       	 j++;
       	   
       }
       
       printf("%d\n",matches);
    }
    
    return 0;

}
