'''
sentence=input('输入一句话')
a=0
for i in sentence:
    print(i,end=' ')
    a+=1
    if a%5==0:
        print()
'''
#求1，100奇数和
a=0
for i in range(1,101,2):
    a+=i
else:
    print(a)
a=0
for i in range(1,101):
    if i%2==1:
        a+=i
else:
    print(a)
a=int(input('输入矩形的长'))
b=int(input('输入矩形的宽'))
c=0
for i in range(a):
    for j in range(b):
        print('*',end='')
    print()
