#include <stdio.h>
#include <math.h> 

float averstdev(float arr[], float* a, float* stddev)
{
    float sum1 = 0;
    float sum2 = 0;
    float Variance;
    int i;

    for (i = 0; i < 5; i++)
    {
        sum1 += arr[i];
    }
    *a = sum1 / 5;

    for (i = 0; i < 5; i++)
    {
        sum2 += (arr[i] - *a) * (arr[i] - *a);
    }
    Variance = sum2 / 5;
    *stddev = sqrt(Variance);
}

int main()
{
    float arr[5];
    int i;
    float a, p_a, p_stddev;

    printf("Enter 5 real numbers: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%f", &arr[i]);
    }

    averstdev(arr, &p_a, &p_stddev);
    printf("Standard Deviation = %.3lf", p_stddev);
    return 0;
}
