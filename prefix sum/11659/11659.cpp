#include <iostream>

using namespace std;

int numbers[100001];
long long sum[100001];

int main()
{
    int N, M, a, b;
    long long result;

    cin >> N >> M;

    for (int i = 1; i <= N; i++)
    {
        cin >> numbers[i];
        sum[i] = numbers[i] + sum[i - 1];
    }

    for (int i = 0; i < M; i++)
    {
        cin >> a >> b;
        result = sum[b] - sum[a - 1];
        cout << result << endl;
    }
}