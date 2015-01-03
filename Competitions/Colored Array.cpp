#include<iostream>
#include<stdio.h>
#include <algorithm>
#include<math.h>
#include<string.h>
#include<vector>
#include<map>
#include <utility>
#include <time.h> 
using namespace std;



#define gc getchar
int read_int() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}

int main()
{


  int T,N,M,K,i,j,x,m;
   
  cin>>T;
  
  while(T--)
  {
  
		  cin>>N>>M>>K;
		  
		  int A[N+1];
		  i=1;
		  
		  while(i<=N)
		  {
		     //cin>>A[i];
		     A[i]=read_int();
		     i++;
		  }
		  
		  
		  
		  
		  int adv[N+1][M+1];
		  int cost[N+1];
		  int initial=0,repainting=0;
		  
		  for(i=1;i<=N;i++)
		  {
		
		      for(j=1;j<=M;j++)
		      {
		         //cin>>adv[i][j];
		         adv[i][j]=read_int();
		      }
		      
		     
			 initial+=adv[i][A[i]];
		  }
		  
		  
		  
		
		  cost[0]=-10000;

          int N2=1;
          
		  for(i=1;i<=N;i++)
		  {
		     m= -10000;
		      
		      for(j=1;j<=M;j++)
		      {
		         //cin>>x;
		         x=read_int();
		         adv[i][j]=adv[i][j]-x; 
		         if( adv[i][j] >  m) 
		         {
		            m =adv[i][j];
		         }
		      }
		      
		      //cout<<"\nMax for i is:"<<i<<"  "<<m<<endl;
		      //Cost for repaining
		       
		        if((m - adv[i][A[i]])>0)
		         {
		            cost[N2]= m - adv[i][A[i]];
		            N2++;
		         }
		      
		      
		  }
		  
		  
		 /* for(i=1;i<N2;i++)
		  {
		     cout<<"\nCost for i is:"<<i<<"  "<<cost[i]<<endl;
		  }
		  
		 */
		 
		 /* int s = sizeof(cost)/sizeof(cost[0]); 
		  sort(cost,cost+s);
		  
		  
		  for(i=N;i>=N+1-K && cost[i]>0 ;i--)
		  {
		      repainting+=cost[i];
		  }
		  
		  
		  */
		  
		  
		  
		  for(i=1;i<=K;i++)
		  {
		    int max= cost[1];
		    int loc=1;
		    for(j=2;j<N2;j++)
		    {
		     
		       if(cost[j]>max)
		       {
		          max=cost[j];
		          loc=j;
		       }
		       
		    }
		    
		    if(max>0)
		    {
		       repainting+=max;
		       cost[loc]=-1;
		    }
		    
		    else
		      i=K+1;
		    
		  }
		  
		  //cout<<"\nInitial is:"<<initial<<endl;
		  cout<<(initial+repainting)<<endl;
	}
  
}
  
  
  
  
  
  
  
  
  
  
    
