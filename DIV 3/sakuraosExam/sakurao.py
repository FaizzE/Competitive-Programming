def can_make_zero(a, b):
    total_sum = a + 2 * b
    if total_sum % 2 != 0:
        return "NO"
    
    half_sum = total_sum // 2
    if half_sum <= b * 2 and half_sum >= 0 and (half_sum - b * 2) <= a:
        return "YES"
    
    return "NO"

# Reading input
t = int(input().strip())
results = []
for _ in range(t):
    a, b = map(int, input().strip().split())
    results.append(can_make_zero(a, b))

# Output results
for result in results:
    print(result)
