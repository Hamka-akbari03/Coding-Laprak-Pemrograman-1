def main():
    start, end = map(int, input("Enter start and end values: ").split())
    
    start_static = start
    end_static = end
    range_value = abs(start - end)
    symbol = "-"
    
    for i in range(range_value + 1):
        # Print the current pair and the symbol if not the last pair
        print(f"{start} {end}", end=f" {symbol} " if i != range_value else "")
        
        # Adjust the values of start and end
        if start_static > end_static:
            start -= 1
            end += 1
        elif start_static < end_static:
            start += 1
            end -= 1

if __name__ == "__main__":
    main()