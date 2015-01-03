
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
	
	long long int T,N,M;
	
	cin>>T;
	
	while(T--)
	{
		cin>>N>>M;
		string s;
		
		long long int c[100][100][100]={0};

		while(M--)
		{
			cin>>s;
			if(s == ("UPDATE"))
			{
				long long int x,y,z,w;
				cin>>x>>y>>z>>w;
				c[x][y][z]=w;
			
			}
			
			else 
			{
				long long int x1,y1,z1,x2,y2,z2,i,j,k;
				long long int sum=0;
				cin>>x1>>y1>>z1>>x2>>y2>>z2;
				for(i=x1;i<=x2;i++)
				{
					for(j=y1;j<=y2;j++)
					{
						 for(k=z1;k<=z2;k++)
						 {
		
						 	    sum+=c[i][j][k];
						 }
					}
				}
				cout<<sum<<endl;
			}
		}
	}
	
}
