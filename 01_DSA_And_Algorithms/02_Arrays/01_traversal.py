# Array Traversal - O(n)

# Create an array/list
numbers = [
    # Add 5 numbers
    1, 2, 3, 4, 5
]

# Create a function that traverses the array
def traverse(numbers):

    # Visit every element
    # Write your loop here
    for num in range(len(numbers)):
        print(numbers[num])


# Call the function
# Write your code here
traverse(numbers)

# Explanation:
# 1. What is traversal?
# 2. How many times does the loop run for 5 elements?
# 3. Why is traversal O(n)?
# answer:
# 1. Traversal is the process of visiting each element in the array exactly once.
# 2. The loop runs 5 times for 5 elements.
# 3. Traversal is O(n) because the loop runs n times, where n is the number of elements in the array.