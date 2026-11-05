#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, i;
    float *p, mean = 0, sum = 0;
    float variance = 0, std;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    p = (float *)malloc(n * sizeof(float));

    printf("Enter the elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%f", p + i);
        sum = sum + *(p + i);
    }

    mean = sum / n;

    for(i = 0; i < n; i++)
    {
        variance = variance + pow(*(p + i) - mean, 2);
    }

    variance = variance / n;

    std = sqrt(variance);

    printf("\nMean = %.2f", mean);
    printf("\nVariance = %.2f", variance);
    printf("\nStandard Deviation = %.2f", std);

    free(p);

    return 0;
}
