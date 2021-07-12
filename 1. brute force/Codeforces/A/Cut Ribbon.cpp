// My profile:
    // https://codeforces.com/profile/pain_98

// Problem link
    // https://codeforces.com/problemset/problem/189/A

#include <iostream>

using namespace std;

int main()
{

    int n, a, b, c;

    cin >> n >> a >> b >> c;

    int ans = 0;

    for (int i = 0; i <= n; ++i)
    {
        for (int j = 0; j <= n; ++j)
        {

            int rem = n - (i * a + j * b);

            if (rem >= 0 && rem % c == 0)
            {
                int k = rem / c;
                if (i * a + j * b + k * c == n)
                {
                    ans = max(i + j + k, ans);
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}