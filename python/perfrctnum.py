def is_perfect_number(n):
    if n <= 0:
        return False

    divisors = set()
    for i in range(1, int(n**0.5) + 1):
        if n % i == 0:
            divisors.add(i)
            if i != 1 and i != n // i:  # Avoid adding the number itself or duplicate divisors
                divisors.add(n // i)
    
    # Sum up the proper divisors
    return sum(divisors) == n

# Example usage:
print(is_perfect_number(6))   # True (1 + 2 + 3 = 6)
print(is_perfect_number(28))  # True (1 + 2 + 4 + 7 + 14 = 28)
print(is_perfect_number(12))  # False (1 + 2 + 3 + 4 + 6 = 16)
