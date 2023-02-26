#include <stdio.h>

int numbers[1050][1050];
long long sum[1050][1050];

int main()
{
    int N, M, x1, y1, x2, y2;
    long long result;

    scanf("%d %d", &N, &M);

    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= N; j++)
            scanf("%d", &numbers[i][j]);

    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= N; j++)
            sum[i][j] = numbers[i][j] + sum[i - 1][j];

    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= N; j++)
            sum[i][j] += sum[i][j - 1];

    for (int i = 0; i < M; i++)
    {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        result = sum[x2][y2] - sum[x1 - 1][y2] - sum[x2][y1 - 1] + sum[x1 - 1][y1 - 1];
        printf("%lld\n", result);
    }

    return 0;
}