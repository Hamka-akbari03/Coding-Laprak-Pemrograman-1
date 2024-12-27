sepatu_A = 400000
sepatu_B = 350000

print(f"Harga sepatu A adalah {sepatu_A}")
print(f"\nHarga sepatu B adalah {sepatu_B}")

diskon1 = 0.13 
diskon2 = 0.21 

harga_diskon1 = sepatu_A - (sepatu_A * diskon1)
harga_diskon2 = sepatu_B - (sepatu_B * diskon2)

print(f"\nSepatu A mendapat diskon 13% sehingga harganya menjadi {harga_diskon1:.0f}")
print(f"\nSepatu A mendapat diskon 21% sehingga harganya menjadi {harga_diskon2:.0f}")