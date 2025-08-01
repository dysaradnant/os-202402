
# 📝 Laporan Tugas Akhir

**Mata Kuliah**: Sistem Operasi
**Semester**: Genap / Tahun Ajaran 2024–2025
**Nama**: `<Dysar Adnant Ilham Nur Asnawi>`
**NIM**: `<240202907>`
**Modul yang Dikerjakan**:
` Modul 4 – Subsistem Kernel Alternatif (xv6-public)`

---

## 📌 Deskripsi Singkat Tugas

* **Modul 4 — Subsistem Kernel Alternatif (xv6-public)**:

* Implementasi syscall chmod(path, mode) untuk mengatur mode file (read-only atau read-write) secara sederhana.
* Menambahkan driver pseudo-device /dev/random untuk menghasilkan byte acak.

---

## 🛠️ Rincian Implementasi
  A. System Call chmod()
* Menambahkan Field mode ke struct inode di `fs.h`
* Menambahkan syscall chmod() di `syscall.h`, `user.h`, `usys.S`, `syscall.c`
* Menambahkan fungsi sys_chmod di `sysfile.c`
* Menambahkan fungsi filewrite() di `file.c`
* Membuat program uji: `chmodtest.c` difolder root
* Menambahkan program uji `chmodtest.c` di `Makefile`
  
  B. Device Pseudo /dev/random
* Menambahkan file baru `random.c` di folder root xv6
* Registrasi device driver di `file.c` dan dibagian devsw[]
* Menambahkan Device Node /dev/random di `init.c
* Membuat program uji: `randomtest.c` difolder root xv6
* Menambahkan program uji `shmtest.c` di `Makefile`
---

## ✅ Uji Fungsionalitas

* `chmodtest`: menguji syscall baru chmod(path, mode) yang mengubah mode file menjadi read-only (1) atau read-write (0).
* `randomtest`: menguji pseudo-device /dev/random yang menghasilkan byte acak dari driver random.c.
---

## 📷 Hasil Uji

Lampiran hasil uji berupa screenshot atau output terminal :

### 📍 Output `chmodtest`:

```
$ chmodtest
Write blocked as expected
```
### 📍 Output `randomtest`:

```
$ randomtest
cannot open /dev/random
```
screenshot:

### 📍 Output `chmodtest`:

<img width="1919" height="1079" alt="Screenshot 2025-08-01 193954" src="https://github.com/user-attachments/assets/1cc7a668-14eb-495b-b158-17a6811cfe61" />


### 📍 Output `randomtest`:
<img width="1919" height="1079" alt="Screenshot 2025-08-01 194103" src="https://github.com/user-attachments/assets/0abc435f-f692-4502-81a6-e3911a4c1565" />


## ⚠️ Kendala yang Dihadapi

Tuliskan kendala (jika ada),
Pengujian randomtest : Program gagal open("/dev/random") → biasanya karena /dev/random tidak dibuat.

---

## 📚 Referensi

Tuliskan sumber referensi yang Anda gunakan, misalnya:

* Buku xv6 MIT: [https://pdos.csail.mit.edu/6.828/2018/xv6/book-rev11.pdf](https://pdos.csail.mit.edu/6.828/2018/xv6/book-rev11.pdf)
* Repositori xv6-public: [https://github.com/mit-pdos/xv6-public](https://github.com/mit-pdos/xv6-public)
* Stack Overflow, GitHub Issues, diskusi praktikum

---
