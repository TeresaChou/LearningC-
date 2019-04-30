# Please complete the program so that when the users input his age, 
# the program will show the correspond priesthood office name and duties.

MP = 'N'

print("My priesthood officei")
age = input("Plesae enter your age: ")

if:   # TODO: complete this line
   # too young for priesthood
   print("You should be prepared to receive the Aronic Preisthood soon in the future!")
else :

   # check if he has recieved MP or not
   if:   # TODO: complete this line
      MP = input("Melchizedek Priesthood given(Y/N): ")

   # position
   position = ""
   # add your code here to change variable position to appropriate position name
   # ex: a deacon

   print("I'm ", position)

   priesthood = ""
   # add your code here to change variavle priesthood to either Aronic/Melchizedek

   print("I hold the", priesthood, "Priesthood.")

   # duties
   duty = "pass the sacrament"
   if age > 14:
      duty += ", prepare the sacrament"
   if age > 16:   
      duty += ", bless the sacrament, baptize people"
   if MP == 'Y' or MP == 'y':
      duty += ", give priesthood blessings and confirmations";
   print("I have the authority to", duty)
}
