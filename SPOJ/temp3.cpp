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
#include<queue>
#include<stack>
#include<cstdio>
#include<list>
using namespace std;

/*
#define gc getchar

void scanint( int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}

*/

int main()
{
char c = 7;
//c = c << 4;
c= c & 1<<1; 
c= c << 6;
printf("Out%c",c);
}

