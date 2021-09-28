n = int(input())
p = input().split()
a = [int(i) for i in p]

q = input().split()
b = [int(i) for i in q]

c = [0,0,0]
t = 0

for i in range(n):
    for j in range(n):
        c[t%3] += a[j]*b[i]
        t += 1

print(c[1], c[2], c[0])
