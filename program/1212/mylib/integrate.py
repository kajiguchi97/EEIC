
def nintegrate(f, a, b, n):
    s = 0
    i = a
    while i <= b:
        s += f(i) * (b-a)/n
        i += (b-a)/n
    return s

nintegrate(lambda x: x+x**2, 0, 10, 100)