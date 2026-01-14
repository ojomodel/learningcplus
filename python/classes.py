class Employee:
    def __init__(self, first, last, pay): ## these are attributes of class
        self.first = first
        self.last = last
        self.pay = pay
        self.email = f"{first}.{last}@company.com"
    def fullname(self): #this is a method
        return f"{self.first} {self.last}" ## same as '{} {}'.format(emp_1.first, emp_1.last'

emp_1 = Employee("Frank", "Ocean", 100)
emp_2 = Employee("Peter", "Bot", 100)
print(emp_1)
print(emp_2)
print('{} {}'.format(emp_1.first, emp_1.last)) #emp_1.first fills the first {} so its {emp_1.first} so emp_1.last fills the second {} so its {emp_1.last}
print(emp_1.fullname()) # this is easier than the line above