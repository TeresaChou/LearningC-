# Please complete the program so that when the users input his age, 
# the program will show the correspond priesthood office name and duties.

MP = 'N'

print("My priesthood office")
age = input("Plese enter your age: ")
age=int(age)

if age<12 :  # TODO: complete this line
   # too young for priesthood
   print("You should be prepared to receive the Aronic Preisthood soon in the future!")
else :

   # check if he has recieved MP or not
   if age>=18:   # TODO: complete this line
      MP = input("Melchizedek Priesthood given(Y/N): ")
   
   if MP=='Y':
      HP = input("Was ordained to High Priest(Y/N):")
   


   # position
   if age>=12 and age<14 :
      position = "a deacon"
   if age>=14 and age<16 :
      position = "a teacher"
   if age >=16:
      position = "a priest"
   if MP=='Y'and HP == 'Y':
      position = "a High Priest"
   # add your code here to change variable position to appropriate position name
   # ex: a deacon

   print("I'm ", position)

   if age>=12 and MP !='Y':
      priesthood = "Aaronic"
   if age>=18 and MP == 'Y':
      priesthood = "Melchizedek"
   # add your code here to change variavle priesthood to either Aaronic/Melchizedek

   print("I hold the", priesthood, "Priesthood.")

   # duties
   duty = "pass the sacrament"
   if age > 14:
      duty += ", prepare the sacrament"
   if age > 16:   
      duty += ", bless the sacrament, baptize people"
   if MP == 'Y' or MP == 'y':
      duty += ", give priesthood blessings and confirmations"  ;
   
   print("I have the authority to", duty)
