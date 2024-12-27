# Function to find the maximum of two numbers
def maksimal(a, b):
    return a if a > b else b  # Return a if a is greater than b, otherwise return b

# Function to find the minimum of two numbers
def minimal(a, b):
    return a if a < b else b  # Return a if a is smaller than b, otherwise return b

def main():
    bilangan = int(input())  # Read the number of inputs
    numbers = list(map(int, input().split()))  # Read the numbers on the next line
    
    maks = -100000  # Initialize with a very small value (assuming numbers are not smaller than this)
    minim = 100000  # Initialize with a very large value (assuming numbers are not larger than this)
    
    batas = 0  # This will count how many numbers we've processed
    
    # Loop to process each number using a while loop
    while batas < bilangan:
        nilai = numbers[batas]  # Get the number at the current index
        
        # Update the maximum and minimum values
        maks = maksimal(maks, nilai)
        minim = minimal(minim, nilai)
        
        batas += 1  # Increment the counter

    # Print the maximum and minimum values
    print(maks, minim)

# Call the main function to run the program
if __name__ == "__main__":
    main()
