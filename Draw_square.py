i = 0
#Define a vertical line element
vert = "|"
#Define a horizontal line element 
hozn = "__"
space =" "
#take user input on length
length = int(input("Enter the length of the quadrilateral")) 
#Take user input on breadth
breadth = int(input("Enter the breadth of the quadrilateral"))
#print using loop the horizontal element in breadth times
print (hozn * breadth)
#print the vertical element in length times
while (i < length):
    print (vert + space * breadth * 2 + vert)
    i+=1
#print the horizontal element breadth times again
print (hozn * breadth)
