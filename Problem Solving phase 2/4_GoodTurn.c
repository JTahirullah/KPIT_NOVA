#include <stdio.h>
#include <stdbool.h>
bool isGoodTurn(int x,int y)
{
    int sum=x+y;
    if(sum<=6)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
}
int main() {
    int t;
    scanf("%d", &t);
    while (t--) 
    {
        int x, y;
        scanf("%d %d", &x, &y);
        isGoodTurn(x,y);
    }
}
