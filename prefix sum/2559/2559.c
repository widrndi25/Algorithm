#include <stdio.h>

int numbers[100010];
int sum[100010];

int main()
{
    int N, K, max_value;

    scanf("%d %d", &N, &K);

    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &numbers[i]);
        sum[i] = sum[i - 1] + numbers[i];
    }

    max_value = -99999;

    for (int i = K; i <= N; i++)
    {
        if (max_value <= sum[i] - sum[i - K])
            max_value = sum[i] - sum[i - K];
    }

    printf("%d", max_value);

    return 0;
}