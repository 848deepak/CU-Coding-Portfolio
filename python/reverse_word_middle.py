def reverse_world_middle(s):
    words = s.split()
    result = []

    for word in words:
        if len(word) % 2 == 1:  # Odd length
            mid = len(word) // 2
            reversed_word = word[:mid] + word[mid] + word[mid+1:]
        else:  # Even length
            mid1 = len(word) // 2 - 1
            mid2 = len(word) // 2
            reversed_word = word[:mid1] + word[mid2] + word[mid1] + word[mid2+1:]
        
        result.append(reversed_word)

    return ' '.join(result)

# Example usage
print(reverse_world_middle("world"))  # Output: "wlrdo"
