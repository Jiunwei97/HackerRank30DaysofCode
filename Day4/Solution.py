class Person:
    def __init__(self,initialAge):
        # Add some more code to run some checks on initialAge
        if(age<0):
            print("Age is not valid, setting age to 0.")
            self.age=0
        else:
            self.age=initialAge

    def amIOld(self):
        # Do some computations in here and print out the correct statement to the console
        if(self.age<13):
            print("You are young.")
        elif(13<=self.age<18):
            print("You are a teenager.")
        else:
            print("You are old.")
    def yearPasses(self):
        self.age=self.age+1
        # Increment the age of the person in here

t = int(input())