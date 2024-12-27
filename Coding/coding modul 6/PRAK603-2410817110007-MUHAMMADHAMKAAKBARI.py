# Input bilangan n1 dan n2
n1, n2 = map(int, input().split())

# Jika n1 tidak sama dengan n2, tampilkan pesan dan berhenti
if n1 != n2:
    print("Jumlah tidak sama")
else:
    # Input angka untuk baris pertama
    baris1 = list(map(int, input().split()))
    # Input angka untuk baris kedua
    baris2 = list(map(int, input().split()))
    
    # Perkalian bilangan antara baris 1 dan baris 2
    hasil = [baris1[i] * baris2[i] for i in range(n1)]

    print("\n")
    
    # Output hasil perkalian
    print(" ".join(map(str, hasil)))
