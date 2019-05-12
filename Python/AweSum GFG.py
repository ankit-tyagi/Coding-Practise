def main():
    testcases=int(input()) #testcases
    while(testcases>0):
        a=int(input())
        b=int(input())
        print(aweSum(a,b))
        testcases-=1

def aweSum(a, b):
    if((a+b)>19 and (a+b)<41):
        return 42
    else:
        return a+b
        


if __name__=='__main__':
    main()
