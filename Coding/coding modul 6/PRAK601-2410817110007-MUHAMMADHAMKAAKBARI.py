# Input jumlah baris dan kolom
baris, kolom = map(int, input("").split())

# Input elemen matriks
matriks = []  # List untuk menyimpan matriks
angka = list(map(int, input().split()))  # Input seluruh angka dalam satu baris

print("\n")

# Mengisi matriks
index = 0
for i in range(baris):
    row = []
    for j in range(kolom):
        row.append(angka[index])
        index += 1
    matriks.append(row)

# Output matriks
for row in matriks:
    print(" ".join(map(str, row)))
