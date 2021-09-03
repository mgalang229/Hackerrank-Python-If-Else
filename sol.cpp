n = int(input())
if n > 20 and n % 2 == 0:
    print("Not Weird")
elif n % 2 == 1:
    print("Weird")
else:
    if 2 <= n <= 5:
        print("Not Weird")
    elif 6 <= n <= 20:
        print("Weird")
