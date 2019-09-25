def nestlist1(f, x0, n):
    list = [x0]
    x = x0
    for i in range(n):
        list.append(f(x))
        x = f(x)
    return list

def nestlist2(fx, fy, x0, y0, n):
    lx = [x0]
    ly = [y0]
    x = x0
    y = y0
    for i in range(n):
        lx.append(fx(x,y))
        ly.append(fy(x,y))
        temp_x = fx(x,y)
        temp_y = fy(x,y)
        x = temp_x
        y = temp_y
    return lx, ly
        