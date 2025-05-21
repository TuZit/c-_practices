#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int A[N][N];
    for (int i = 0; i < N * N; i++)
        cin >> A[i / N][i % N];
    int M;
    cin >> M;
    int B[M][M];
    for (int i = 0; i < M * M; i++)
        cin >> B[i / M][i % M];

    int step = N / M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            int x = (i / step) * step;
            int y = (j / step) * step;
            cout << A[i][j] * B[i - x][j - y] << " ";
        }
        cout << endl;
    }
    return 0;
}
