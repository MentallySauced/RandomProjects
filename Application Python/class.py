class BankAccount:
    
    # Parameters
    Id = 0
    balance = 0

    # Constructor for the class
    def __init__(self, a, b):
        self.Id = a
        self.balance = b


    # Deposit Function
    def Deposit(self, a):

        # Quick maths for addition
        self.balance = self.balance + a

        # Print new balance
        print("New balance after deposit:", self.balance)

        # Return balance even though I don't know what to do with it
        return(self.balance)
        
    
    # Withdraw function
    def Withdraw(self, a):

        # Quick maths for subtraction
        self.balance = self.balance - a

        # Print new balance
        print("New balance after withdrawl:", self.balance)
        
        # Return balance even though I don't know what to do with it
        return(self.balance)

# Creating 2 accounts
account1 = BankAccount(1234, 400)
account2 = BankAccount(5678, 500)

# Using methods, account1 first
account1.Deposit(100)
account1.Withdraw(200)

account2.Deposit(500)
account2.Withdraw(1000)