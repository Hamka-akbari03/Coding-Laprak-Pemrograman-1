def print_odd_numbers(max_num):
    # Print odd numbers from 1 to max_num
    for i in range(1, max_num + 1):
        if i % 2 != 0:
            print(i, end=" ")
    print()

def print_even_numbers_reversed(max_num):
    # Print even numbers from max_num to 2 in reverse
    for i in range(max_num, 1, -1):
        if i % 2 == 0:
            print(i, end=" ")
    print()

# Main program
max_num = int(input("Enter the maximum number: "))

# Call the functions to print results
print_odd_numbers(max_num)
print_even_numbers_reversed(max_num)
