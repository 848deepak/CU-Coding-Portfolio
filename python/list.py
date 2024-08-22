# Initial list
mixed_list = [1, 2, 3, 4, 5, 42, "hello", 3.14, True, "apple", "banana", "cherry", "date", "berry"]

# Print the original mixed list
print("Original Mixed List:", mixed_list)

# Access and print each element in the list
print("\nAccessing elements in the list:")
for i in mixed_list:
    print(i)

# Modification 1: Updating an element in the list
mixed_list[0] = 100  # Changing the first element from 1 to 100
print("\nModified List after updating the first element:", mixed_list)

# Modification 2: Appending a new element to the list
mixed_list.append("new_item")
print("\nModified List after appending 'new_item':", mixed_list)

# Modification 3: Inserting an element at a specific index
mixed_list.insert(3, "inserted_item")  # Insert "inserted_item" at index 3
print("\nModified List after inserting 'inserted_item' at index 3:", mixed_list)

# Modification 4: Removing an element from the list
mixed_list.remove("hello")  # Remove the first occurrence of "hello"
print("\nModified List after removing 'hello':", mixed_list)

# Modification 5: Popping an element from a specific index
popped_item = mixed_list.pop(5)  # Pop the element at index 5
print("\nModified List after popping the element at index 5:", mixed_list)
print("Popped Item:", popped_item)

# Modification 6: Sorting only the string elements (Note: You can't sort the mixed list directly because it has different types)
# Create a new list of string elements only
string_elements = [item for item in mixed_list if isinstance(item, str)]
string_elements.sort()

print("\nSorted String Elements:", string_elements)

# If you want to apply this sorted list back to the original list, you'll need to manually update the relevant positions.
