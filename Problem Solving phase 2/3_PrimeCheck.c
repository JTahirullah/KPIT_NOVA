#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    int i = 2;
    while (i * i <= n)
    {
        if (n % i == 0) 
        {
            return false;
        }
        i++;
    }
    return true;
}

int main() 
{
    int n;
    scanf("%d", &n);
    if (is_prime(n))
    {
        printf("YES\n");
    } 
    else 
    {
        printf("NO\n");
    }
    return 0;
}
