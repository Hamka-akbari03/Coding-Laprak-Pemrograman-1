import math 

tinggi, miring = map(int,input().split())

alas = math.sqrt(pow(miring,2) - pow(tinggi,2))
keliling = alas + tinggi + miring
luas = 1/2 * alas * tinggi

print(f"Alas = {alas:.0f} cm")
print(f"Tinggi = {tinggi:.0f} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm^2\n")

tinggi = int(input())
miring = int(input())

alas = math.sqrt(pow(miring,2) - pow(tinggi,2))
keliling = alas + tinggi + miring
luas = 1/2 * alas * tinggi

print(f"Alas = {alas:.0f} cm")
print(f"Tinggi = {tinggi:.0f} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm^2\n")

banyak_variable = 2
inputs = []

while len(inputs) < banyak_variable:
    line = input()

    new_line = line.split()

    for value in new_line:
        inputs.append(float(value))

tinggi, miring = inputs

alas = math.sqrt(pow(miring,2) - pow(tinggi,2))
keliling = alas + tinggi + miring
luas = 1/2 * alas * tinggi

print(f"\nAlas = {alas:.0f} cm")
print(f"Tinggi = {tinggi:.0f} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm^2\n")