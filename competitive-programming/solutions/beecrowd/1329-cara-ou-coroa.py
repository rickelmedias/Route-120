while 1:
    xmoedas = int(input())

    if (xmoedas==0):
        break
    
    m=j=0

    l = list(map(int, input().split()))

    for i in range(xmoedas):
        if (l[i]==0):
            m=m+1
        if (l[i]==1):
            j=j+1

    print("Mary won {0} times and John won {1} times".format(m,j))