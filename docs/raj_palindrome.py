def reverse_number(n: int):
    rev = 0
    while n != 0:
        rev = rev*10 + n%10
        n = n//10
    return rev

num = int(input("Enter a number: "))

print("Palindrome" if num == reverse_number(num) else "Not Palindrome")