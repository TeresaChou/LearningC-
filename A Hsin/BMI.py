# You homework is to finish a program that will:
# 1. Ask the user for his/her name
# 2. Ask for his/her age
# 3. Ask for his/her height
# 4. Ask for his/her weight
# 5. Print out a line to tell the user his/her BMI.
# ex: Hi, A Hsin. You are 21 years-old and your BMI is 20.1.
# Remember to notice the user type in their information with correct unit (cm/m, kg)
# BMI is your weight(kg) divided by the square of your height(m)

name = input("What is your name? ")
print("Hi",name,":)")
age = input("What is your age? ")
print("Great! Now I'm going to help you to know your BMI.")
input()
height = input("Well, tell me your height.(unit:m)")
print("Thank you. ")
weight = input("And then what is your weight?(unit:kg) ")
print("Good job. Now press ENTER and you'll see your BMI.")
input()
print(name,"your BMI is",( float(weight) / (float(height)*float(height))))