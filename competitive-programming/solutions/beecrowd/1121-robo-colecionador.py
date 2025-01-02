def gotoLeft(letter):
    if (letter == "O"):
        return "S"
    if (letter == "S"):
        return "L"
    if (letter == "L"):
        return "N"
    if (letter == "N"):
        return "O"
def gotoRight(letter):
    if (letter == "O"):
        return "N"
    if (letter == "N"):
        return "L"
    if (letter == "L"):
        return "S"
    if (letter == "S"):
        return "O"
def gotoAhead(letter):
    if (letter == "O"):
        return {'l': 0, 'c': -1}
    if (letter == "N"):
        return {'l': -1, 'c': 0}
    if (letter == "L"):
        return {'l': 0, 'c': 1}
    if (letter == "S"):    
        return {'l': 1, 'c': 0}

while 1:
    nl,nc,s=map(int, input().split())
    
    if (nl==0 and nc==0 and s==0):
        break
    
    pc=pl=0
    point=0
    mp = []
    
    for l in range(nl):
        i = input()
        if (i.rfind("N") >= 0):
            pl=l
            pc=i.rindex("N")
        if (i.rfind("S") >= 0):
            pl=l
            pc=i.rindex("S")
        if (i.rfind("O") >= 0):
            pl=l
            pc=i.rindex("O")
        if (i.rfind("L") >= 0):
            pl=l
            pc=i.rindex("L")
        mp.append(list(i))
    
    instrucoes=input()
    
    for ins in list(instrucoes):
        if (ins == "E"):
            mp[pl][pc] = gotoLeft(mp[pl][pc])
        if (ins == "D"):
            mp[pl][pc] = gotoRight(mp[pl][pc])
        if (ins == "F"):
            move = gotoAhead(mp[pl][pc])
            if (pl+move['l'] >= 0 and pl+move['l'] < nl):
                if (pc+move['c'] >= 0 and pc+move['c'] < nc):
                    can_move = mp[pl+move['l']][pc+move['c']] != "#"
                    is_card = mp[pl+move['l']][pc+move['c']] == "*"
                    if (can_move):
                        if (is_card):
                            point+=1
                        l=mp[pl][pc]
                        mp[pl][pc]="."
                        pl=pl+move['l']
                        pc=pc+move['c']
                        mp[pl][pc]=l
            
    print(point)