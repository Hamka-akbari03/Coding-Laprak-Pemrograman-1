# Input ukuran matriks
n = int(input(""))

# Inisialisasi matriks A dan B
A = []
B = []

# Input elemen matriks A
print("Matriks A")
for i in range(n):
    A.append(list(map(int, input().split())))

# Input elemen matriks B
print("Matriks B")
for i in range(n):
    B.append(list(map(int, input().split())))

# Inisialisasi matriks C (hasil perkalian) dengan 0
C = [[0 for _ in range(n)] for _ in range(n)]

# Perkalian matriks A x B
for i in range(n):
    for j in range(n):
        for k in range(n):
            C[i][j] += A[i][k] * B[k][j]

# Output hasil perkalian matriks
print("\nMatriks AXB")
for i in range(n):
    print(" ".join(map(str, C[i])))
