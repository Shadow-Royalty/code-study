//#include<stdio.h>
//#include<math.h>
//
////int main()
////{int r;
////double PI=3.1415926;
////scanf("%d",&r);
////double v=(4/3)*PI*r*r*r;
////printf("%.2f\n",v);
////	
////	
////	
////	return 0;
////}

#include <stdio.h>
#include<math.h>
#define PI 3.1415926

#include <stdio.h>
#define pi 3.1415926
int main()
{
    double r;
    scanf("%lf",&r);
    printf("%.2lf\n",4.0/3*pi*r*r*r);//记住加小数点吧，精度要求高就double  
    return 0;
}

