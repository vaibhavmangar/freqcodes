def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

def primeproduct(m):
    if m <= 0:
        return False
    
    for p in range(2, m):
        if m % p == 0 and is_prime(p) and is_prime(m // p):
            return True
    return False

def delchar(s, c):
    if len(c) != 1:
        return s

    result = ""
    for char in s:
        if char != c:
            result += char

    return result
 
def shuffle(l1, l2):
    result = []
    min_len = min(len(l1), len(l2))

    for i in range(min_len):
        result.append(l1[i])
        result.append(l2[i])

    if len(l1) > min_len:
        result.extend(l1[min_len:])
    elif len(l2) > min_len:
        result.extend(l2[min_len:])

    return result
