#include<stdio.h>
#include<conio.h>
int main()
{
    int i,a;
    printf("Enter the integer\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        printf("%d ",i*i*i);
    }
    getch();
    return 0;
}
