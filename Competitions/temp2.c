#include<stdio.h>
 
int main()
{
  int t,p,i,j;
  //int vals[12] = {1,2,4,8,16,32,64,128,256,512,1024,2048};
  int val;
  scanf("%d",&t);
  while(t--)
  {
    scanf("%d",&p);
    j=0;
    val=2048;
    for(i=11;i>=0;i--)
    {
      j +=p/val;
      p = p%val;
      val = val/2;
    }
    printf("%d\n",j);
  }
  return 0;
} 
