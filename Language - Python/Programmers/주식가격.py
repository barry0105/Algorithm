def solution(prices):
    answer = []
    for i in range(len(prices)):
        time = 0
        for j in range(i, len(prices)-1):
            if prices[i] > prices[j]:
                break
            else:
                time += 1
        answer.append(time) 
    return answer
