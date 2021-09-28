n = 7
a = [6,2,4,5,1,1,4]
b = [2,5,1,4,2,3,4]

c = [0,0,0]
t = 0

for i in range(len(a)):
    for j in range(len(b)):
        c[t%3] += a[i]*b[j]
        t += 1

print(c[1], c[2], c[0])
