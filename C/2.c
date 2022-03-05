#include <stdio.h>

void calculate(int,int,int,float*,float*);
int main()
{
    int m1,m2,m3;
    float avg,per;
    printf("Enter the marks of subject 1: ");
    scanf("%d",&m1);
    printf("Enter the marks of subject 2: ");
    scanf("%d",&m2);
    printf("Enter the marks of subject 3: ");
    scanf("%d",&m3);

    calculate(m1,m2,m3,&avg,&per);
    printf("Average is: %.2f\n",avg);
    printf("Percentage is: %.2f%%",per);
    return 0;
}

void calculate(int a,int b,int c,float *avg,float *per)
{
   *avg = (a+b+c)/3;
   *per = ((a+b+c)/300.0)*100;
}


