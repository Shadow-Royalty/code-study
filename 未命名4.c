#include<stdio.h>
#include<math.h>
int main()
{double x,y,z,sum,b;
scanf("%lf",&x);
scanf("%lf",&b);
y= fabs(x);
z=sqrt(y);//记住是这么用的 
sum = z+b;
printf("%.2lf",sum);//类型一改，万事大吉 
	
	
	return 0;
}
