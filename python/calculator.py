def add(x, y):
    return x + y

def subtract(x, y):
    return x - y

def multiply(x, y):
    return x * y

def divide(x, y):
    if y == 0:
        return "Error! Division by zero."
    else:
        return x / y

def sum_of_multiple_numbers():
    total_sum = 0
    n = int(input("Enter the number of inputs you want to sum: "))
    for i in range(n):
        num = int(input(f"Enter number {i + 1}: "))
        total_sum += num
    return total_sum

print("******* CALCULATOR ********")

while True:
    print("\nSelect operation:")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    print("5. Sum of multiple numbers")
    print("6. Exit")

    choice = input("Enter choice (1/2/3/4/5/6): ")

    if choice == '6':
        print("Exiting calculator. Goodbye!")
        break

    if choice in ['1', '2', '3', '4']:
        num1 = int(input("Enter first number: "))
        num2 = int(input("Enter second number: "))

        if choice == '1':
            print(f"The result is: {add(num1, num2)}")
        elif choice == '2':
            print(f"The result is: {subtract(num1, num2)}")
        elif choice == '3':
            print(f"The result is: {multiply(num1, num2)}")
        elif choice == '4':
            print(f"The result is: {divide(num1, num2)}")

    elif choice == '5':
        print(f"The sum of the numbers is: {sum_of_multiple_numbers()}")

    else:
        print("Invalid input. Please enter a valid choice.")
