#ifndef Stacks_H
#define Stacks_H

#include "Node.h"
#include <iostream>

using namespace std;

template <class T>
class Stacks
{
  
   public:
   Node<T> *head;
   
       Stacks( )
	   {
	      head = NULL; 
	   }   

      void push(T newData)
      { 
         Node<T> *newNode= new Node<T>();
         newNode->data=newData;
		 
		 
         if(head==NULL)
         {
            head = newNode; 
         }
         else
         {
            newNode->next= head;
            head=newNode;
         }
         

      }
      
      void pop()
      {
         if(head)
		 {
		     Node<T> *temp= head;
		     head=head->next;
		     delete temp;
		 } 
      }
      
      void printStack()
      {
        Node<T> *temp = head;
        cout<<"\nThe  is:";
        
		while(temp!=NULL)
        {
         
           cout<<temp->data<<" ";
           temp=temp->next;
        }
      }

   private:	    
 
      
};

#endif
