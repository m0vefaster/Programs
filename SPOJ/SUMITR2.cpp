#include<iostream>
#include<vector>
#define f(a,b,c) for(a=b;a<=c;++a)
using namespace std;
int main()
{
int N,i,j;
cin>>N;
while(N--)
{
  int rows;
  cin>>rows;
  int v[101][101];
  
  for(i=0;i<rows;i++)
  {
     for(j=0;j<=i;j++)
     {
       
     }
  }
  for(i=1;i<rows;i++)
  {
     for(j=0;j<=i;j++)
     {
	    cin>>v[i][j];
	    
        if(j==0)
           v[i][j]=v[i-1][j]+v[i][j];

        else if(j==i)
           v[i][j]=v[i-1][j-1]+v[i][j];

        else 
           v[i][j]=max(v[i-1][j-1],v[i-1][j]) + v[i][j];

     }
  }
  int m=0;
  for(j=0;j<rows;j++)
  {
     if(v[rows-1][j]>m)
       m=v[rows-1][j];
  }
  cout<<m<<endl;
}
}
