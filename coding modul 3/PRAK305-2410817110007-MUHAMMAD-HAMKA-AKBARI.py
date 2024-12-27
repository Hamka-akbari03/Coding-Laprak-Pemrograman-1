def convert_time(detik):
    hari = detik // 86400           # 1 day = 86400 seconds
    detik %= 86400
    jam = detik // 3600             # 1 hour = 3600 seconds
    detik %= 3600
    menit = detik // 60             # 1 minute = 60 seconds
    detik %= 60

    if hari > 0:
        # If there are days, print the format with "hari"
        print(f"{hari} hari {jam:02d}:{menit:02d}:{detik:02d}")
    else:
        # If there are no days, print only the "hh:mm:ss" format
        print(f"{jam:02d}:{menit:02d}:{detik:02d}")   # :04d = 0000 

if __name__ == "__main__":
    detik = int(input("Masukkan jumlah detik: "))
    convert_time(detik)