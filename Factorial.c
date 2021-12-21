#include <stdio.h>

int main()
{
    int i;
    int factorial = 1;
    int n;
    printf("Enter number which factorial you want:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        factorial = factorial*i;
    }
    printf("%d has factorial of = %d",n,factorial);

    return 0;
}
