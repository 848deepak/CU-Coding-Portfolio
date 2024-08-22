#write a program to count the vovels in the given strings 
def count_vowels(string):
    vowels = "aeiouAEIOU"
    count = 0
    for char in string:
        if char in vowels:
            count += 1
    return count

input_string = "Hello, World!"
vowel_count = count_vowels(input_string)
print("Number of vowels:", vowel_count)