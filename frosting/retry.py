n = int(input())
p = input().split()
a = [int(i) for i in p]

q = input().split()
b = [int(i) for i in q]

val = [0,0,0]
for i in range(n):
    val[i%3] += a[i]

ans = [0,0,0]
for i in range(n):
    ans[(i+0)%3] += val[(i+0)%3] * b[i]
    ans[(i+1)%3] += val[(i+2)%3] * b[i]
    ans[(i+2)%3] += val[(i+1)%3] * b[i]

ans.reverse()
print(*ans)
