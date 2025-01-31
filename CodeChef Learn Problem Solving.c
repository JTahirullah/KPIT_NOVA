#include <stdio.h>
int num_of_courses(int);
int main() 
{
    int N;
    scanf("%d",&N);
    printf("%d",num_of_courses(N));
}
int num_of_courses(int x)
{
    return x*2;
}


