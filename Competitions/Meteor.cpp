#include<iostream>
#include<stdio.h>
#include <algorithm>
#include<math.h>
#include<string.h>
#include <queue>
using namespace std;
 

int main()
{
	long long int N,M,K,i,j,x,y,Q,k,temp;
	
	
	cin>>N>>M>>K;
	
	i=0;
	if(N>M)
	{
		temp=M;
		M=N;
		N=temp;
	} 
	 
	long long int A[N+1][M+1][3];
	
	
	for(i=1;i<=N;i++)
    {
   	
    	for(j=1;j<=M;j++)
    	{
            
    			A[i][j][0]=0;
                A[i][j][1]=-1;
                A[i][j][2]=-1;
    	}
    }
    
    i=0;
    
	while(i<K)
	{
		cin>>x>>y;
		A[x][y][0]=1;
		i++;
		//cout<<"I is:"<<i;
	}  
	

    
   
    
    for(i=N;i>=1;i--)
    {
    	
    	long long count=0;
    	
    	for(j=M;j>=1;j--)
    	{
            
    		if(A[i][j][0]==0)
    		{
    		//	cout<<"\nA[i][j]==0 for i,j:"<<i<<","<<j;
    			count++;
    			A[i][j][1]=count;
    		}
    		else
    		{
    			count=0;
    		}
    	}
    	
    	
    }
    
    
    
    for(i=M;i>=1;i--)
    {
    	
    	long long count=0;
    	
    	for(j=N;j>=1;j--)
    	{
            

    		if(A[j][i][0]==0)
    		{
    			count++;
    			A[j][i][2]=count;
    		}
    		else
    		{
    			count=0;
    		}
    	}
    }
    
  /* for(i=1;i<=N;i++)
    {
    	
    	long long count=0;
    	cout<<endl;
    	for(j=1;j<=M;j++)
    	{

    		cout<<"("<<A[i][j][1]<<","<<A[i][j][2]<<")  ";
    		
    	}
    	
    	
    }*/
    
    
    
    
    
    
	cin>>Q;


    
    
    k=0;
    
    while(k<Q)
    {    	
        long long int min,max;
	     cin>>min>>max;
		long long int val=0;
		    for(i=min;i<=max;i++)
		    {

		    	for(j=1;j<=M;j++)
		    	{
		
                     if(A[i][j][0]==0)
                     {
                     	
                      // cout<<"\n\na[i][j] == 0 at:"<<i<<" "<<j;
                     	long long int l = A[i][j][2];
						x = A[i][j][1];
						y = j +1 ;
						if(val==0)
						   val=1;
						if( x==1 )
						{							
							if( l > ( max -i+1))
							{
								l =  max - i+ 1;
							}
							
							if ( A[i][j][1] * l > val )
			    	      	{
			    			val = A[i][j][1] * l ; 
			    		    }
						}   
						
						while(j<=M && x>1 )
						{
						
						// cout<<"\nl is"<<l<<", x= "<<x<<", y="<<y<<" val="<<val; 
							if(A[i][y][2]<l)
							{
								l= A[i][y][2];
							}
							x--;
							y++;
							
						//	cout<<"\nl is"<<l;	

							if( l > ( max -i+1))
							{
								l =  max - i+ 1;
							}
							
							
							if ( A[i][j][1] * l > val )
			    	      	{
			    			val = A[i][j][1] * l ; 
			    		    }
						}
						  
                     
                     
			    	
					
					
					}
					
					
					
		    	}
		    	
		    	
		    }
		    
		    
		    cout<<val<<endl;
	    k++;
    }
    
    
}
