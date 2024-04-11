# B - MissingNo from GAMEFREAK Programming Contest 2023 (AtCoder Beginner [Contest 317](https://atcoder.jp/contests/abc317))

N = int(input())
A = list(map(int, input().split()))
A.sort()

for i in range(N):
  if (i < N-1):
    if A[i+1] != A[i] + 1:
      print(A[i] + 1)
      break
