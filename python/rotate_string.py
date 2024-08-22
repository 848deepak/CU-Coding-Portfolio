def rotate_string(s, n):
    n = n % len(s)  
    rotated = s[-n:] + s[:-n]
    return rotated


print(rotate_string("abcdef", 2))   
print(rotate_string("abcdef", -2))  
