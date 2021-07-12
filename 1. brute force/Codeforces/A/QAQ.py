# your code goes here
# https://codeforces.com/problemset/problem/894/A

s = input()


l = len(s)
ans = 0

for i in range(l - 3 + 1):
    for j in range(i + 1, l - 2 + 1):
        for k in range(j + 1, l - 1 + 1):
            if s[i] == "Q" and s[j] == "A" and s[k] == "Q":
                ans += 1

print(ans)
