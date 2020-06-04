from collections import Counter as c
n,m=map(int,input().split())
li,l,res=[],[],''
def creative_string(dict1):
    b=dict1.most_common(1)[0]
    y=b[0]
    b=b[1]
    for i in dict1.keys():
        if (dict1[i]==b):
            y=min(y,i)
    return y
for i in range(n):
    li.append(input())
for i in range(m):
    l.append([])
for i in range(n):
    for j in range(m):
        l[j].append(li[i][j])
for i in range(m):
    l[i]=c(l[i])
    res+=creative_string(l[i])
print(res)