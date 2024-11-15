def sort_three_numbers(input_1, input_2, input_3):
    # Swap input_1 and input_2 if input_1 is greater
    if input_1 > input_2:
        input_1, input_2 = input_2, input_1

    # Swap input_2 and input_3 if input_2 is greater
    if input_2 > input_3:
        input_2, input_3 = input_3, input_2

    # Recheck input_1 and input_2 after modifying input_2 and input_3
    if input_1 > input_2:
        input_1, input_2 = input_2, input_1

    # Print the sorted result
    print(f"{input_1} {input_2} {input_3}")

# Input from user
input_1, input_2, input_3 = map(int,input().split())

# Call the function
sort_three_numbers(input_1, input_2, input_3)