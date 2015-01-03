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


class Node
{
  
   public:
   
	   int data;
	   Node *next;
	   Node *prev;


   private:	        	 
      
};



int main()
{

int T;
int i,j;
cin>>T;
while(T--)
{
   int n;
   Node *head=NULL;
   
   cin>>n;
   int a[n];
   for(i=0;i<n;i++)
   {
      
      if(head==NULL)
      {
          head= new Node();
          head->data=i;
          head->next=head;
          head->prev=head;
      }
      
      else
      {
         Node *last=head->prev;
         Node *newNode= new Node();
         newNode->data=i;
         newNode->next=head;
         newNode->prev=head->prev;
         head->prev=newNode;
         last->next=newNode;
      }
   }   
   
   
 Node *temp=head;
  
  /*for(i=0;i<=2*n;i++)
  {
     cout<<temp->data<<" ";
     temp=temp->next;
  }  
   */
  
  

   temp=head;
   int mov=0;
   int val=1;
   while(temp->next!=temp)
   {
       //cout<<"\ntemp->data="<<temp->data;
       
       
       //int input;
      // cin>>input;
       //mov=mov+val;
	   //mov=mov%n; 
	   i=val%n;
	   while(i--)
	   {
	        temp=temp->next;
	        //i++;//cout<<"\nhere1\n";
	   }
	   
	   Node *before=temp->prev;
	   //cout<<"\nhere2\n";
	   before->next=temp->next;
	   	   
	   temp->next->prev=before;
	   

	   a[temp->data]=val;
	   //cout<<"\n val and temp->data are:"<<val<<" "<<temp->data<<endl;
	   //cout<<temp->data;
	   temp=before->next;
	   
	   val++;
	     
	   
	   
   } 
   
   
   a[temp->data]=val;
   
   
   
   for(i=0;i<n;i++)       
   {
      cout<<a[i]<<" ";
   }
   cout<<"\n";
}

}
