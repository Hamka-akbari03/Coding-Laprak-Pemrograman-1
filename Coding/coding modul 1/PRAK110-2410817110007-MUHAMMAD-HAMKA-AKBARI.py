import math

print("Diketahui :")
alas = 5
tinggi = 12

print(f"Alas = {alas} cm")
print(f"Tinggi = {tinggi} cm\n")

print("jawab :")
print(f"Sisi A = {tinggi} cm")

sisi_miring = math.sqrt(alas**2 + tinggi**2)

print(f"Sisi B = {sisi_miring:.0f} cm")
print(f"Sisi C = {alas} cm")

keliling = alas + tinggi + sisi_miring

print(f"Keliling = {keliling:.0f} cm")

luas = 1/2 * alas * tinggi

print(f"Luas = {luas:.0f} cm")