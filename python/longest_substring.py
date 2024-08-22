def longest_substring_two_chars(s):
    left = 0
    char_map = {}
    longest = ""

    for right in range(len(s)):
        char_map[s[right]] = char_map.get(s[right], 0) + 1

        while len(char_map) > 2:
            char_map[s[left]] -= 1
            if char_map[s[left]] == 0:
                del char_map[s[left]]
            left += 1

        if right - left + 1 > len(longest):
            longest = s[left:right + 1]

    return longest

# Example usage
print(longest_substring_two_chars("ccaabbb"))
