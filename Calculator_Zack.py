import math


def basic():
    # =============================================================================
    #     +     for a + b
    #     -     for a - b
    #     /     for a / b
    #     *     for a * b
    # =============================================================================

    op = input(
        'What kind of operation would you like to do?\
        \nChoose between "+, -, *, /" : ')

    a = int(input('Please type the first number: '))
    b = int(input('Please type the second number: '))

    if op == '+':
        return str(a) + ' ' + op + ' ' + str(b) + ' = ' + str(a + b)
    elif op == '-':
        return str(a) + ' ' + op + ' ' + str(b) + ' = ' + str(a - b)
    elif op == '*':
        return str(a) + ' ' + op + ' ' + str(b) + ' = ' + str(a * b)
    elif op == '/':
        if b == 0:
            return 'Error: Cannot be divided by 0'
        else:
            return str(a) + ' ' + op + ' ' + str(b) + ' = ' + str(a / b)
    else:
        return "Incorrect operator! Please select from the given options!"


def scientific():
    # =============================================================================
    #     ^     for a ^ b
    #     %     for a mod b
    #     r     for the bth root of a (a ^ (1/b))
    #     !     for a factorial
    #     sin   for sin(a) in radians
    #     cos   for cos(a) in radians
    #     tan   for tan(a) in radians
    #     ln    for ln(a) (log base e of a)
    # =============================================================================

    op = input(
        'What kind of operation would you like to do?\
        \nChoose between "^, r, %, !, sin, cos, tan, ln" : ')

    if op in '^r%':
        a = int(input('Please type the first number: '))
        b = int(input('Please type the second number: '))
    elif op in '!sincostanln':
        a = int(input('Please type the number: '))
    else:
        print('Please enter valid operation')    # Your solution here
    
    # Essentially taking the basic calculator logic and applying it to here
    if op == 'r':
        return str(a) + ' ' + op + ' ' + str(b) + ' = ' + str(a ** (1 / b))
    elif op == '^':
        return str(a) + ' ' + op + ' ' + str(b) + ' = ' + str(a ** b)
    elif op == '%':
        return str(a) + ' ' + op + ' ' + str(b) + ' = ' + str(a % b)
    elif op == '!':
        # Need to make a counter for the while loop and a new variable for the answer so I can still print the input without issue 
        answer = a
        counter = a
        answer = 1
        while counter > 1:
            answer *= counter 
            counter = counter - 1  
        return '!' + str(a) + ' = ' + str(answer)
    elif op == 'sin':
        return 'sin(' + str(a) + ') = ' + str(math.sin(a))
    elif op == 'cos':
        return 'cos(' + str(a) + ') = ' + str(math.cos(a))
    elif op == 'tan':
        return 'tan(' + str(a) + ') = ' + str(math.tan(a))
    elif op == 'ln':
        # For some reason won't work unless I put it like this, or it will but this did work so I left it
        return math.log(a)
    else:
        return 'Enter a valid operation.'

     

def main():  # Wrapper function

    print("""Choose a calculator
    1. Basic Calculator
    2. Scientific Calculator""")
    choice = int(input('Please choose as 1 or 2: '))

    if choice == 1:
        print(basic())
    elif choice == 2:
        print(scientific())
    else:
        print('Invalid choice! Please select between 1 and 2:')


if __name__ == '__main__':
    main()