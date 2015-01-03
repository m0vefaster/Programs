//http://www.codechef.com/problems/HORSES
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<string.h>


main()
{
      
      int i,j,T,n;
      

    scanf("%d",&T);
    i=0;
    
    while(i<T)
    {  
    
       char x[200];
       scanf("%s",&x);
       
       int len= strlen(x);

       j=0;
       int countU[26]={0};
       int countL[26]={0};
       
       while(j<len)
       {
	       	 int val = x[j];
	 
	        if( val >=65 && val<=90)
	        {
	        	 countU[val-65]++;
	        	  // printf("\n Index of increment is %d and Value of Increment is %d",val-65,countL[val-65]);
	        }
	        
	        else if (val >=97 && val<=(97+25))
	        {
	        	 countL[val-97]++;
	        	   //printf("\n Index of increment is %d and Value of Increment is %d",val-97,countL[val-97]);
	        }
	        
	      
	       	j++; 
       }
       
       int count=0;
       j=0;
       
       while(j<26)
       {
       	  if(countU[j]==0 || countU[j]==1)
       	  {
       	  	 count+=countU[j];
       	  }
       	  else
       	  {
       	  	 if( countU[j]%2==0 )
       	  	    count= count + countU[j]/2;
       	  	 else
				count= count + countU[j]/2 +1;     
       	  }
       	 
		   if(countL[j]==0 || countL[j]==1)
       	  {
       	  	 count+=countL[j];
       	  }
       	  else
       	  {
       	  	 if( countL[j]%2==0 )
       	  	    count= count + countL[j]/2;
       	  	 else
				count= count + countL[j]/2+1; 
       	  }
       	  	 
       	  j++;
       }
       
       printf("%d\n",count);
     i++;  
    }
    
    return 0;

}
