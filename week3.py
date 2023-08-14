def expanding(l):
    if len(l) < 2:
        return False
    
    prev_diff = abs(l[1] - l[0])
    for i in range(2, len(l)):
        diff = abs(l[i] - l[i - 1])
        if diff <= prev_diff:
            return False
        prev_diff = diff
        
    return True
def sumsquare(l):
    odd_sum = 0
    even_sum = 0

    for num in l:
        if num % 2 == 1:
            odd_sum += num ** 2
        else:
            even_sum += num ** 2
    
    return [odd_sum, even_sum]
def transpose(m):
    rows = len(m)
    cols = len(m[0]) if rows > 0 else 0
    
    transposed = [[0 for _ in range(rows)] for _ in range(cols)]
    
    for i in range(rows):
        for j in range(cols):
            transposed[j][i] = m[i][j]
    
    return transposed
