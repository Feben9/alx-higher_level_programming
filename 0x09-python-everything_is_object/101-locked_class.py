#!/usr/bin/python3
"""
This is a module that prevents dynamically
creating new instance attributes
"""


class LockedClass():
    """ locked class """
    __slots__ = ['first_name']
