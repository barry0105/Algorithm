def dfs(graph, v, visited):
    global cnt
    visited[v] = True
    for i in graph[v]:
        if not visited[i]:
            visited[i] = True
            cnt += 1
            dfs(graph,i,visited)
cnt = 0
n = int(input())
m = int(input())
graph = [[] for _ in range(n+1)]
for i in range(m):
    a, b = map(int,input().split(' '))
    graph[a].append(b)
    graph[b].append(a)

visited = [False]*(n+1)
dfs(graph,1,visited)
print(cnt)
