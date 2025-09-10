import sys
input = sys.stdin.readline

N, M = map(int, input().split())

# 이중 리스트 생성
A = [[0] * (N + 1) for _ in range(N + 1)]
D = [[0] * (N + 1) for _ in range(N + 1)]

# 배열 및 합 배열 값 넣기
for i in range(1, N+1):
  row = list(map(int, input().split()))
  for j in range(1, N+1):
    A[i][j] = row[j - 1]
    D[i][j] = D[i][j-1] + D[i-1][j] - D[i-1][j-1] + A[i][j]

# case 만큼 반복
for _ in range(M):
  x1, y1, x2, y2 = map(int, input().split())
  result = D[x2][y2] - D[x1-1][y2] - D[x2][y1-1] + D[x1-1][y1-1]
  print(result)

