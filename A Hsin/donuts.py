# this program shows how while loop can be used

number = 0
total = 5

while number < total:
   number += 1
   donut = 'donuts' if number > 1 else 'donut'
   print('I ate', number, donut)

print('There are no more donuts')