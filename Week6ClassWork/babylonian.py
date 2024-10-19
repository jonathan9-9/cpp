# Babylonian method to find square root of a number

def sqrt_babylonian(r, initial_guess=1.2, tol=0.00005, n_max=50):
    # Start with the initial guess
    old_est = initial_guess
    n = 0
    error = 1

    # Iterate using the Babylonian method formula
    while error > tol and n < n_max:
        new_est = 0.5 * (old_est + r / old_est)
        print(f"Iteration {n}: x = {new_est}")

        # Calculate error
        error = abs(new_est - old_est)

        # Update the estimate for the next iteration
        old_est = new_est
        n += 1

    return old_est


# Use the function to find the square root of 2
r = 5
root = sqrt_babylonian(r)
print(f"Estimated square root of {r}: {root}")
