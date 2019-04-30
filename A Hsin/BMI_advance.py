# This is your home work from last time
# Now you need to modify this program, so that it can be used by many users.
# That is, after a user gets his/her BMI, the program ask if the user wants to continue.
# If yes, then everything will start up again.
# You should also add the feature of noticing the user if his/her is over-weighted
# BMI ideal standard: 18.5 <= ideal < 24

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