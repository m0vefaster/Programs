//http://www.codechef.com/problems/HORSES
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<string.h>

#include <unistd.h>

int main()
{
      
      long int i,j,T,n;
      

    scanf("%d",&T);
    char x[11];
    gets(x);
    i=0;
    
    while(i<T)
    {  
    

       gets(x);
 
       int len= strlen(x);
       
       if( len !=5 )
          {
          	printf("Error\n");
          }
          
       else
	      {
	      	int x1=x[0]-97;
	      	int y1=x[1]-49;
	      	
	      	int x2=x[3]-97;
	      	int y2=x[4]-49;
	      	
	      	//printf("x1:%d y1:%d x2:%d y2:%d and hypen", x1,y1,x2,y2,x[2]);
	      	
	      	if(x[2]!='-' || x1<0 || x1>7 || y1 <0 || y1>7 || x2<0 || x2>7 || y2 <0 || y2>7 )
	      	{
	      		 printf("Error\n");
	      	}
	      	
	      	else if( x2 > x1 )
	      	{
	      		  if( x2==x1+2 && y2==y1+1 )
	      		    {
	      		    	  printf("Yes\n");
	      		    }
	      		  else if( x2==x1+1 && y2==y1+2 )
	      		    {
	      		    	  printf("Yes\n");
	      		    }
	      		  else if( x2==x1+1 && y2==y1-2 )
	      		    {
	      		    	  printf("Yes\n");
	      		    }  
				 else if( x2==x1+2 && y2==y1-1 )
	      		    {
	      		    	  printf("Yes\n");
	      		    }  	
			     else
				    {
				    	printf("No\n");
			        }
	      	}
	      	

	      	else if( x1 > x2 )
	      	{
	      		  if( x2==x1-2 && y2==y1-1 )
	      		    {
	      		    	  printf("Yes\n");
	      		    }
	      		  else if( x2==x1-1 && y2==y1-2 )
	      		    {
	      		    	  printf("Yes\n");
	      		    }
	      		  else if( x2==x1-1 && y2==y1+2 )
	      		    {
	      		    	  printf("Yes\n");
	      		    }  
				 else if( x2==x1-2 && y2==y1+1 )
	      		    {
	      		    	  printf("Yes\n");
	      		    }  	
			     else
				    {
				    	printf("No\n");
			        }
	      	}	      	
	      	
	      	else
	      	    	printf("No\n");    
	      	 
	      }
		     
       
       
     i++;  
    }
    
    return 0;

}
