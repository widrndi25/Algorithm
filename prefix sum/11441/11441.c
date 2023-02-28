#include <stdio.h>

int N, M, a, b, result;
int numbers[100010];
int sum[100010];

int main()
{
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &numbers[i]);
        sum[i] = sum[i - 1] + numbers[i];
    }

    scanf("%d", &M);

    for (int i = 1; i <= M; i++)
    {
        scanf("%d %d", &a, &b);
        result = sum[b] - sum[a - 1];
        printf("%d\n", result);
    }

    return 0;
}