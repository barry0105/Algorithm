def solution(absolutes, signs):
    answer = 0
    for i in range(len(absolutes)):
        if signs[i] == True:
            pass
        else:
            absolutes[i] = absolutes[i] * -1
        answer += absolutes[i]
    
    return answer
