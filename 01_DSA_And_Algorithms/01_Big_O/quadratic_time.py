# Quadratic Time - O(n²)

# Create a list with some numbers
numbers = [
    # your numbers here
    1, 2, 3, 4, 5
]

# Create a function
def quadratic_time(numbers):

    # Create an outer loop
    # your code here
    for number in numbers:
        for other_number in numbers:
            print(other_number)
        # Create an inner loop
        # your code here

            # Print something here
            # your code here


# Call the function
# your code here
quadratic_time(numbers)

# Explanation:
# 1. What does n represent?
# 2. Why does having two nested loops make this O(n²)?
# 3. If n = 10, approximately how many times does the inner operation happen?

# Answer:
# 1. n represents the number of elements in the list.
# 2. Having two nested loops makes this O(n²) because the function has to visit every element in the list twice.
# 3. If n = 10, approximately 100 times does the inner operation happen.