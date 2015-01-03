
#include<iostream>
#include<stdio.h>
#include <algorithm>
#include<math.h>
#include<string>
#include<vector>
#include<map>
using namespace std;

string convertInt(int number)
{
    if (number == 0)
        return "0";
    string temp="";
    string returnvalue="";
    while (number>0)
    {
        temp+=number%10+48;
        number/=10;
    }
    for (int i=0;i<temp.length();i++)
        returnvalue+=temp[temp.length()-i-1];
    return returnvalue;
}
void findAll(string s, int index,int val)
{
	if(s.length()==(index))
	{
		cout<<s<<endl;
		return;
	}
	
	
	
	for(int i=val;i<=9;i++)
	{
	  	string temp = convertInt(i);
	  	s[index]=temp[0];
	  	findAll(s,index+1,i+1);
	}
	
	
	
}
int main()
{
	string s;
	int i,n;
	cin>>n;
	cout<<endl;
	
	for(i=1;i<=n;i++)
	{
		
		s=s+ convertInt(i);
	}
	
	//cout<<s<<"\n\n";
	if(n<=9)
	  findAll(s,0,1);
	
}
