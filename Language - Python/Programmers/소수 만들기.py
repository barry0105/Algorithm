from itertools import combinations
import math

def isPrime(num):
    for i in range(2, int(math.sqrt(num))+1):
        if num % i == 0:
            return False
    return True
def solution(nums):
    answer = 0
    arr = list(combinations(nums, 3))
    
    for i in arr:
        if isPrime(sum(i)):
            answer += 1
    return answer
