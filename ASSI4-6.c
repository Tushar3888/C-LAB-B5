#include <stdio.h>
int main()
{
    int m1,m2,m3;
    float avg;
    printf("Enter marks of three subjects: ");
    scanf("%d %d %d",&m1,&m2,&m3);
    avg=(m1+m2+m3)/3.0;
    if(m1>40 && m2>40 && m3>40)
    {
        printf("student has passed in all subjects.\n");
    }
    if(m1>=40 && m2>=40 && m3>=40)
    {
        printf("student has passed in all subjects.\n");
    
    if(avg>=75)
    {
        printf("student has passed with distinction.\n");
    }
    else
    {
        printf("student has not passed with distinction.\n");
    }
}
else
{
    printf("student has failed in one or more subjects.\n");
}
printf("Average marks: %.2f\n",avg);
return 0;

    }
