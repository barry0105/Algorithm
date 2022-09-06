def solution(participant, completion):
    hashdict = {}
    sumHash = 0
    for part in participant:
        hashdict[hash(part)] = part
        sumHash += hash(part)
    for com in completion:
        sumHash -= hash(com)
    return hashdict[sumHash]
