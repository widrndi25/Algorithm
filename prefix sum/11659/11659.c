#include <stdio.h>

int numbers[100001];
long long sum[100001];

int main(void)
{
    int N, M, a, b;
    long long result;

    scanf("%d %d", &N, &M);

    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &numbers[i]);
        sum[i] = numbers[i] + sum[i - 1];
    }

    for (int i = 0; i < M; i++)
    {
        scanf("%d %d", &a, &b);
        result = sum[b] - sum[a - 1];
        printf("%lld\n", result);
    }

    return 0;
}