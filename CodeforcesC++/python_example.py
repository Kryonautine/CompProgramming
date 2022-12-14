#!/usr/bin/python
"""
Better way to code in python is by implementation of Rust
principles in Python.
"""

def fn1(a: int) -> int:
    return a**a

def main():
    a: int = 3
    print(fn1(a))

if __name__ == "__main__":
    main()
