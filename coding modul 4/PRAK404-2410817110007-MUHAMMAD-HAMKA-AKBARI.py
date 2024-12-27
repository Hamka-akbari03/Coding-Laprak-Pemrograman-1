def main():
    while True:
        print("Pilih program")
        print("1. Penjumlahan")
        print("2. Pengurangan")
        print("3. Perkalian")
        print("4. Pembagian")
        print("5. Exit")

        try:
            pilihan = int(input("Masukkan pilihan: "))
        except ValueError:
            print("Input anda salah, silahkan coba lagi")
            continue

        if pilihan == 5:
            print("Terimakasih telah menggunakan kalkulator Muhammad Hamka Akbari")
            break

        if pilihan < 1 or pilihan > 5:
            print("Input anda salah, silahkan coba lagi")
            break

        try:
            nilai1 = float(input("Masukkan nilai pertama: "))
            nilai2 = float(input("Masukkan nilai kedua: "))
        except ValueError:
            print("Input nilai harus berupa angka. Silakan coba lagi.")
            continue

        if pilihan == 1:
            hasil = nilai1 + nilai2
            print(f"Hasil penjumlahan antara {nilai1:.2f} dengan {nilai2:.2f} adalah {hasil:.2f}")
            break
        elif pilihan == 2:
            hasil = nilai1 - nilai2
            print(f"Hasil pengurangan antara {nilai1:.2f} dengan {nilai2:.2f} adalah {hasil:.2f}")
            break
        elif pilihan == 3:
            hasil = nilai1 * nilai2
            print(f"Hasil perkalian antara {nilai1:.2f} dengan {nilai2:.2f} adalah {hasil:.2f}")
            break
        elif pilihan == 4:
            if nilai2 == 0:
                print("Kesalahan: Pembagian dengan nol tidak diperbolehkan.")
            else:
                hasil = nilai1 / nilai2
                print(f"Hasil pembagian antara {nilai1:.2f} dengan {nilai2:.2f} adalah {hasil:.2f}")
                break
        else:
            print("Input anda salah, silahkan coba lagi")

if __name__ == "__main__":
    main()
