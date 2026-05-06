# input jumlah data
n = int(input("Masukkan jumlah data: "))

total = 0

# input nilai satu per satu
for i in range(n):
    nilai = float(input(f"Nilai ke-{i+1}: "))
    total += nilai

# hitung rata-rata
rata_rata = total / n

# output
print("Rata-rata =", rata_rata)