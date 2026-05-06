nilai = []

for i in range(5):
    n = float(input(f"Masukkan nilai ke-{i+1}: "))
    nilai.append(n)

rata_rata = sum(nilai) / len(nilai)

print("Daftar nilai:", nilai)
print("Rata-rata:", rata_rata)