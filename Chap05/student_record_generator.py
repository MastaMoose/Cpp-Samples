# -*- coding: utf-8 -*-
"""
Author: Mustafa Sheikh
Date: April 2nd, 2018
Purpose: to generate a 
Input: Parameter to define no of students
Output: File named Student_Records.txt
    That can holds records for set number
    of students
"""
import string
import random

def name_generator(size = 6, chars=string.ascii_uppercase+string.digits):
    #returns a random string of size characters in uppercase
    return ''.join(random.choice(chars) for _ in range(size))

def number_generator(UpperLim, LowerLim = 0):
    #a random integer with lowerlim and specified upperlimit
    return random.randint(LowerLim, UpperLim)

def create_student_records(StudentNo, MaxGrades, 
                           FileName = "Student_Records.txt"):
    #creates a file named "Student_Records.txt" that has a randomly named
    #records of students with randomly assigned grades.
    #takes in Number of students wanted as StudentNo
    #and also takes in MaxGrades which is Max number of grades
    #also takes in the name of the file
    
    Max = 100 #this is the maximum grade attainable
    MinGrades = 3 #this is the minimum number of grades required
    file = open(FileName, "w+")
    for Students in range(StudentNo+1):
        file.write(name_generator()+" ")
        for Grades in range(number_generator(MaxGrades, MinGrades)+1):
            file.write(str(number_generator(Max))+" ")
        file.write("\n")
    
    file.close()

def main():
    create_student_records(10, 20, "Student_Records_SHORT.txt")
    create_student_records(1000, 20,"Student_Records2.txt" )
    create_student_records(10000, 20, "Student_Records_LONG.txt")

if __name__=="__main__":
    main()