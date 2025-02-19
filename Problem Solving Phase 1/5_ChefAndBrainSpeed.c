#include<stdio.h>
#include<stdbool.h>   
bool prone_to_error(int threshold,int currentRate)
{
    return(threshold<currentRate);
}
int main() 
{
    int threshold, currentRate;
    scanf("%d %d", &threshold, &currentRate);
    if(prone_to_error(threshold,currentRate))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
