   
    
def main():
    testcases=int(input()) #testcases
    while(testcases>0):
        d=int(input()) ##taking d as input
        m=int(input()) ## taking mean of 3 numbers
        print(mean(d,m))
        testcases-=1
        



''' Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above. '''

#User function Template for python3
def mean(d,m):
    total = m *3
    total = d + total
    me = total//4
    return me



if __name__=='__main__':
    main()