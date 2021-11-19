#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    int m;
    float a;
    float b;
    int sum1,sum2;
    float sum3,sum4;
    scanf("%d %d\n",&n , &m);
    scanf("%f %f", &a, &b);
    sum1 = n+m;
    sum2 = n-m;
    sum3 = a+b;
    sum4 = a-b;
    printf("%d %d\n",sum1,sum2);
    printf("%.1f %.1f",sum3,sum4);
	
    
    return 0;
}
