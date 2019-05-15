import re

def main():
    testcases=int(input()) #testcases
    while(testcases>0):
        str=input()
        imgExtracter(str)
        testcases-=1
        
def imgExtracter(str):
    pat=r'www.+jpg'
    match=re.search(pat,str)
    if(match):
        print(match.group())
    else:
        print(-1)


if __name__=='__main__':
    main()
