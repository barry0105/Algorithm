def isPrime(num):
    if num == 1:
        return False
    else:
        for i in range(2, int(num**0.5)+1): #'에라토스테네스의 체' 를 사용한 문제
            if num % i == 0:
                return False
        return True

m, n = map(int, input().split())

for i in range(m, n+1):
    cnt = 0
    if isPrime(i):
        print(i)
