#include <stdio.h>

int N, S;
int numbers[100010];

int main()
{
    scanf("%d %d", &N, &S);

    for (int i = 0; i < N; i++)
        scanf("%d", &numbers[i]);

    int start = 0, end = 0, sum = numbers[0], minLength = 987654321;

    while (start <= end)
    {
        if (sum >= S)
        {
            minLength = end - start + 1;
            sum -= numbers[start++];
        }
        else if (end == N)
            break;
        else
            sum += numbers[end++];
    }

    if (minLength == 987654321)
        printf("0");
    else
        printf("%d", minLength);

    return 0;
}