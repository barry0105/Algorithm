n, m = map(int, input().split(' ')) 
plus = m-1
num = 0
list_num = [i for i in range(1, n+1)]
answer = []
for i in range(len(list_num)):
    num += plus
    if num >= len(list_num):
        num = num%len(list_num)

    answer.append(str(list_num.pop(num)))
print('<'+', '.join(answer)+'>')
