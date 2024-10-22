import numpy as np

value = int(input("Enter your score : "))
if value >= 90:
    grade = "A"
elif value >= 80:
    grade = "B"
else:
    grade = "C"
    
print("Grade : %s" % grade)