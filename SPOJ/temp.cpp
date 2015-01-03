#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cstring>
#include <cmath>
 
using namespace std;
 
#define MAX_N 101
 
int n,x[MAX_N],lo,hi;
long long res=0LL;
vector<int>s1,s2;
 
int main()
{
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            for (int k=0;k<n;k++)
            {
                s1.push_back(x[i]*x[j]+x[k]);
				if (x[k]==0) continue;
				
                s2.push_back((x[i]+x[j])*x[k]);
            }
            }
        }
    

    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    
     for (vector<int>::iterator it = s1.begin() ; it != s1.end(); ++it)
    std::cout << ' ' << *it;
  cout<<"\n";   
    
  for (vector<int>::iterator it= s2.begin() ; it != s2.end(); ++it)
    std::cout << ' ' << *it;
   cout<<"\n";   
 
    for (int i=0;i<s1.size();i++)
    {
        lo=lower_bound(s2.begin(),s2.end(),s1[i])-s2.begin();
        hi=upper_bound(s2.begin(),s2.end(),s1[i])-s2.begin();
        res+=(hi-lo);
    }
    printf("%lld\n",res);
    return 0;
}
