#include<iostream>
#include<stdio.h>
#include <algorithm>
#include<math.h>
#include<string.h>
#include <queue>
using namespace std;
 
class Node
{

    
    
    public: 
	long long int numEdges;
    long long int adjacent[100];
    long long int done;
	Node()
    {
        numEdges=0;
        done=0;
    }
    void addEdge(long long int a)
    {
        adjacent[numEdges]=a;
        numEdges++;
    }
    
    long long int getnumEdges()
    {
    	return numEdges;
    }
    
    long long int getEdge(long long int a)
    {
    	return adjacent[a];
    }
    long long int getVisited()
    {
    	return done;
    }
    
    void setVisited()
    {
    	done=1;
    }

};

int main()
{
	long long int T,n,m,i,j,x,y;
    
    cin>>T;
    
    while(T>0)
    {
      cin>>n>>m;
      Node node[n+1];
      

      
      i=0;
      while(i<m)
      {
          cin>>x>>y;
          node[x].addEdge(y);
          node[y].addEdge(x);
          i++;
      }
      
      if(n%2==1)
      {
      	cout<<"NO"<<endl;
      }
      else
      {
      	long long int visited=1;
      	std::queue<Node> q;
      	q.push(node[1]);
      	node[1].setVisited();
      	
      	while(visited!=n && !q.empty())
      	{
      		
      		//cout<<"Main While"<<endl;
      		Node p = q.front();
      		q.pop();

      		long long int k= p.getnumEdges();
      		j=0;
      		
      		while(j<k)
            {
            	 
            	//cout<<"Inside adding edges:"<<k<<"  "<<j<<endl;
            	if(node[p.getEdge(j)].getVisited()==0)
            	{
            		node[p.getEdge(j)].setVisited();
            		//cout<<"Visited:"<<p.getEdge(j)<<endl;
            		visited++;
            		q.push(node[p.getEdge(j)]);
            	}
            	
            	j++;
            }      	
			
			
			if(q.empty())	
			{
				j=0;
				
				while(j<n)
				{
					//cout<<"Inside filing queue"<<endl;
					if(node[j].getVisited())
					{
						q.push(node[j]);
						node[j].setVisited();
						break;
					}
					j++;
				}		
			}
      		
      	}
      	
      	
      	
      	if(visited==n)
      	{
      		cout<<"YES"<<endl;
      	}
      	
      } 
      
      
      T--;   
    }
	
}
