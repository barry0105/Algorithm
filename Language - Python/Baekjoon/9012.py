def isTrue(text):
    inner = []
    for i in range(len(text)):
        if text[i] == '(':
            inner.append('(')
        elif text[i] == ')':
            if len(inner) == 0:
                return 'NO'
            inner.pop()
    if len(inner) == 0:
        return 'YES'
    return 'NO'
    

n = int(input())
for i in range(n):
    print(isTrue(input()))