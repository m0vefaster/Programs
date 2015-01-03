#ifndef LinkedList_H
#define LinkedList_H

#include "Node.h"
#include <iostream>

using namespace std;

template <class T>
class LinkedList 
{
  
   public:
   Node<T> *head;
   
       LinkedList(T newData)
	   {
	      head = new Node<T>();
	      head->data = newData;
	      head->next =  NULL;
	   }   

      void insertStart(T newData)
      { 
         Node<T> *newNode= new Node<T>();
         newNode->data=newData;
		 newNode->next=  head ;
		 head = newNode;
		 cout<<"head is :"<<head->data;
      }
      
      void deleteStart()
      {
         if(head)
		 {
		     head=head->next;
		 } 
      }
      
      void printList()
      {
        Node<T> *temp = head;
        cout<<"\nThe list is:";
        
		while(temp!=NULL)
        {
         
           cout<<temp->data<<" ";
           temp=temp->next;
        }
      }
      
      LinkedList<T> reverseList()
      {
      
           if(head)
           {
                  LinkedList<T> newHead(head->data);
                  
                  Node<T> *temp = head;
                  
                  while(temp->next)
                  {
                      newHead.insertStart(temp->next->data);
                      temp=temp->next;
                  }
                  
                  return newHead;
           }
           
           //return new LinkedList<T>;
           
           
      }
   private:	    
 
      
};

#endif
