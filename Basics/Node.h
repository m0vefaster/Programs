#ifndef Node_H
#define Node_H

#include <iostream>
#include <cstdlib>
using namespace std;

template <class T>
class Node
{
  
   public:
   
	   T data;
	   Node<T> *next;
	   
      
      Node* getNext( )
      {
         return this->next;
      }
      
   private:	        	 
      
};

#endif
