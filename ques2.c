#include<stdio.h>
#include<conio.h>
int main()
{
    int i,a;
    printf("Enter an integer\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        printf("%d ",i);
    }
    getch();
    return 0;
}
