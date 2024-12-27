# Input jumlah ruangan
n = int(input())

# Input jumlah awal Zetsu putih di setiap ruangan
zetsu = list(map(int, input().split()))

# Menghitung jumlah Zetsu putih setelah membelah diri
for i in range(n):
    zetsu[i] *= (i + 1)  # Perkalian dengan label ruangan (index + 1)

print("\n")

# Menampilkan output
print(" ".join(map(str, zetsu)))
