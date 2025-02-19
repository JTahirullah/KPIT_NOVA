#include <stdio.h>
int reverseInt(int x)
{
    int remainder,reversedNum=0;
    while (x!=0)
    {
        remainder=x%10;
        reversedNum=reversedNum*10+remainder;
        x/=10;
    }
    printf("%d",reversedNum);
}
int main() 
{
    int num;
    scanf("%d",&num);
    reverseInt(num);
}

