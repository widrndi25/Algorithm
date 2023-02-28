#include <stdio.h>
#include <stdlib.h>

int numbers[10];
int sum[10];

int main()
{
    int close_value;

    for (int i = 1; i <= 10; i++)
    {
        scanf("%d", &numbers[i]);
        sum[i] = sum[i - 1] + numbers[i];
    }

    for (int i = 1; i <= 10; i++)
    {
        if (sum[i] >= 100)
        {
            if (abs(sum[i] - 100) > abs(sum[i - 1] - 100))
            {
                close_value = sum[i - 1];
                break;
            }
            close_value = sum[i];
            break;
        }
    }

    printf("%d", close_value);

    return 0;
}