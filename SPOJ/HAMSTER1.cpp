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
	double T, V0, K1, K2;
	double theta, p, pi = 3.14159265;
	cin>>T;
while(T--)
{

		cin >>V0>>K1>>K2;
		
		if (K2 == 0) 
		{
			theta = pi/4.0;
		} 
		else if (K1 == 0) 
		{
			theta = pi/2.0;
		}
		else 
		{
			theta = atan(-4*K1/K2)/2;
			
			if (theta < 0)
			  theta += pi/2.0;
		}


        
		p = (V0*V0)/10*(K1*sin(2*theta) + K2*sin(theta)*sin(theta)/2);
		printf("%.3lf %.3lf\n", theta, p);

}

}
