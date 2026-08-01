"""
for i in range(1,10):
    for j in range(1,i+1):
        print(f'{j}*{i}={i*j}', end=' ')
    print()
input("按 Enter 键退出...")
import random
a=random.randint(1,100)
print('I have a random number between 1 and 100,hahaha!')
b=input('who are you?')

while True:
    c=int(input(f'hello {b}, what number you guess?'))
    if c==a:
        print('you are right!')
        break
    elif c<a:
        print('too small')
        continue
    else:
        print('too big')
        continue
input("按 Enter 键退出...")
"""
a=[1,'two',3,4,'X',9,'七','eight',9,'拾']
a[5]='six'
print(a)
del a[9]
print(a)
for i in a:
    print(i,end=' ')
else:
    print()
for i in a:
    print(i)
b=a[2:-3:1]
print(b)