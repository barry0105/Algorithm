n = int(input())
text = []
output = []
for i in range(n):
    text.append(input()[::-1].split(' ')[::-1])

for j in text:
    print(' '.join(j))