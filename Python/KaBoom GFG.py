def main():
    testcases=int(input()) #testcases
    while(testcases>0):
        str=input()
        print(boom(str))
        testcases-=1

def boom(str):
    return True if str.endswith('boom') else False

if __name__=='__main__':
    main()
