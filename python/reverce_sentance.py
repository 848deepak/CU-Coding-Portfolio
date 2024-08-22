# def reverse_sentence(s):
#     words = s.split()
#     reversed_sentence = ' '.join(reversed(words))
#     return reversed_sentence


# print(reverse_sentence("Hello World Java")) 


def reverse_sentence(s):
    return ' '.join(s.split()[::-1])

print(reverse_sentence("Hello World Java"))  # Output: "Java World Hello"
