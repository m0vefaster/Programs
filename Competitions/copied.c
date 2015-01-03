#include<stdio.h>
int main()
{
	long int t;
	char str[11];
	scanf("%d",&t);
	gets(str);
	while(t--){
		gets(str);
		int f=0;
	  if(str[5]=='\0')
		if(str[2]=='-')
		   if(str[0]>='a' && str[0]<='h')
			  if(str[1]>='1' && str[1]<='8')
				if(str[3]>='a' && str[3]<='h')
				  if(str[4]>='1' && str[4]<='8')
				     f=1;
		if(f){
			int x,y;
			x=str[0]>str[3]?str[0]-str[3]:str[3]-str[0];
			y=str[1]>str[4]?str[1]-str[4]:str[4]-str[1];
			if((x==2&&y==1)||(x==1&&y==2))
			   printf("Yes\n");
			else
			   printf("No\n");
		}
		else
		  printf("Error\n");  
					
	}
	return 0;
} 
