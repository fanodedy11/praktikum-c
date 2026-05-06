# input suhu Celsius
c = float(input("Masukkan suhu Celsius: "))

# konversi
k = c + 273.15
f = (9/5) * c + 32
r = (4/5) * c

# output
print("Hasil konversi:")
print("Kelvin     =", k)
print("Fahrenheit =", f)
print("Reamur     =", r)