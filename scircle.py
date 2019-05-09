import turtle  
my_turtle = turtle.Turtle() 
def square(length, angle): 
	for i in range(4): 
		my_turtle.forward(length) 
		my_turtle.right(angle)
for i in range(100):
	square(100, 90)
	my_turtle.right(10)