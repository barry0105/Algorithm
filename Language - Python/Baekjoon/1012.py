import sys
sys.setrecursionlimit(10000)
def dfs(x, y):
    dx = [0,0,-1,1]
    dy = [-1,1,0,0]
    for i in range(4):
        nx = x + dx[i]
        ny = y + dy[i]
        if 0<= nx < m and 0 <= ny < n and graph[ny][nx] == 1:
            graph[ny][nx] = -1
            dfs(nx,ny)


for _ in range(int(input())):
    m, n, k = map(int, input().split())
    graph = [[0]*m for _ in range(n)]
    count = 0
    for _ in range(k):
        x, y = map(int, input().split())
        graph[y][x] = 1
    

    for i in range(m):
        for j in range(n):  
            if graph[j][i] == 1:
                dfs(i,j) 
                count += 1

    print(count)