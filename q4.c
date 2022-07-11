#include<stdio.h>
int main()
{
int R;
float A;
printf("Enter radius of circle");
scanf("%d",&R);
A=3.14*R*R;
printf("\"Area of circle is %0.2f having the radius %d\"",A,R);

    return 0;
}