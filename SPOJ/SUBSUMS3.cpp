#include<iostream>
//#include<stdio.h>
#include <algorithm>
#include<math.h>
#include<string>
#include<vector>
#include<map>
#include <utility>
#include <time.h> 
#include<limits>
#include<queue>
#include<stack>
#include<cstdio>
#include<list>
using namespace std;



int main()
{

int N,A,B;
int i,j,k;
cin>>N>>A>>B;

long long int S[N+1];
//S[0]=-20000001;

for(i=1;i<=N;i++)
{
  cin>>S[i];

}



long long int sum=0,count=0;
long long int cases=pow(2,N)-1;
//long long int D[cases];
//D[cases]=-1;
vector<long long int> v1;
vector <long long int> v2;

i=0;

while(i<=cases)
{
   j=1;
   k=1;
   sum=0;
   
   while(k<=N)
   {
      if(j & i)
      {
         
         sum+=S[k];
      }
    
      j=j*2;
      k++;
   }
    
    if(i<=(cases/2))
      v1.push_back(sum);
    else
	  v2.push_back(sum);
	    
   i++;
}


sort(v2.begin(),v2.end());

std::vector<long long int>::iterator low,up;

for(i=0;i<v1.size();i++)
{
   low=lower_bound (v2.begin(), v2.end(), A-v1.at(i)) ;//- v2.begin(); //          ^
   up= upper_bound (v2.begin(), v2.end(), B-v1.at(i)) ;//- v2.begin(); //  
   count+=(up-v2.begin())-(low-v2.begin());     
}

cout<<count;


}
