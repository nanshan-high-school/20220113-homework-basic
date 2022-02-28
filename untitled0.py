import random
answertext=[]
inputtext=[]
while(0==0):
    file=open("world500.txt",mode="r")
    answernum=random.randint(0, 436)
    while(answernum>0):
        answernum=answernum-1
        a=file.readline()
    answer=file.readline()
    print(answer)
    for i in answer:
        answertext.append(i)
    point = 0
    point1 = 0
    text2=0
        

    for a in range(6):
        inputans=str(input("輸入5個字的英文單字"))  
        inputtext=[]
        for i in inputans:
            inputtext.append(i)
        if len(inputans)==5:
            for text in range(5):
                for text1 in range(5):
                    text2=text
                    if(inputtext[text1]==answertext[text]):
                        if(text1==text):
                            print('\033[1;32;1m'+inputtext[text1]+' \033[0m',end="")
                            point=point+1
                            point1=1
                        else:
                            print('\033[1;33;1m'+inputtext[text1]+' \033[0m',end="")
                            point1=1
                if(point1==0):
                        print(inputtext[text2],end="")
                else:
                        point1=0
            if(point==5):
                print('\033[1;32;1mVICTORY \033[0m',end="")
                break
            else:
                point=0
            
        else:
            print("WDF")
           
    break

#print(f"{bcolors.OK}File Saved Successfully!{bcolors.RESET}")
#print(f"{bcolors.WARNING}Warning: Are you sure you want to continue?{bcolors.RESET}")
#print(f"{bcolors.FAIL}Unable to delete record.{bcolors.RESET}")