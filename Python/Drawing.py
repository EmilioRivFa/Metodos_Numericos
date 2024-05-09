from turtle import *

bgcolor ("black")
speed(0)
hideturtle()

for i in range(120):
    color("blue")
    circle(i)
    color("green")
    circle(i*1)
    right(3)
    forward(3)
    
done()