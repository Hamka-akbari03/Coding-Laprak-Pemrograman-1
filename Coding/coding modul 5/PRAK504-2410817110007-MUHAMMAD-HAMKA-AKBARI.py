# Function to reverse the digits of a number
def reverse(n):
    return int(str(n)[::-1])  # Convert the number to a string, reverse it, and convert it back to an integer

def main():
    # Read two integers A and B
    A, B = map(int, input().split())
    
    # Reverse A and B
    A = reverse(A)
    B = reverse(B)
    
    # Add the reversed numbers
    C = A + B
    
    # Reverse the sum and print it
    print(reverse(C))

# Run the main function
if __name__ == "__main__":
    main()
