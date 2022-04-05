#!/usr/bin/env python3
import numpy as np
import sys
input = sys.stdin.buffer.readline

H, W = map(int, input().split())
A = np.array([input().split() for _ in range(H)], dtype=np.int64)
row = A.sum(axis=1)
col = A.sum(axis=0)

ans = np.add.outer(row, col) - A
for a in ans.tolist():
    print(*a)