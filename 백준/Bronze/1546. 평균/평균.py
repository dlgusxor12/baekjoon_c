N = int(input())
num_list = list(map(float, input().split()))
max_num = max(num_list)

for i, val in enumerate(num_list):
  num_list[i] = val / max_num * 100

print(sum(num_list)/len(num_list))