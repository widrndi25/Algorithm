#include <stdio.h>

int numbers[310][310];
int sum[310][310];
long long result;

int main()
{
    int N, M, K;
    int x1, x2, y1, y2;

    scanf("%d %d", &N, &M);

    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= M; j++)
            scanf("%d", &numbers[i][j]);

    for (int i = 1; i <= N; i++)
        for (int j = 0; j <= M; j++)
            sum[i][j] = numbers[i][j] + sum[i - 1][j];

    for (int i = 1; i <= N; i++)
        for (int j = 0; j <= M; j++)
            sum[i][j] += sum[i][j - 1];

    scanf("%d", &K);

    for (int i = 0; i < K; i++)
    {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        result = sum[x2][y2] - sum[x2][y1 - 1] - sum[x1 - 1][y2] + sum[x1 - 1][y1 - 1];
        printf("%lld\n", result);
    }
}