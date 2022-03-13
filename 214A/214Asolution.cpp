#include <iostream>

using namespace std;

int main()
{
    int n, m;
    int answer=0;
    cin >> n >> m;

    for (int a = 0; a * a <= n && a <= m; a++)
    {
        int b = n - a * a;
        if (a + b * b == m)
        answer++;
    }

    cout << answer << endl;
    return 0;
}