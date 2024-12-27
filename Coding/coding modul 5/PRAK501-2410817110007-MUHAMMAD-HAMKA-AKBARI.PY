def angka_maks(a, b, c, d):
    max_num = a  # Anggap a sebagai angka terbesar sementara
    if b > max_num:
        max_num = b
    if c > max_num:
        max_num = c
    if d > max_num:
        max_num = d
    return max_num  # Mengembalikan angka terbesar

# Input 4 angka
a, b, c, d = map(int, input("Masukkan 4 angka, pisahkan dengan spasi: ").split())

# Memanggil fungsi dan mencetak hasilnya
print(angka_maks(a, b, c, d))