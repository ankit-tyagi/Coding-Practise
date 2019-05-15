print('ankit tyagi\n asd')
price = 10
rating = 5.5
print(price * rating)

name = input('what is your name? ')

print(name)


command = ""
while True:
    command = input("Please give your command").lower()
    if command == "start":
        print ("Car is started")
    elif command == "stop":
        print("Car is stopped")
    elif command == "help":
        print("""
        start = to start the car
        stop  = to stop  the car
        quit  = to quit        
        """)
    elif command == 'quit':
        print("Good Choice")
        break
    else:
        print("Sorry wrong choice.")

