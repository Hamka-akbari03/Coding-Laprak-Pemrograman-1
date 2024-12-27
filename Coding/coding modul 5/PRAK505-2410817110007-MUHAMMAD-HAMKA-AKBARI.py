# Function to display biodata
def Biodata(tahunLahir, Namaku, Asal):
    tahun_sekarang = 2020
    umur = tahun_sekarang - tahunLahir
    print(f"\nPerkenalkan Nama Saya: {Namaku}")
    print(f"Umur Saya: {umur}")
    print(f"Saya Adalah Angkatan: {tahun_sekarang}")
    print(f"Asal Saya Dari: {Asal}")

# Main function
def main():
    # Read input
    tahunLahir = int(input())  # Read year of birth
    Namaku = input()  # Read name
    Asal = input()  # Read origin
    
    # Call the Biodata function
    Biodata(tahunLahir, Namaku, Asal)

# Run the main function
if __name__ == "__main__":
    main()
