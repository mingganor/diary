a=float(input('输入第一个边长'))
b=float(input('输入第二个边长'))
c=float(input('输入第三个边长'))
if a+b>c and a+c>b and b+c>a:
    print(f'{a},{b},{c}可以构成三角形')
    if a==b==c:
        print(f'{a},{b},{c}是等边三角形')
    elif a==b or a==c or b==c:
        print(f'{a},{b},{c}是等腰三角形')
    else:
        print(f'{a},{b},{c}是普通三角形')
else:
    print(f'{a},{b},{c}不能构成三角形')
input("按 Enter 键退出...")
