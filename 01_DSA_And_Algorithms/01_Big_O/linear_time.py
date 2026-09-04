# Linear Time - O(n)

# Create a list with some numbers
numbers = [
    # your numbers here
    1, 2, 3, 4, 5
]

# Create a function that visits every element
def linear_time(numbers):

    # Write your loop here
    for number in numbers:
        print(number)
    # The function should visit every element


# Call the function and test it
# Write your code here
linear_time(numbers)

# Explanation:
# 1. What does n represent?
# 2. Why is this O(n)?
# 3. What happens if the list grows from 5 to 1,000 elements?

# Answer:
# 1. n represents the number of elements in the list.
# 2. This is O(n) because the function has to visit every element in the list.
# 3. If the list grows the same amount of time will be required to visit every element in the list.