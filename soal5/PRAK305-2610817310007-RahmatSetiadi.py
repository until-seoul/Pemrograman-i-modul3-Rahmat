second_total = int(input())
days = second_total // 86400  # 86400 detik dalam 1 hari
remaining = second_total % 86400

hours = remaining // 3600  # 3600 detik dalam 1 jam
remaining = remaining % 3600

minutes = remaining // 60
seconds = remaining % 60

if days > 0:
    print(f"{days} hari {hours:02d}:{minutes:02d}:{seconds:02d}")
else:
    print(f"{hours:02d}:{minutes:02d}:{seconds:02d}")
