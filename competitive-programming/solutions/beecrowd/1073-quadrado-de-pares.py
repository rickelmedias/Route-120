import math

n=int(input())
x=2

while(x <= n):
   print("{}^2 = {}".format(x, int(math.pow(x,2))))
   x+=2