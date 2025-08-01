
# 📝 Laporan Tugas Akhir

**Mata Kuliah**: Sistem Operasi
**Semester**: Genap / Tahun Ajaran 2024–2025
**Nama**: `<Dysar Adnant Ilham Nur Asnawi>`
**NIM**: `<240202907>`
**Modul yang Dikerjakan**:
`(Modul 2 – System Call dan Instrumentasi Kernel)`

---

## 📌 Deskripsi Singkat Tugas

* **Modul 3 — Manajemen Memori Tingkat Lanjut (xv6-public x86)**:

  Copy-on-Write (CoW) Fork:
* Fork tidak lagi menyalin semua memori secara langsung.
* Halaman berbagi read-only; salin dilakukan hanya saat write (via page fault).
* Gunakan reference count untuk manajemen memori fisik.

  Shared Memory ala System V:
* void* shmget(int key)
* int shmrelease(int key)
* Memungkinkan antar proses berbagi 1 halaman dengan sistem refcount

---

## 🛠️ Rincian Implementasi
 A. Implementasi Copy-on-Write Fork (CoW)
* Menambahkan ref_count[] dan fungsi incref/decref di `vm.c`
* Menambahkan PTE_COW di `mmu.h`
* Modifikasi copyuvm() → cowuvm() di `vm.c`
* Mengubah fork() np->pgdir = copyuvm menjadi np->pgdir = cowuvm di `proc.c`
* Menangani Page Fault T_PGFLT di `trap.c`
* Membuat program uji: `cowtest.c` difolder root
* Menambahkan program uji `cowtest.c` di `Makefile`
 B. Implementasi Shared Memory ala System V
* Menambahkan struktur di vm.c
* Menambahkan shmget() di `sysproc.c`
* Menambahkan shmrelease() di `sysproc.c`
* Registrasi syscall di `syscall.h`, `syscall.c`, `user.h`, `usys.S`
* Membuat program uji: `shmtest.c` difolder root
* Menambahkan program uji `shmtest.c` di `Makefile`
---

## ✅ Uji Fungsionalitas

* `cowtest`(Copy-on-Write Fork): Memastikan bahwa fork() tidak menyalin seluruh memori anak dan induk, tetapi berbagi halaman secara read-only sampai terjadi penulisan oleh salah satu proses.
* `shmtest`(Shared Memory ala System V): Memastikan bahwa dua proses (parent dan child) dapat berbagi halaman memori menggunakan shmget(key) dan memodifikasi data yang terlihat oleh keduanya.
---

## 📷 Hasil Uji

Lampiran hasil uji berupa screenshot atau output terminal :

### 📍 Output `cowtest`:

```
$ cowtest
Child sees: Y
Parent sees: X
```
### 📍 Output `shmtest`:

```
Child reads: A
Parent reads: P
```
screenshot:

### 📍 Output `cowtest`:
![hasil cowtest](<img width="1919" height="1079" alt="Screenshot 2025-08-01 101055" src="https://github.com/user-attachments/assets/4dea4e1a-d587-436f-8a7d-4582e0f59898" />
)

### 📍 Output `shmtest`:
![hasil shmtest](<img width="1919" height="1079" alt="Screenshot 2025-08-01 100703" src="https://github.com/user-attachments/assets/d7b42f80-0493-45fb-bd8a-22d12a4d8804" />
>
)

## ⚠️ Kendala yang Dihadapi

Tuliskan kendala (jika ada),
* Segmentation fault / invalid page fault → Cek handler di trap.c atau walkpgdir().
* Nilai salah terbaca → Pastikan mappages() benar (alamat virtual unik).
* Shared memory tidak persist → Pastikan refcount dikelola dan halaman kalloc() tidak langsung di-free.


---

## 📚 Referensi

Tuliskan sumber referensi yang Anda gunakan, misalnya:

* Buku xv6 MIT: [https://pdos.csail.mit.edu/6.828/2018/xv6/book-rev11.pdf](https://pdos.csail.mit.edu/6.828/2018/xv6/book-rev11.pdf)
* Repositori xv6-public: [https://github.com/mit-pdos/xv6-public](https://github.com/mit-pdos/xv6-public)
* Stack Overflow, GitHub Issues, diskusi praktikum

---
