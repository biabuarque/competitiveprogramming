n = int(input())
cri = input().split()
sor = input().split()
ans = []

for i in range(n):
    if (i != n - 1):
        print(sor[0], end=" ")
    else:
        print(sor[0])
    sor.remove(cri[i])