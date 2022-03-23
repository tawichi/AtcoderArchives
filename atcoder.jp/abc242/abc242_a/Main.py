#!/usr/bin/env python3
import io
import sys

_INPUT = """\
30 500 20 103
"""

A,B,C,X = list(map(int, input().split()))
if X<=A:
    print(1)
elif A+1<=X<=B:
    print(C/(B-(A+1)+1))
else:
    print(0)
