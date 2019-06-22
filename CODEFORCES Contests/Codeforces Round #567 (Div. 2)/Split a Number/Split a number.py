x = int(input())
li_t = list(input())
len1 = len(li_t)
len1 = len1//2

li_t1 = li_t[:len1]
li_t2 = li_t[len1:]
i = 0
if li_t1[-1]=='0' and li_t2[0] == '0':
    while i<=(len(li_t2)-1) and li_t2[i]=='0' :
        i+=1
    li_t1 = li_t[:len1+i]
    li_t2 = li_t[len1+i:]
    if li_t1 != []:
        li_t1 = (int)("".join(li_t1))
    else:
        li_t1 = 0
    if li_t2 != []:
        li_t2 = (int)("".join(li_t2))
    else:
        li_t2 = 0
    ans1 = li_t1+li_t2
    
 
    li_t1 = li_t[:len1]
    li_t2 = li_t[len1:]
    i = -1
    while i>=((-1)*(len(li_t1))) and li_t1[i]=='0' :
        i-=1
    li_t1 = li_t[:len1+i]
    li_t2 = li_t[len1+i:]
    if li_t1 != []:
        li_t1 = (int)("".join(li_t1))
    else:
        li_t1 = 0
    if li_t2 != []:
        li_t2 = (int)("".join(li_t2))
    else:
        li_t2 = 0
    ans2 = li_t1+li_t2

    
elif li_t2[0] == '0':
        
    i= 0
    
    while i<=(len(li_t2)-1) and li_t2[i]=='0' :
        i = i+1
    

    li_t1 = li_t[:len1+i]
    li_t2 = li_t[len1+i:]
    if li_t1 != []:
        li_t1 = (int)("".join(li_t1))
    else:
        li_t1 = 0
    if li_t2 != []:
        li_t2 = (int)("".join(li_t2))
    else:
        li_t2 = 0
    ans1 = li_t1+li_t2
    

    li_t1 = li_t[:len1]
    li_t2 = li_t[len1:]
    
        
    try:
        i = -1
        li_t1 = li_t[:len1+i]
        li_t2 = li_t[len1+i:]
        if li_t1 != []:
            li_t1 = (int)("".join(li_t1))
        else:
            li_t1 = 0
        if li_t2 != []:
            li_t2 = (int)("".join(li_t2))
        else:
            li_t2 = 0
        ans2 = li_t1+li_t2
 
    except:
        ans2 = 0
elif li_t1[-1] == '0':
    i= -1
    while i>=(-1)*(len(li_t1)) and li_t1[i] == '0':
        i = i-1
    li_t1 = li_t[:len1+i]
    li_t2 = li_t[len1+i:]
    if li_t1 != []:
        li_t1 = (int)("".join(li_t1))
    else:
        li_t1 = 0
    if li_t2 != []:
        li_t2 = (int)("".join(li_t2))
    else:
        li_t2 = 0
    ans1 = li_t1+li_t2
    li_t1 = li_t[:len1]
    li_t2 = li_t[len1:]
    i = 1
    li_t1 = li_t[:len1+i]
    li_t2 = li_t[len1+i:]
    if li_t1 != []:
        li_t1 = (int)("".join(li_t1))
    else:
        li_t1 = 0
    if li_t2 != []:
        li_t2 = (int)("".join(li_t2))
    else:
        li_t2 = 0
    ans2 = li_t1+li_t2
else:
    i = 0
    li_t1 = li_t[:len1+i]
    li_t2 = li_t[len1+i:]
    if li_t1 != []:
        li_t1 = (int)("".join(li_t1))
    else:
        li_t1 = 0
    if li_t2 != []:
        li_t2 = (int)("".join(li_t2))
    else:
        li_t2 = 0
    ans1 = li_t1+li_t2
    i = 1
    
    li_t1 = li_t[:len1+i]
    li_t2 = li_t[len1+i:]
    if li_t1 != []:
        li_t1 = (int)("".join(li_t1))
    else:
        li_t1 = 0
    if li_t2 != []:
        li_t2 = (int)("".join(li_t2))
    else:
        li_t2 = 0
    ans2 = li_t1+li_t2

if ans1>ans2:
    
    print(ans2)
else:
    
    print(ans1)

