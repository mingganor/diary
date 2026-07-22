"""
a=[]
for i in range(1,10):
    element=int(input(f"please input the {i} element:"))
    a.append(element)
else:
    print(a)
a.sort ()
print(a)
a.sort ()
print(a)
a.sort ()
print(a)
"""
a=[1,2,3,4,5,6,7,7,8,8,9]
b=[4,9,10,45,23,12,11,10]
for i in b:
    a.append(i)
a.sort()
print(a)
c=[]
for i in a:
    if i not in c:
        c.append(i)
print(c)
d=set(a)
d=list(d)
print(d)
a=[i**2 for i in range(1,101)]
print(a)
a.find
"""
a='hello world' 
b=a.replace('world','python')
print(b)
print(a.count('l'))
"""