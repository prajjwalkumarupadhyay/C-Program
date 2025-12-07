/*Find the area of a Traingle , given its sides*/
#include<stdio.h>
#include<math.h>
int main(void)
{float a,b,c,sp,area;
    printf("\nEnter the sides of Traingle\n");
    scanf("%f%f%f",&a,&b,&c);
    sp=(a+b+c)/2;
    area=sqrt(sp*(sp-a)*(sp-b)*(sp-c));
    printf("Area of Traingle=%f\n",area);
    return 0;
}
