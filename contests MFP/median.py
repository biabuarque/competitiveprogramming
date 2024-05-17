import math as m

t = int(input())
for i in range (t):
    n = int(input())
    cont = 0
    v = list(map(int, input().split()))
    v.sort()
    if (n % 2 == 0):
        med = n // 2 - 1
    
    else:
        med = n // 2
    
    for j in range(med, n):
        if (v[j] > v[med]):
            break
        cont += 1
    print(cont)
