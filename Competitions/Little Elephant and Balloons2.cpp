#include<iostream>
#include<stdio.h>
#include <algorithm>
#include<math.h>
#include<string.h>
#include<vector>
#include<map>
#include <utility>
#include <time.h> 
#include <iomanip>
#define gc getchar

using namespace std;

void scanint( long long int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}

bool wayToSort(pair<long long int,long long int> a,pair<long long int,long long int> b)
{
   return a.first>b.first;
}

int main()
{

long long int T;
cin>>T;

while(T--)
{
long long int N,M;
long long int i,j,k,m;

cin>>N>>M;
N++;//To make space for dummy start

long long int sum[N],x,y;
vector<long long int> v[N];
vector<pair<long long int,long long int> > colors;

colors.push_back(make_pair(0,0));//Dummy Insert
sum[0]=0;

for(i=1;i<N;i++)
{
  scanint(x);
  scanint(y);
  
  colors.push_back(make_pair(x,y));
  sum[i]=0;  
}

sort(colors.begin(), colors.end(), wayToSort);

v[0].push_back(colors[0].second);
sum[0]+=colors[0].second;

long long int cur_row=1;

cout<<"\nN is :"<<N;

i=1;

while(i<N)
{
   vector<pair<long long int,long long int> > temp;
   
   cout<<"\nAdding to temp:"<<colors[i].first<<endl;
   temp.push_back(colors[i]);
   i++;
    
   while(i<N && temp.at(0).first == colors[i].first)
   {
       cout<<"\nAdding to temp in loop:"<<colors[i].first<<endl;
       temp.push_back(colors[i]);
       i++;
   }
   
   
  
   for(j=cur_row-1;j>=0;j--)
   {
      for(k=0;k<v[j].size();k++)
      {     
	       
           for(m=0;m<temp.size();m++)
           {
            v[j+1].push_back(v[j].at(k)+temp.at(m).second);
            sum[j+1]+=(v[j].at(k))+temp.at(m).second;
           }
           
      }
      
   }
   
   for(m=0;m<temp.size();m++)
           {
             
   			 v[0].push_back(temp[m].second);
             sum[0]+=temp[m].second;
           }
    cur_row++;       
    
    cout<<"\n i is:"<<i<<endl;
}





long double sumT=0;
long long int n=0;
cout<<"\nTotal rows are:"<<cur_row<<endl;
cout<<"\nM is:"<<M<<endl;
for(i=M;i<cur_row;i++)
{
  cout<<"\nRow"<<i<<" sum is"<<sum[i]<<" "<<v[i].size()<<endl;
  cout<<"\nVector is:";
  
  for(j=0;j<v[i].size();j++)
     cout<<v[i].at(j)<<" ";
    
  sumT+=sum[i];
  n+=v[i].size();
}

cout<<"\nSum and n are:"<<sumT<<" "<<n<<endl;
 long double ans= (( long double)sumT)/(( long double)n);
cout<<setprecision(10)<<ans<<endl;


}


}
