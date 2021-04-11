#partially AC Code
t = int(input())
while t > 0: 
    t = t-1
    s = input()
    for n in range(0,10000):
        binary = bin(n).replace("0b","")
        i = j = 0
        for i in range(0,len(s)):
            if j < len(binary) and s[i] == binary[j] : 
                j += 1
        if(j < len(binary)) :
            print(binary)
            break
              
