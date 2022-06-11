#   PROBLEM
#   using your knowledge about python variables, declare some which contain 
#   the following things: "ciao", a float with value of "68.0" and an integer 
#   with value "419"
#   note: the correctness of the newly assigned values will be checked

mystring = "ciao"
myfloat = 68.0
myint = 419

#   code testing
if mystring == "ciao":
    print("String: %s" % mystring)
else:
    print("Not valid")
if isinstance(myfloat, float) and myfloat == 68.0:
    print("Float: %f" % myfloat)
else:
    print("Not valid")
if isinstance(myint, int) and myint == 419:
    print("Integer: %d" % myint)
else:
    print("Not valid")

#   SOLUTION
#   strings in python are flexible and can be defined either with a quote or
#   a double quote, floats are always appended with a .0