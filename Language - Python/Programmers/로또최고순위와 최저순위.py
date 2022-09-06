def solution(lottos, win_nums):
    answer = [0,0]
    for num in lottos:
        if num in win_nums:
            answer[0] += 1
        elif num == 0:
            answer[1] += 1
    answer[1] = 7 - (answer[1] + answer[0])
    answer[0] = 7 - answer[0]
    if answer[0] == 7:
        answer[1] = 6
    elif answer[1] == 7:
        answer[0] = 6
    return answer[::-1]
