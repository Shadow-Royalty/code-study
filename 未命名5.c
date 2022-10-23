#include<stdio.h>
#include<math.h>
int main()
{double z,x,y,a;
scanf("%lf %lf",&x,&y);//取地址别忘了！ 
z=(x*x+2*y*y);
a=sqrt(z);
printf("%.2lf",a);
	
	return 0;
}
