n, x = tuple(map(int, input().split()))
v = list(int(int, input().split()))
c = v.copy()
v.sort()
i = 0
j = n - 1
while (i < j):
    if (v[i] + v[j] < x):
        i += 1
    elif (v[i] + v[j] > x):
        j -= 1
    elif (v[i] + v[j] == x):
        break

if (i >= j):
    print("IMPOSSIBLE")
else:
    print(c.index(v[i]) + 1, c.index(v[j]) + 1)
    
