#include<stdio.h>
#include<conio.h>
int main()
{
    int i,a;
    printf("Enter the integer\n");
    scanf("%d",&a);
    for(i=a;i>=1;i--)
    {
        printf("%d ",i);
    }
    getch();
    return 0;
}
