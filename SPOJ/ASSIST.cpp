#include<iostream>
#include<vector>

using namespace std;


int main()
{


  vector<int> v;
  int o[3200];
  
  int i,j,k,s=1;
  
  v.push_back(-1);
  o[0]=-1;
  
  for(i=2;i<39900;i++)
    v.push_back(i);
  
   

   while(1)
   {
     int c;
     cin>>c;
    
	 if(c==0) break;
	   
	  
	 while(s<=c)
	 {
	   
       i=1;
        
       k=v.at(1);
       o[s]=k;
       s++;

      while(i<=(v.size()-1))
       {
        //cout<<"\n Removing :"<<v.at(i)<<endl;
        v.erase(v.begin()+i);
        i=i+k-1;
       }
    }
      
      cout<<o[c]<<endl;
    
   }
   
      /*j=1;
	  
	  cout<<"\n\n";
	  
	  while(j<v.size()) 
	  {
	     cout<<v.at(j)<<" ";
	     j++;
	  } */
  
  
  //for(i=0;i<o.size();i++)cout<<o.at(i)<<" ";
   
  //cout<<"\n"<<o.size()<<endl;  
  



}
