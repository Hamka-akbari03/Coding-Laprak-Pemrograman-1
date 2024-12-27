# a, b, i, j, x, y = map(float,input().split())

# hasil = round((((a - b) * i) / j) - (x + y), 3)

# print(str(hasil)+"\n")

# a, b = map(float,input().split())
# i, j = map(float,input().split())
# x, y = map(float,input().split())

# hasil = (((a - b) * i) / j) - (x + y)

# print(f"{hasil:.3f}")

banyak_variable = 6
inputs = []

while len(inputs) < banyak_variable:
    line = input()

    new_line = line.split()

    for value in new_line:
        inputs.append(float(value))

a, b, i, j, x, y = inputs

hasil = round((a - b) *( i / j) - (x + y), 3)

print(f"\n{hasil:.3f}")