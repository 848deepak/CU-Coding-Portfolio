
'''The strip() method removes any leading, and trailing whitespaces.

Leading means at the beginning of the string, trailing means at the end.

You can specify which character(s) to remove, if not, any whitespaces will be removed.



String Strip Method
There are three options for stripping characters from a string in Python, 
lstrip(), rstrip() and strip().

Each will return a copy of the string with characters removed, 
at from the beginning, the end or both beginning and end. 
If no arguments are given the default is to strip whitespace characters.'''

string = '   Hello, World!    '
strip_beginning = string.lstrip()
strip_end = string.rstrip()
strip_both = string.strip()

print("After lstrip():", strip_beginning)
print("After rstrip():", strip_end)
print("After strip():", strip_both)
