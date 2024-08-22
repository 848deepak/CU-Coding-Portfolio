my_string = "A man, a plan, a canal: Panama"

print(my_string[::-1])

# Check if the string is a palindrome
if my_string == my_string[::-1]:
    print("The string is palindrome")
else:
    print("The string is not a palindrome.")
    
    
    
    
    
    
    
    
    

'''develpe a programe that generate diff number pattre based on user input 1.increasnd decreasing and dimond pattern'''
def increasing_pattern(n):
    for i in range(1, n + 1):
        for j in range(1, i + 1):
            print(j, end=" ")
        print()

def decreasing_pattern(n):
    for i in range(n, 0, -1):
        for j in range(1, i + 1):
            print(j, end=" ")
        print()

def diamond_pattern(n):
    
    for i in range(1, n + 1):
        print(" " * (n - i), end="")
        for j in range(1, i + 1):
            print(j, end=" ")
        print()
    
    for i in range(n - 1, 0, -1):
        print(" " * (n - i), end="")
        for j in range(1, i + 1):
            print(j, end=" ")
        print()

def main():
    print("Choose a pattern:")
    print("1. Increasing Pattern")
    print("2. Decreasing Pattern")
    print("3. Diamond Pattern")
    choice = int(input("Enter the number of your choice: "))
    n = int(input("Enter the number of rows: "))

    if choice == 1:
        increasing_pattern(n)
    elif choice == 2:
        decreasing_pattern(n)
    elif choice == 3:
        diamond_pattern(n)
    else:
        print("Invalid choice. Please select a valid option.")

if __name__ == "__main__":
    main()



'''that chechks that given number is perfect no or not'''