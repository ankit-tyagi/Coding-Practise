def main():
    testcases=int(input()) #testcases
    while(testcases>0):
        str=input()
        print(doge_count(str))
        testcases-=1


def doge_count(str):
  if(len(str)<4):
    return 0
  count=0
  for i in range(0,len(str)-3,1):
    if(str[i:i+2]=="do" and str[i+2]>='a' and str[i+2]<='z' and str[i+3]=='e'):
      count+=1
  return count


          
if __name__=='__main__':
    main()
