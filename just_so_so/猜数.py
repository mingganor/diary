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