
# 📝 Laporan Tugas Akhir

**Mata Kuliah**: Sistem Operasi
**Semester**: Genap / Tahun Ajaran 2024–2025
**Nama**: `<Dysar Adnant Ilham Nur Asnawi>`
**NIM**: `<240202907>`
**Modul yang Dikerjakan**:
`(Contoh: Modul 2 – System Call dan Instrumentasi Kernel)`

---

## 📌 Deskripsi Singkat Tugas

* **Modul 2 — Penjadwalan CPU Lanjutan (Priority Scheduling Non-Preemptive)**:
Mengubah algoritma penjadwalan proses di xv6-public dari Round Robin menjadi Non-Preemptive Priority Scheduling, dengan:
  * Menambahkan field priority pada setiap proses
  * Menambahkan syscall set_priority(int) untuk mengatur prioritas proses
  * Memodifikasi scheduler agar selalu menjalankan proses RUNNABLE dengan prioritas tertinggi

---

## 🛠️ Rincian Implementasi

* Menambahkan priority ke struct proc di `proc.h`
* Menambahkan p->priority saat alokasi proses di `proc.c`
* Menambahkan nomor syscall set priority di `syscall.h`
* Menambahkan deklarasi set priority di `user.h`
* Registrasikan deklarasi fungsi extern dan array set priority di `syscall.c`
* Modifikasi fungsi scheduler di `proc.c`
* Membuat program uji: `ptest.c`
* Menambahkan program uji `ptest.c` di `Makefile`
---

## ✅ Uji Fungsionalitas

* `ptest`:
* Membuktikan bahwa kernel menjalankan proses berdasarkan prioritas
* Memastikan scheduler bekerja secara non-preemptive, artinya:
    *Setelah satu proses jalan, proses lain harus menunggu sampai yang sedang jalan selesai.
    *Tidak ada pengambilan paksa CPU.
---

## 📷 Hasil Uji

Lampiran hasil uji berupa screenshot atau output terminal :

### 📍 Output `ptest`:

```
$ ptest
Child 2 selesai
Child 1 selesai
Parent selesai
```
screenshot:

### 📍 Output `ptest`:
![hasil ptest](<img width="1919" height="1079" alt="Screenshot 2025-07-29 063429" src="https://github.com/user-attachments/assets/89a9815d-c59b-424b-9b50-e5534a7fe5d6" />

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
