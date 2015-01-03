
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


int main()
{
	long long int T , M , N ,sum,a,b,c;
	
	

		cin>>N>>M;
		sum=0;
		while(M--)
		{
			cin>>a>>b>>c;
			sum+= (b-a+1)*c;
		}
		
		sum=sum/N;
		cout<<sum<<endl;

	
	return 1;
}
