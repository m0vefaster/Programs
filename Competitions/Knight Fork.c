//#include<iostream>
#include<stdio.h>
//#include <algorithm>
#include<math.h>
#include<string.h>
//#include<vector>
//#include<map>
//#include <utility>
#include <time.h> 
//using namespace std;

bool valid(int,int,int);
int main()
{

int N, M;
int T,i,j,k;
int x,y;

cin>>T;

while(T--)
{
   cin>>N>>M;
   
   int board[N+1][M+1];
        
	for(i=0;i<=N;i++)
      {
      for(j=0;j<=N;j++)
        {
         board[i][j]=0;
        }

      }
       
   k=0;
   while(k<M)
   {
     cin>>x>>y; 
     board[x][y]=2;
    
     i=x;j=y; 
     while(i>0 && j>0)
     {
       if(board[i][j]==0 )
          board[i][j]=3;
       i--;
       j--;
     }
   
       
     cout<<"the board is\n";
     for(i=1;i<=N;i++)
      {
      for(j=1;j<=N;j++)
        {
         cout<<board[i][j]<<" ";
        }
        cout<<"\n";
       }
	     
     i=x;j=y;
     while(i<=N && j<=N)
     {
       if(board[i][j]==0 )
       {
         //cout<<"\n i and j are:"<<i<<" "<<j;
         board[i][j]=1;
       }      
       i++;
       j++;
     }
            
			
    cout<<"the board is\n";
     for(i=1;i<=N;i++)
      {
      for(j=1;j<=N;j++)
        {
         cout<<board[i][j]<<" ";
        }
        
        cout<<"\n";
       }

     
     
     
     i=x;j=y;
     while(i>0 && j<=N)
     {
       if(board[i][j]==0 )
           board[i][j]=1;
       i--;
       j++;
     }
     
     

     
     
     
      i=x;j=y;
     while(i<=N && j>0)
     {
       if(board[i][j]==0 )
           board[i][j]=1;
       i++;
       j--;
     }
     

     
     
      i=x;j=y;
     while(i<=N )
     {
       if(board[i][j]==0 )
       board[i][j]=1;
       i++;
     }
      
      i=x;j=y; 
     while(i>0 )
     {
       if(board[i][j]==0 )
       board[i][j]=1;
       i--;
     }
     
     i=x;j=y; 
     while(j>0 )
     {
       if(board[i][j]==0 )
       board[i][j]=1;
       j--;
     }
     
     
     i=x;j=y; 
     while(j<=N )
     {
       if(board[i][j]==0 )
       board[i][j]=1;
       j++;
     }
     
    cout<<"the board is\n";
     for(i=1;i<=N;i++)
      {
      for(j=1;j<=N;j++)
        {
         cout<<board[i][j]<<" ";
        }
        
        cout<<"\n";
       }
     
     k++;
     
   }
   
   

   int count=0;
   for(i=1;i<=N;i++)
   {
      for(j=1;j<=N;j++)
      {
         int found=0;
         if(board[i][j]==0)
         {
         
            if(valid(i+1,j+2,N) && board[i+1][j+2]==2)
            {
               found++;
            }
            
            if(valid(i+1,j-2,N) && board[i+1][j-2]==2)
            {
               found++;
            }
            
            
            if(valid(i-1,j+2,N) && board[i-1][j+2]==2)
            {
               found++;
            }
            
            
            if(valid(i-1,j-2,N) && board[i-1][j-2]==2)
            {
               found++;
            }
            
            
           
		    if(valid(i+2,j+1,N) && board[i+2][j+1]==2)
            {
               found++;
            }
            
            if(valid(i+2,j-1,N) && board[i+2][j-1]==2)
            {
               found++;
            }
            
            
            if(valid(i-2,j+1,N) && board[i-2][j+1]==2)
            {
               found++;
            }
            
            
            if(valid(i-2,j-1,N) && board[i-2][j-1]==2)
            {
               found++;
            }
			
            
			 
            if(found>=2)
              {
              count++; 
              cout<<"Found at:"<<i<<" "<<j;
              }
         }
      }
   }
   
   cout<<count<<endl;
   
}


}



bool valid(int i, int j, int N)
{
   if( i<=N && i>0 && j>0 && j<=N)
     return true;
     
    return false; 
}
