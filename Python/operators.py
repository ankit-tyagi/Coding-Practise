#Arithmetic Operators
print("Arithmetic Operators : ")

a = 9
b = 4

# Addition of numbers
add = a + b
# Subtraction of numbers 
sub = a - b
# Multiplication of number 
mul = a * b
# Division(float) of number 
div1 = a / b
# Division(floor) of number 
div2 = a // b
# Modulo of both number
mod = a % b

# print results
print(add)
print(sub)
print(mul)
print(div1)
print(div2)
print(mod)


#Relational Operators

print("Relational Operators")
# a > b is False
print(a > b)

# a < b is True
print(a < b)

# a == b is False
print(a == b)

# a != b is True
print(a != b)

# a >= b is False
print(a >= b)

# a <= b is True
print(a <= b)


print("Logical Operators")

# Examples of Logical Operator
c = True
d = False

# Print c and d is False
print(c and d)

# Print c or d is True
print(c or d)

# Print not c is False
print(not c)





#Bitwise operators

print("Bitwise operators")
print("a = " , a , "  b = ", b)
# Print bitwise AND operation  
print(a & b)

# Print bitwise OR operation
print(a | b)

# Print bitwise NOT operation 
print(~a)

# print bitwise XOR operation 
print(a ^ b)

# print bitwise right shift operation 
print(a >> 2)

# print bitwise left shift operation 
print(a << 2)


#Assignment operators:

print("Assignment operators:")
print("a = " , a , "  b = ", b)
a+=b    # a=a+b
print(a)
a-=b    #   a=a-b
print(a)
a*=b    #   a=a*b
print(a)
a/=b    #     a=a/b
print(a)
a%=b   #    a=a%b
print(a)
a=9
b=4
a//=b   #    a=a//b
print(a)
a=9
a**=b   #  a=a**b
print(a)
a=9 
b=4
a&=b   #  a=a&b
print(a)
a=9
a|=b   #      a=a|b
print(a)
a=9
a^=b  #       a=a^b     Exclusive XOR
print(a)
a=9
a>>=b  #    a=a>>b bitwise right operator
print(a)
a=9
a <<= b     #        a= a << b   bitwise left operator
print(a)


#Special operators
# is          True if the operands are identical 
# is not      True if the operands are not identical 
# Examples of Identity operators

print("Identity Operators")
a1 = 3
b1 = 3
a2 = 'GeeksforGeeks'
b2 = 'GeeksforGeeks'
a3 = [1,2,3]
b3 = [1,2,3]


print(a1 is not b1)


print(a2 is b2)

# Output is False, since lists are mutable.
print(a3 is b3)

# in            True if value is found in the sequence
# not in        True if value is not found in the sequence

x = 'Geeks for Geeks'
y = {3:'a',4:'b'}


print('G' in x)

print('geeks' not in x)

print('Geeks' not in x)

print(3 in y)

print('b' in y)

