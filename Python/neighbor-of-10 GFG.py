def main():
    testcases=int(input()) #testcases
    while(testcases>0):
        n=int(input())
        print(isNeighbor(n))
        testcases-=1
        
def isNeighbor(num):
    n = num%10
    if((n==0) or (n==1) or (n==2) or (n==8) or (n==9)):
        return True
    else:
        return False

if __name__=='__main__':
    main()
