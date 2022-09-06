from collections import deque
import sys
result = -sys.maxsize
dx = [-1,1,0,0]
dy = [0,0,-1,1]
def bfs(x, y):
    cnt = 1
    queue = deque([(x, y)])
    visited[x][y] = True
    while queue:
        x, y = queue.popleft()
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if 0 <= nx < n and 0<= ny < m:
                if graph[nx][ny] == 1 and not visited[nx][ny]:
                    visited[nx][ny] = True
                    queue.append((nx, ny))
                    cnt += 1
    return cnt

cnt = 0
n, m, k = map(int,input().split())
graph = [[0]*m for _ in range(n)]
visited = [[False]*m for _ in range(n)]

for _ in range(k):
    a, b = map(int,input().split())
    graph[a-1][b-1] = 1
    

for i in range(n):
    for j in range(m):
        if graph[i][j] == 1 and not visited[i][j]:
            result = max(result, bfs(i, j))

print(result)