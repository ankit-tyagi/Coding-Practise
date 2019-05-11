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
a^=b  #       a=a^b
print(a)
#>>=	Performs Bitwise right shift on operands and assign value to left operand	a>>=b     a=a>>b
#<<=	Performs Bitwise left shift on operands and assign value to left operand	a <<= b                    a= a << b