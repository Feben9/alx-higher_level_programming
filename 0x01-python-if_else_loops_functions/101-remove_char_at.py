#!/usr/bin/python3
def remove_char_at(str, n):
    for x in range(len(str)):
        if x != n:
            print(str[x], end="")
    return("")
