
temp = a = int(input("Enter a number: "))
rev = 0
while (a > 0):
    dig = a % 10
    rev = rev * 10 + dig
    a = a // 10

print("Palindrome" if (temp == rev) else "Not Palindrome")
