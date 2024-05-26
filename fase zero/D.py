e, v = tuple(map(int, input().split()))
tot = int((e / v) * 60)
min = int(tot % 60)
hr = int((tot - min) / 60)
hr = int((hr + 19) % 24)

if (hr < 10):
    hora = "0" + str(hr)
else:
    hora = str(hr)

if (min < 10):
    minuto = "0" + str(min)
else:
    minuto = str(min)

horas = hora + ":" + minuto
print(horas)