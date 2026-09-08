# Logarithmic Time - O(log n)

# Choose an input size
n = 64

# Create a function
def logarithmic_time(n):

    # Start with 1
    i = 1

    # Keep going while i is smaller than n
    # Write the while loop yourself
    while i < n:
        i *= 2
        # Double i
        # Write the statement yourself
        print(i)

# Call the function
# Write this yourself
logarithmic_time(n)

# Explanation:
# 1. What does n represent?
# 2. What happens to i on every iteration?
# 3. Why is this O(log n)?
# 4. For n = 64, how many times does the loop execute?

# answer:
# 1. n represents the input size/value used as the limit for the loop.
# 2. i is doubled on every iteration.
# 3. This is O(log n) because i doubles on every iteration, so the number of iterations grows logarithmically as n increases
# 4. For n = 64, the loop executes 6 times.