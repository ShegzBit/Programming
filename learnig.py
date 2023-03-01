# declare n and initialized it with zero
n =0
#creating a while loop to interate indefinitely till user's termination
while(True):
    #taking input from user
    v = int (input("Enter the nuber you plan to operate on: "))

    #squaring it
    v = v*v
   #adding it to the value of n
    n += v
    #printing the value of n
    print (str(n))

    #taking user choice on termination of code
    choice = input("Do you want to continue the operation?   (y/n) ")
    if (choice == "y"):
        continue
    elif (choice == "n"):
        print("The final result is " + str(n))
        break
    elif (choice.isnumeric()):
        continue
    else:
        print("Invalid choice terminating...")
        break