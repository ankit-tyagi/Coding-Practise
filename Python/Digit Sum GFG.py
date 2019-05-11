
#Initial Template for Python 3
#Position this line where user code will be pasted.
def main():
    testcases=int(input()) #testcases
    while(testcases>0):
        a=int(input())
        print(digitsSum(a))
        testcases-=1
        



''' Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above. '''

#User function Template for python3
def digitsSum(n):
    total = 0
    while(n>0):
        digit = n%10
        total+= digit
        n=n//10
    #print(total)
    return(total)
    ##Your code here

if __name__=='__main__':
    main()