while 1:
    n = int(input())

    if (n==0):
        break
    
    S=P=0
    errados=""
    erros=0
    
    for i in range(n):
        l = input().split()
        identificador=l[0]
        tempo_minutos=int(l[1])
        julgamento=l[2]

        if (julgamento=="correct"):   
            erros = errados.count(identificador)
            errados = errados.replace(identificador, "")
            S=S+1
            P=P+(20*erros)+tempo_minutos
            erros=0

        if (julgamento=="incorrect"):            
            errados = errados + identificador
    
    if (S==0):
        P=0

    print("{0} {1}".format(S,P))