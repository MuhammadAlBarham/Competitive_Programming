// https://codeforces.com/problemset/problem/894/A

#include <iostream>

using namespace std;

int main()
{

    string s;

    cin >> s;

    int l = s.length();

    int ans = 0;
    string check = "QAQ";

    for (int i = 0; i <= l - 3; ++i)
    {
        for (int j = i + 1; j <= l - 2; ++j)
        {
            for (int k = j + 1; k <= l - 1; ++k)
            {

                if (s[i] == check[0] && s[j] == check[1] && s[k] == check[2])
                    ans += 1;
            }
        }
    }

    cout << ans << endl;

    return 0;
}