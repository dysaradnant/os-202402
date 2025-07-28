# 📝 Laporan Tugas Akhir

**Mata Kuliah**: Sistem Operasi
**Semester**: Genap / Tahun Ajaran 2024–2025
**Nama**: `<Dysar Adnant Ilham Nur Asnawi>`
**NIM**: `<240202907>`
**Modul yang Dikerjakan**:
`(Contoh: Modul 1 – System Call dan Instrumentasi Kernel)`

---

## 📌 Deskripsi Singkat Tugas

Tuliskan deskripsi singkat dari modul yang Anda kerjakan. Misalnya:

* **Modul 1 – System Call dan Instrumentasi Kernel**:
  Menambahkan dua system call baru, yaitu `getpinfo()` untuk melihat proses yang aktif dan `getReadCount()` untuk menghitung jumlah pemanggilan `read()` sejak boot.
---

## 🛠️ Rincian Implementasi

* Menambahkan dua system call baru di file `sysproc.c` dan `syscall.c`
* Mengedit `user.h`, `usys.S`, dan `syscall.h` untuk mendaftarkan syscall
* Menambahkan struktur `struct pinfo` di `proc.h`
* Menambahkan counter `readcount` di kernel
* Membuat dua program uji: `ptest.c` dan `rtest.c`
---

## ✅ Uji Fungsionalitas

* `ptest`: untuk menguji `getpinfo()`
* `rtest`: untuk menguji `getReadCount()`
---

## 📷 Hasil Uji

Lampiran hasil uji berupa screenshot atau output terminal :

### 📍 Output `ptest`:

```
PID     MEM     NAME
1       12288   init
2       16384   sh
5       12288   ptest
```

### 📍 Output `rtest`:

```
Read Count Sebelum: 12
```

screenshot:

### 📍 Output `ptest`:
![hasil ptest](img width="1918" height="1079" alt="Screenshot 2025-07-28 194745" src="https://github.com/user-attachments/assets/cc884a43-f788-4f7e-ac21-84ab99ed477f" />
)

### 📍 Output `rtest`:
![hasil rtest](<img width="1919" height="1079" alt="Screenshot 2025-07-28 194909" src="https://github.com/user-attachments/assets/83a92bdf-6cdf-4e70-b71b-5f999443bbb6" />
)

## ⚠️ Kendala yang Dihadapi

Tuliskan kendala (jika ada),

---

## 📚 Referensi

Tuliskan sumber referensi yang Anda gunakan, misalnya:

* Buku xv6 MIT: [https://pdos.csail.mit.edu/6.828/2018/xv6/book-rev11.pdf](https://pdos.csail.mit.edu/6.828/2018/xv6/book-rev11.pdf)
* Repositori xv6-public: [https://github.com/mit-pdos/xv6-public](https://github.com/mit-pdos/xv6-public)
* Stack Overflow, GitHub Issues, diskusi praktikum

---
