def branco_ou_preto(q):
    if (q<=127):
        return "P"
    else:
        return "B"
        
def teste_alternativas(a,b,c,d,e):
    respostaMarcada=""
    respostas=0
    
    if (branco_ou_preto(a)=="P"):
        respostas+=1
        respostaMarcada="A"
    if (branco_ou_preto(b)=="P"):
        respostas+=1
        respostaMarcada="B"
    if (branco_ou_preto(c)=="P"):
        respostas+=1
        respostaMarcada="C"
    if (branco_ou_preto(d)=="P"):
        respostas+=1
        respostaMarcada="D"
    if (branco_ou_preto(e)=="P"):
        respostas+=1
        respostaMarcada="E"
    
    if (respostas == 1):
        return respostaMarcada
    else:
        return "*"
        

while 1:
    n = int(input())
    
    if (n==0):
        break
    
    for i in range(n):
        a,b,c,d,e = map(int, input().split())
        print(teste_alternativas(a,b,c,d,e))
