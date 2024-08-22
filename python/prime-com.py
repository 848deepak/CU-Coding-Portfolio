def is_prime(num):
  

  if num <= 1:
    return False  

  for i in range(2, int(num**0.5) + 1):
    if num % i == 0:
      return False

  return True


number = int(input("Enter a number: "))

if is_prime(number):
  print(number, "is a prime number.")
else:
  print(number, "is not a prime number.")
  
  ##another apporch
  
#   number=int(input("enter the number"))
# is_prime = True

# if number > 1:
#     for i in range(2, number):
#         if number % i == 0:
#             is_prime = False
            
# else:
#     is_prime = False

# if is_prime:
#     print(f"{number} is a prime number.")
# else:
#     print(f"{number} is not a prime number.")

#     for i in range(1,11):
#      print(2*i)

