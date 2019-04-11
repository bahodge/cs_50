#!/usr/bin/env python3


class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age


ben = Person("Ben", 28)

print(ben.age)
print(ben.name)

print('This line doesnt have a new line', end="")
