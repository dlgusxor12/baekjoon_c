import sys
input = sys.stdin.readline

N, M = list(map(int, input().split()))
arr = list(map(int, input().split()))
s_arr = []

# 구간 합 배열 만들기
for i in range(N):
  if i == 0:
    s_arr.append(arr[i])
  else:
    s_arr.append(s_arr[i-1] + arr[i])

# 구간 합 구하기
for _ in range(M):
  a, b = map(int, input().split())
  if a == 1:
    print(s_arr[b-1])
  else:
    print(s_arr[b-1] - s_arr[a-2])