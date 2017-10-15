#include <stdio.h>
 int add(int x,int y);



int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    add(a,b);
    return 0;
}
void add(int x,int y)
{
    int c;
    c=x+y;
    printf("%d",c);
}
