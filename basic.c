#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter one numbers: ");
    scanf("%d",&x);
    y=++x;
    printf("the increment number %d",y);

    return 0;
}