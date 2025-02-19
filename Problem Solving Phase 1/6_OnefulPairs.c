#include <stdio.h>
#include <stdbool.h>
bool isOnefulPair(int a,int b)
{
    int res=a+b+(a*b);
    if(res==111)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if(isOnefulPair(a,b))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
