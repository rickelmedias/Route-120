while True:
    numbers = input().split()
    D, N = numbers

    try:
        if D == '0' and N == '0' or not D.isnumeric() or not N.isnumeric():
            break
        else:
            res = str(int(N.replace(D, '')))
            print(res)
    except:
        print("0")