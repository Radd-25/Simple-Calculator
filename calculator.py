print("Simple Calc v1.0")
Input1 = float(input("Input One: "))
Operator = input("Input Operator (+, -, *, /): ")
Input2 = float(input("Input Two: "))


if Operator == "+":
    Result = Input1 + Input2
elif Operator == "-":
    Result = Input1 - Input2
elif Operator == "*":
    Result = Input1 * Input2
elif Operator == "/":
    Result = Input1 / Input2
else:
    Result = "sys_error"
print("Result: " + str(Result))