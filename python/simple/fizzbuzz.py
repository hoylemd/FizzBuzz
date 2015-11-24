for i in range(100):
    buffer = ""
    num = i + 1

    if num % 3 == 0:
        buffer += "Fizz"

    if num % 5 == 0:
        buffer += "Buzz"

    print buffer if buffer else str(num)
