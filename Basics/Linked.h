#ifndef Linked_H
#define Linked_H

#include "Node.h"
#include <iostream>

using namespace std;

template <class T>
class Linked 
{
  
   public:
   Node<T> *head;
   
       Linked( )
	   {
	      head = NULL; 
	   }   

      void insertStart(T newData)
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
      
      void deleteStart()
      {
         if(head)
		 {
		     Node<T> *temp= head;
		     head=head->next;
		     delete temp;
		 } 
      }
      
      void printList()
      {
        Node<T> *temp = head;
        cout<<"\nThe  is:";
        
		while(temp!=NULL)
        {
         
           cout<<temp->data<<" ";
           temp=temp->next;
        }
      }
      
      Linked<T> reverseList()
      {
      
           if(head)
           {
                  Linked<T> newHead;
                  
                  Node<T> *temp = head;
                  
                  while(temp)
                  {
                      newHead.insertStart(temp->data);
                      temp=temp->next;
                  }
                  
                  return newHead;
           }
           
           //return new Linked<T>;
           
           
      }
   private:	    
 
      
};

#endif
