import math

def hitung(a, b, c, d):
    hasil1 = a - c
    hasil2 = b - d
    return hasil1, hasil2

def mutlak(hasil1, hasil2):
    nilai_mutlak = abs(hasil1) + abs(hasil2)
    return nilai_mutlak

# Input nilai a, b, c, d
a, b, c, d = map(int, input().split())

# Hitung hasil1 dan hasil2
hasil1, hasil2 = hitung(a, b, c, d)

# Cetak nilai mutlak
print("Nilai mutlak adalah:", mutlak(hasil1, hasil2))

