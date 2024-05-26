n, m = tuple(map(int, input.split()))
c = input()
s = []
n = 0
for j in range(n*m):
    for i in range(n):
        if (i + m <= n*m):
            qtd = c[i:i+m].count(1)
        else:
            qtd = c[i:n*m].count(1)
            qtd += c[0:(((i + m) - n*m) + 1)]

        if s.count(qtd) > 0:
            n = 1
            break
