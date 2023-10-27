from cs50 import get_string

# Prompt user to agree
s = get_string("Agree y/n? ")

# Check whether agreed
if s == "Y" or s == "y":
    print("Agreed")
elif s == "N" or s == "n":
    print("Not agreed")

# oop
if s.lower() in ["y", "yes"]