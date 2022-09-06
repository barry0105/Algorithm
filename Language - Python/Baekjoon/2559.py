import sys
n, m = map(int,sys.stdin.readline().split())
array = list(map(int,sys.stdin.readline().split()))
result = []
for i in range(0, n-m+1):
    result.append(sum(array[i:i+m]))
print(max(result))
#시간 초과