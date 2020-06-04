for i in range(int(input())):
    flag=0
    s=list(input())
    l=list(set(s))
    if len(s)==1:
        print("No")
    else:
        for j in range(len(l)):
            if s.count(l[j]) >1:
                flag=1
        if(flag):
            print("Yes")
        else:
            print("No")