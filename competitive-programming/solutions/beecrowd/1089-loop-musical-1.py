def teste_pico(magnitude, anterior, proximo):
    if ( (magnitude > anterior and magnitude > proximo) or
             (magnitude < anterior and magnitude < proximo) ):
        return 1
    else:
        return 0

while (1):
    n=int(input())
    
    if(n==0):
        break

    picos=0
    sequencia_magnitudes=list(map(int, input().split()))
    
    for i in range(n):
        if (i==0):
            picos+=teste_pico(sequencia_magnitudes[i], sequencia_magnitudes[n-1], sequencia_magnitudes[i+1])
        elif (i==n-1):
            picos+=teste_pico(sequencia_magnitudes[i], sequencia_magnitudes[0], sequencia_magnitudes[i-1])
        else:
            picos+=teste_pico(sequencia_magnitudes[i], sequencia_magnitudes[i-1], sequencia_magnitudes[i+1])

    print(picos)
