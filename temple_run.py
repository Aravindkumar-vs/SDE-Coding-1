n=int(input())
l=list(map(int,input().split()))
for i in range(n-1,0,-1):
    l[i]=sum(l[:i+1])
k=int(input())
kl=[]
for i in range(k):
    kl.append(int(input()))
for i in range(k):
    for j in range(n):
        if l[j]>=kl[i]:
            print(j+1)
            break
    else:
        print(-1)