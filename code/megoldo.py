for x in range(1, 10):
    y = x + 4

    if y%2 == 0:
        z = 2*x
    else:
        z = y+2

    print(2*x,"/",2*(z-y))
