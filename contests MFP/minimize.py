s = input()
v = []
for i in range(len(s)):
    v.append(s[i])
v.sort()
print(''.join(v))