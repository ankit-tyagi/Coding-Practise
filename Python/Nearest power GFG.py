#Position this line where user code will be pasted.
import math
    
def main():
    testcases=int(input()) #testcases
    while(testcases>0):
        a=int(input())
        b=int(input())
        print(nearestPower(a,b))
        testcases-=1




def nearestPower(a,b):
    x=math.floor(math.log(b,a))
    xPlusOne=x+1
    number1=a**x
    number2=a**xPlusOne
    if(abs(number1-b)>abs(number2-b)):
        return number2
    else:
        return number1


        
if __name__=='__main__':
    main()