# overview02.py
#

class Pithari():
    def __init__(self, a, b, c):
        self._num_of_fruits = a
        self._num_of_biscuits = b
        self._num_of_pies = c

    def show_content(self):
        print(self._num_of_fruits, " fruits\n", self._num_of_biscuits, " biscuits\n", self._num_of_pies, " pies\n")

class Pontikaras():
    def __init__(self):
        self._hungry = True
        self._weight = 2    # kilos

# create objects
obj00 = Pithari(50,86, 12)

# create a method
def eat_from(self, Pith):
    if (self._hungry):
        Pith._num_of_fruits -= 2
        Pith._num_of_biscuits -= 3
        Pith._num_of_pies -= 1

        self._hungry = False
        self._weight += 3

        print("\n", self._name, " just ate from pithos\n")


print("Pithari before:\n")
obj00.show_content();

objX = Pontikaras()
objX._name = "Mitsaras"
objX.eat_from = eat_from.__get__(objX)
objX.eat_from(obj00)

# 01 --------->>>

# <<<--------- 01

# 02 --------->>>

# <<<--------- 02

# 03 --------->>>

# <<<--------- 03

# 04 --------->>>

# <<<--------- 04

# 05 --------->>>

# <<<--------- 05

# 06 --------->>>

# <<<--------- 06

# 07 --------->>>

# <<<--------- 07

# 08 --------->>>

# <<<--------- 08

# 09 --------->>>

# <<<--------- 09

# 10 --------->>>

# <<<--------- 10

print("Pithari after:\n")
obj00.show_content();
