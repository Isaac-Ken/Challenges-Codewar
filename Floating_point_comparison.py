# https://stackoverflow.com/questions/5595425/what-is-the-best-way-to-compare-floats-for-almost-equality-in-python
# https://stackoverflow.com/questions/455612/limiting-floats-to-two-decimal-points


#Inital
def approx_equals(a, b):
    a = round(a, 2)
    b = round(b, 2)
    return a == b

#simple solution
def approx_equals(a, b):
    return abs(a-b) < 0.001

#Complex Solution
def approx_equals(a, b, rel_tol=1e-09, abs_tol=0.001):
    return abs(a-b) <= max(rel_tol * max(abs(a), abs(b)), abs_tol)



