
n = int(input("Enter a number: "))

count = 0
i = 5

while n // i >= 1:
    count += n // i
    i *= 5

print("Trailing zeros in", n, "=", count)
