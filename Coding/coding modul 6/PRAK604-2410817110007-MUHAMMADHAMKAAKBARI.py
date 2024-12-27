# Input kode and pesan
kode = input("")
pesan = input("")

# Check if lengths are different
if len(kode) != len(pesan):
    print("Panjang kalimat berbeda, pesan palsu")
else:
    star = 0
    hash_count = 0

    # Compare characters
    result = []
    for k, p in zip(kode, pesan):
        if k == ' ' and p == ' ':
            result.append(' ')  # Matching spaces
        elif k == ' ' or p == ' ':
            result.append('#')  # Mismatched spaces
            hash_count += 1
        elif k == p:
            result.append('*')  # Matching characters
            star += 1
        else:
            result.append('#')  # Mismatched characters
            hash_count += 1

    # Print the result string
    print("".join(result))
    
    # Output counts of stars and hashes
    print(f"* = {star}")
    print(f"# = {hash_count}")

    # Determine authenticity
    if star >= hash_count:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")
