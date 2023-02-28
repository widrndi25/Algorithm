#include <stdio.h>
#define MIN(x, y) x < y ? x : y

int numbers[100010];

int main()
{
    int N, S;
    scanf("%d %d", &N, &S);

    for (int i = 0; i < N; i++)
        scanf("%d", &numbers[i]);

    int start = 0, end = 0, sum = numbers[0], length = N + 1;

    while (start <= end && end < N)
    {
        if (sum < S)
        {
            sum += numbers[++end];
        }
        else
        {
            length = MIN(length, end - start + 1);
            sum -= numbers[start++];
        }
    }

    if (length == N + 1)
        printf("0\n");
    else
        printf("%d\n", length);

    return 0;
}