#include <stdio.h>
#include<math.h>
int main()
{
printf("Input length, width and height of the cuboid:");
float l,w,h,s,v;
scanf("%f %f %f",&l,&w,&h);
s=(l*w+w*h+l*h)*2;
v=l*w*h;
printf("Surface area of the cuboid is: %.2f\n",s);
printf("Volume of the cuboid is:%.2f\n",v);
return 0;

}

