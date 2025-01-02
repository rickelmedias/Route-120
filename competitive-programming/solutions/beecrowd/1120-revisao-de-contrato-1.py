while 1:
    D, N = input().split()
    R = ""
    
    if (N=="0" and D=="0"):
        break;
    else:
        N=N.replace(D, "")
        
        if len(N) <= 0:
            print("0")
        else:
            if N[0]=="0":
                for i in range(len(N)):
                    if (N[i]!="0" or len(R)>0):
                        R+=N[i]
                        
                if (len(R) <= 0):
                    print("0")
                else:
                    print(R)
            else:
                print(N)