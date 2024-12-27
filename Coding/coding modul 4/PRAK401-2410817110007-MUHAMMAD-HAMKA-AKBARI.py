# Input: Read both the kelipatan (multiple) and simbol (symbol) from the same line
input_data = input("Masukkan bilangan kelipatan dan simbol (misalnya 3 #): ")

# Split the input into multiple parts
kelipatan, simbol = input_data.split()

# Convert kelipatan to an integer and keep simbol as a string
kelipatan = int(kelipatan)

# Output: Iterate through numbers 1 to 50
for i in range(1, 51):
    if i % kelipatan == 0:
        print(simbol, end=" ")  # Print the symbol instead of the number
    else:
        print(i, end=" ")  # Print the number if it's not a multiple

    # New line every 10 numbers
    if i % 10 == 0:
        print()  # Create a new line every 10 numbers
