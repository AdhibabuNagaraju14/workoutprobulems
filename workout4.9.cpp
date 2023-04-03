#include<stdio.h>
class Point:
    def init (self, x, y):
        self.x = x
        self.y = y
x1 = float(input("Enter x-coordinate for point 1: "))
y1 = float(input("Enter y-coordinate for point 1: "))
x2 = float(input("Enter x-coordinate for point 2: "))
y2 = float(input("Enter y-coordinate for point 2: "))
p1 = Point(x1, y1)
p2 = Point(x2, y2)
distance = math.sqrt((p2.x - p1.x) ** 2 + (p2.y - p1.y) ** 2)
print("The distance between point 1 and point 2 is:", distance)

