def main():
    testcases=int(input()) #testcases
    while(testcases>0):
        str=input()
        print(copyCat(str))
        testcases-=1

def copyCat(str):
    s = str[-2:]
    s=s+s+s
    return s


if __name__=='__main__':
    main()
