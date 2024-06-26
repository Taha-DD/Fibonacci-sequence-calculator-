Uzero = 0
Ualpha = 1
Ucalypse = 0
n = int(input("enter num: "))
for i in range(n):
    print(Uzero)
    Ucalypse = Uzero + Ualpha
    Uzero = Ualpha
    Ualpha = Ucalypse

print(Uzero)