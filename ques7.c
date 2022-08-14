#include<stdio.h>
#include<conio.h>
int main()
{
    int i,a;
    printf("Enter the integer\n");
    scanf("%d",&a);
    for(i=a;i>=1;i--)
    {
        printf("%d ",2*i);
    }
    getch();
    return 0;
}
