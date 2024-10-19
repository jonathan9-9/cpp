
def f_x(x):
    return 2*x**3 - 6*x - 1


def f_prime(x):
    return 6*x**2 - 6


def func():
    old_est = -1.2
    tol = 0.00005
    n = 0
    n_max = 50

    error = 1
    while error > tol and n < n_max:

        new_est = old_est - f_x(old_est) / f_prime(old_est)
        print(f"new estimate {n}: x = {new_est}")
        error = abs(new_est - old_est)
        old_est = new_est
        n += 1

    return old_est


root = func()
print(f"Estimated root: {root}")
