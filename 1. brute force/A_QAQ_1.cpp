// https://codeforces.com/problemset/problem/894/A

#include <iostream>

using namespace std;

int main()
{

    string s;
    cin >> s;
    int l = s.length();
    int ans = 0;

    for (int i = 0; i < l - 1; ++i)
    {

        if (s[i] != 'A')
            continue;

        int Q_bf = 0, Q_af = 0;

        for (int j = 0; j < i; ++j)

            if (s[j] == 'Q')
                Q_bf += 1;

        for (int k = i + 1; k < l; ++k)
            if (s[k] == 'Q')
                Q_af += 1;

        ans += Q_bf * Q_af;
    }

    cout << ans << endl;

    return 0;
}