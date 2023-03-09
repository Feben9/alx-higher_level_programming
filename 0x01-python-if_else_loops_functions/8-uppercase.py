#!/usr/bin/python3
def uppercase(str):
    for x in range(len(str)):
        if ord(str[x]) in range(97, 123):
            print("{:s}".format(chr(ord(str[x])-32)), end="")
        else:
            print("{:s}".format(str[x]), end="")
    print()
