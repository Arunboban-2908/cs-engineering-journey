# Constant Time - O(1)

# Create a list with 5 numbers
numbers = [
    # your numbers here
    1, 3, 5, 7, 9
]


# Create a function that receives the list
def constant_time(numbers):
    return numbers[0]
    


# Call the function and print the result
# Write your code here
print(constant_time(numbers))

# Explanation:
# 1. What does n represent?
# 2. Why is direct index access O(1)?
# 3. What happens if the list has 10 million elements?

# Answer:
# 1. n represents the number of elements in the list
# 2. Direct index access is O(1) because it takes the same amount of time to access any element in the list.
# 3. If the list has 10 million elements, it will still take the same amount of time to access the first element because the function is O(1)