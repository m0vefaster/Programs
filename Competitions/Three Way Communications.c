#include<stdio.h>
#include<math.h>
float findDist(float,float,float,float) ;

main()
{
      
      int i,T,r,cx,cy,hx,hy,sx,sy;
      float dch,dhs,dcs ;
      scanf("%d",&T);

      
    for(i=0;i<T;i++)
    {
       scanf("%d",&r);
       
       scanf("%d",&cx);
       scanf("%d",&cy);
       
       scanf("%d",&hx);
       scanf("%d",&hy);
       
       scanf("%d",&sx);
       scanf("%d",&sy);

       dch = findDist(cx,cy,hx,hy);
       dhs = findDist(hx,hy,sx,sy);
       dcs = findDist(cx,cy,sx,sy);
       
       //printf("\nThe distances are %f %f %f",dch,dhs,dcs);
       
       if((dch <= (float)r &&  dcs <=(float)r) || (dch <=(float)r && dhs <=(float)r) || (dcs<=(float)r && dhs <=(float)r)) 
       {
       	   printf("yes\n");
       }
       else
       {
       	printf("no\n");
       }
       
    }
    
    return 0;


}

float findDist(float x1,float y1,float x2,float y2)
{
	float dist= (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
	return pow(dist,.5);
}
