import math

def eqcgeral(le, lr):
    le.sort(reverse = True)
    lr.sort(reverse = True)
    sraios=lr[0]+lr[1]
    eq=math.pow(le[0]-sraios,2)+math.pow(le[1]-sraios,2)
    return (le[1]>=lr[0]*2 and eq>=pow(sraios,2))
  
while 1:
    L, C, R1, R2 = map(int, input().split())
    if (L==0 and C==0 and R1==0 and R2==0):
        break
    if (eqcgeral([C,L],[R1,R2])):
        print("S")
    else:
        print("N")
  
