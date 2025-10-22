# Bank account (Constructor and Methods)

import sys

class bankAccount:
    def __init__(self,name,accno,balance=0):
        self.name=name
        self.accno=accno
        self.balance=balance
    def disp(self):
        print("\nAccount Owner: %s" %(self.name))
        print("Acoount Number: %d" %(self.accno))
        print("Account Balance: %d" %(self.balance))
    def deposit(self,amount):
        if(amount>0):
            self.balance=self.balance+amount
            print("Amount Rs.%d deposited successfully\n" %(amount))
        else:
            print("Enter an amount greater than 0\n")
    def withdraw(self,amount):
        if(amount<=self.balance):
            self.balance=self.balance-amount
            print("Amount Rs.%d withdrawn successfully\n" %(amount))
        else:
            print("Insufficient Balance\n")
    def chkBal(self):
        print("Account Balance: Rs.%d\n" %(self.balance))

print("\nBank Account Manager\n")
accno=int(input("Enter the Account Number: "))
accow=input("Enter the Account Owner Name: ")
acc1=bankAccount(accow,accno)

while 1:
    print("\n1.Display Account Details\n2.Deposit Amount\n3.Withdraw Amount\n4.Check Balance\n5.Close")
    choice=int(input("Enter a choice: "))
    if(choice==1):
        acc1.disp()
    elif(choice==2):
        acc1.deposit(int(input("Enter the amount to deposit: ")))
    elif(choice==3):
        acc1.withdraw(int(input("Enter the amount to withdraw: ")))
    elif(choice==4):
        acc1.chkBal()
    elif(choice==5):
        sys.exit(0)
    else:
        print("Invalid option\n")
