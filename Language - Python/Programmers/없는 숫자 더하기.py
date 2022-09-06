def solution(numbers):
    sum = 0
    numbers.sort()
    for i in range(0, 10):
        if i not in numbers:
            sum += i
    return sum
