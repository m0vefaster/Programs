#include<iostream>
#include<stdio.h>
#include <algorithm>
#include<math.h>
#include<string.h>
#include<vector>
#include<map>
#include <utility>
#include <time.h> 
#include<limits>
using namespace std;

int main()
{

long long int N,M,P;

cin>>N>>M>>P;

long long int a[N][M]={0},i,j,k,b[P][2],row[N];

/*
for(i=0;i<N;i++)
{
row[i]=M-1;
for(j=0;j<M;j++)
  {
    a[i][j]=0;
  }
}*/

k=0;
while(k<P)
{
   cin>>b[k][0];
   b[k][0]--;
   cin>>b[k][1];
   b[k][1]--;
   
   a[b[k][0]][b[k][1]]++; 
   k++;
   

}

/*cout<<"\n\n\n";
for(i=0;i<N;i++)
{
 cout<<"\n";
 for(j=0;j<M;j++)
  {
   cout<<a[i][j]<<" ";
  }
}

cout<<"\n";
*/

k=0;
while(k<P)
{
   i=b[k][0];
   j=b[k][1];  
    
   //cout<<"\n\n===============testing for i &j:"<<i<<" "<<j<<"=============="<<endl; 
   if(row[i]!=-1)
   {
       int cur= a[i][j];
       
       int left=-3;
       int right=-3;
       
       
       
       if(cur!=-2)
       {
       
		       if(j>=1 )
		       {
		          left=a[i][j-1];
		       }
		       
		       if(j+1<=M-1)
		       {
		         right=a[i][j+1];
		       }
		       
		       
		       //cout<<"\nLeft Cur and Right:"<<left<<" "<<cur<<" "<<right<<endl;
		       
		       if(left!=-2 && left!=-3)
		       {
		          if(cur+1>= left)
		          {
		             //cout<<"\nIncrementing row with cur-left";
		             row[i]+=cur-left;
		          }
		          else
		          {
		             //cout<<"\n1)Row"<<i<<" is -1";
		             row[i]=-1;
		          }
		          //cout<<"\nRow "<<i<<" is:"<<row[i];
			   }
			   
			   if(row[i]!=-1 && right!=-2 && right!=-3)
			   {
			       if(right+1>=cur)
			       {
			         //cout<<"\nIncrementing row with right -cur";
			         row[i]+=right-cur;
			       }
			       else
			       {
			          //cout<<"\n2)Row"<<i<<" is -1";
			          row[i]=-1;
			       }
			       //cout<<"\nRow "<<i<<" is:"<<row[i];
			   }
			   
		}	   
       a[i][j]=-2;
   }
   
   k++;
}


for(i=0;i<N;i++)
{
   cout<<row[i]<<endl;
}


}






