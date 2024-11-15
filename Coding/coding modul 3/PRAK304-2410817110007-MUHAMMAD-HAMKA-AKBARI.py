bilangan_cacah = int(input())

if bilangan_cacah == 0:
    print("Nol")
elif bilangan_cacah >= 1 and bilangan_cacah <= 9:
    print("Satuan")
elif bilangan_cacah == 10:
    print("Puluhan")
elif bilangan_cacah >= 11 and bilangan_cacah <= 19:
    print("Belasan")
elif bilangan_cacah >= 20 and bilangan_cacah <= 99:
    print("Puluhan")
else:
    print("Anda Menginput Melebihi Limit Bilangan")