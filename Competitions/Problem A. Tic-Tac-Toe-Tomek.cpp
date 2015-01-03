#include<iostream>
#include<stdio.h>
#include <algorithm>
#include<math.h>
#include<string.h>
#include<vector>
#include<map>
#include <utility>
#include <time.h> 
#include <fstream>
using namespace std;




int main()
{

int T;
int i,j;
int m[4][4];
string s;
int sumc[4],sumr[4];
int sumd1,sumd2;
bool incomplete;
bool found ;
ifstream infile;
ofstream outfile;
infile.open ("A-large-practice.in");
outfile.open("A-large-practice.out");
   //fp1 = fopen ("A-small-practice.in", "r+");
   //fp2 = fopen ("A-small-practice.out", "w+");
   
//cin>>T;
infile>>T;
int k=1;
while(k<=T )
{
    for(i=0;i<4;i++)
    {
         sumc[i]=sumr[i]=0;
    }
    
    sumd1=sumd2=0;
    incomplete=false;
	found=false;
    
	for(i=0;i<4;i++)
    { 
	  //cin>>s;
	  //fscanf(fp1, "%s", s);
	  infile>>s;
	  //outfile<<"\nScanned:"<<s;
      for(j=0;j<4;j++)
      {

          
          m[i][j]=s.at(j);
          
          if( m[i][j]==46)
          { 
            incomplete= true;
            //outfile<<"\nincomplete for i & j"<<i<<" "<<j;
          }

		  sumr[i]+=m[i][j];      
          sumc[j]+=m[i][j];
          
          if(i==j)
          {
             sumd1+=m[i][j];
          }
          
          if( i + j == 3)
          {
            sumd2+=m[i][j];
          }
      }
    }
    outfile<<"Case #"<<k<<": ";
   // cout<<"\n\ndiagonal sums are "<<sumd1<<" "<<sumd2<<endl; 
    if(sumd1 == 352 || sumd1 == 348  || sumd2==352 || sumd2== 348 )
    {
        outfile<<"X won";// through diagonal";
    }
    else 
    {
        if ( sumd1 == 316 || sumd1 == 321 || sumd2==316 || sumd2== 321 )
        {
           outfile<<"O won";// through diagonal" ;
        }
        
        else
        {
            for(i=0;i<4;i++)
		    {
		       if( sumr[i]==352 || sumr[i]== 348 || sumc[i]==352 || sumc[i]==348 )
		       {
		          outfile<<"X won";// through row/col";
		           found = true;
		           break;
		       }
		       
		       else if( sumr[i]==316 || sumr[i]== 321 || sumc[i]==316 || sumc[i]==321)
		       {
		          outfile<<"O won";// through row/col";
		          found= true;
		          break;
		          
		       }
		       
		    }
		    
		    if( !found && incomplete )
		    {
		         outfile<<"Game has not completed";
		    }
		    
		    else if( !found  )
		    {
		        outfile<<"Draw";
		    }
		    
		    //outfile<<incomplete;
		    
        }
    }
 //infile>>s; 
 k++;
 outfile<<"\n";
}


}
