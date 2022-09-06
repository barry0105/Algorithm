def solution(priorities, location):
    answer = 0
    max_pro = max(priorities)
    while True:
        p_pro = priorities.pop(0)
        if max_pro == p_pro:
            answer += 1
            if location == 0:
                break
            else:
                location -= 1
            max_pro = max(priorities)
        else:
            priorities.append(p_pro)
            if location == 0:
                location = len(priorities) - 1
            else:
                location -= 1
    return answer
