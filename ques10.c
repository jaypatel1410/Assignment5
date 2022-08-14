#include<stdio.h>
#include<conio.h>
int main()
{
    int i,a;
    printf("Enter the integer\n");
    scanf("%d",&a);
    printf("Table of %d is given below\n",a);
    for(i=1;i<=12;i++)
    {
        printf("%d*%d=%d\n",a,i,a*i);
    }
    getch();
    return 0;
}
