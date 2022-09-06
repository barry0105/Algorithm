from collections import deque

maxNum = 0
n = int(input())
list_num = []

for i in range(n):
    list_num.append(list(map(int,input().split())))
    for j in range(n):
        if list_num[i][j] > maxNum:
            maxNum = list_num[i][j] 
visited = [[0]*n]*n
dx = [0,0,1,-1]
dy = [1,-1,0,0]
def bfs(graph,x,y, value,visited):
    queue = deque()
    queue.append((x,y))
    
    visited[x][y] = 1
    while queue:
        x, y = queue.popleft()
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if n > nx >= 0 and n > ny >= 0:
                if graph[nx][ny] > value and visited[nx][ny] == 0:
                    visited[nx][ny] = 1
                    queue.append((nx, ny))

result = 0
for i in range(maxNum):      
    visited = [[0]*n for _ in range(n)]
    cnt = 0
    
    for j in range(n):
        for k in range(n):
            if list_num[j][k] > i and visited[j][k] == 0: 
                bfs(list_num, j, k,i, visited)
                cnt += 1
        
    if result < cnt:
        result = cnt
    

print(result)
