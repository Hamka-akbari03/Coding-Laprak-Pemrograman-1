def calculate_and_print(n, k):
    total_sum = 0
    for i in range(1, n+1):
        row_sum = 0
        for j in range(i, 0, -1):
            row_sum += j * k
            print(f"({j} * {k})", end="")
            if j > 1:
                print(" + ", end="")
        print(f" = {row_sum}")
        total_sum += row_sum
    print(total_sum)

while True:
    try:
        n, k = map(int, input().split())
        calculate_and_print(n, k)
        break
    except EOFError:
        break