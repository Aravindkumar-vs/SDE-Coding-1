for i in range(int(input())):
    n=int(input())
    l,ll=[],[]
    for j in range(n):
        a,b=map(int,input().split())
        l.append(a)
        ll.append(b)
    l,ll=sorted(l),sorted(ll)
    a,b=l[n-1]-l[0],ll[n-1]-ll[0]
    print(max(a,b)*max(a,b))