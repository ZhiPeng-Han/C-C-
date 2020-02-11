#include<stdio.h>
int main()
{
    int a, b, c, t = 0;
    scanf("%d%d", &a, &b);
    c = a*b;
    for(int i = 0; i < 6; i++)
    {
        t = t * 10 + c % 10;
        c = c / 10;
        if(c == 0) break;
    }
    printf("%d\n",t);
    return 0;
}