#include<iostream>
#include<vector>
using namespace std;
int main()
{
int N,i,j;
cin>>N;
while(N--)
{
  int rows,input;
  cin>>rows;
  vector<int> v[rows],sum[rows];
  for(i=0;i<rows;i++)
  {
     for(j=0;j<=i;j++)
     {
       cin>>input; 
       v[i].push_back(input);
     }
  }
  sum[0].push_back(v[0].at(0));
  for(i=1;i<rows;i++)
  {
     for(j=0;j<=i;j++)
     {
        if(j==0)
           sum[i].push_back(sum[i-1].at(j)+v[i].at(j));

        else if(j==i)
           sum[i].push_back(sum[i-1].at(j-1)+v[i].at(j));

        else 
           sum[i].push_back(max(sum[i-1].at(j-1),sum[i-1].at(j)) + v[i].at(j));

     }
  }
  int m=0;
  for(j=0;j<rows;j++)
  {
     if(sum[rows-1].at(j)>m)
       m=sum[rows-1].at(j);
  }
  cout<<m<<endl;
}
}
