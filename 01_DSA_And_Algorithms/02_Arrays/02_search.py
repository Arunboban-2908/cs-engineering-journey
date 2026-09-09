numbers = [10, 25, 7, 42, 18]
target = 25   # test this with 10, 7, 99, 45

found = False

for num in numbers:
    # What should you check here?
    # If num is the target, what should happen?
    if num == target:
        found = True
        break

print(found)