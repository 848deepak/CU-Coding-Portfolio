def compress_string(s):
    compressed = []
    count = 1

    for i in range(len(s)):
        if i + 1 < len(s) and s[i] == s[i + 1]:
            count += 1
        else:
            compressed.append(s[i] + str(count))
            count = 1

    return ''.join(compressed)

# Example usage
print(compress_string("aabbcccaaa"))  # Output: "a2b2c3a3"
