# my_string = "manaplanacanalpanama"
# if my_string == my_string[::-1]:
#     print("The string is palindrome")
# else:
#     print("The string is not a palindrome.")
    
    
    #programe to interchange the first and last in list 
def interchange_first_last(lst):
    # Check if the list has more than one element
    if len(lst) > 1:
        lst[0], lst[-1] = lst[-1], lst[0]
    return lst

# Example usage
my_list = [10, 20, 30, 40, 50]
print("Original List:", my_list)
print("After Interchanging First and Last:", interchange_first_last(my_list))

    #programe to find the max val
def find_max_value(lst):
    return max(lst)

# Example usage
my_list = [10, 20, 30, 40, 50]
print("List:", my_list)
print("Maximum Value:", find_max_value(my_list))

    #programe to find the lenth of list
def find_length(lst):
    return len(lst)

# Example usage
my_list = [10, 20, 30, 40, 50]
print("List:", my_list)
print("Length of List:", find_length(my_list))

    #program to find the sum and avg of list
def find_sum_and_avg(lst):
    total_sum = sum(lst)
    average = total_sum / len(lst) if len(lst) > 0 else 0
    return total_sum, average

# Example usage
my_list = [10, 20, 30, 40, 50]
print("List:", my_list)
total, avg = find_sum_and_avg(my_list)
print("Sum of List:", total)
print("Average of List:", avg)

    #program to reverse the list
    
     