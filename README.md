# Kalkulator Konversi Satuan CLI

Program terminal berbasis bahasa C untuk mengkonversi berbagai satuan ukuran secara interaktif.

---

## Anggota Kelompok 5 — Mekatronika & Kecerdasan Buatan

Universitas Pendidikan Indonesia Kampus Purwakarta

| Peran     | Nama                   | NIM        | Tugas                                          |
| --------- | -----------------------|----------- | ---------------------------------------------- |
| Ketua     | Ahmad Faiq Zidane      | (2502542)  | Setup repo, menu utama & struktur main.c       |
| Anggota 1 | Rhesiana Putri Dewi    | (2504374)  | Konversi Suhu (Celcius ke Fahrenheit/Kelvin)   |
| Anggota 2 | Nadilla Sri Ambarwati  | (2501637)  | Konversi Jarak (Kilometer ke Meter/Centimeter) |
| Anggota 3 | Haikal Kamil           | (2506050)  | Konversi Berat (Kilogram ke Gram/Pons)         |
| Anggota 4 | Muhammad Ikhsan Akbar  |            | Konversi Waktu (Jam ke Menit/Detik)            |
| Anggota 5 | Michael Sin            |            | Tampilan UI & antarmuka menu                   |

---

## Fitur Program

- Konversi Suhu — Celcius ke Fahrenheit dan Kelvin
- Konversi Jarak — Kilometer ke Meter dan Centimeter
- Konversi Berat — Kilogram ke Gram dan Pons
- Konversi Waktu — Jam ke Menit dan Detik
- Tampilan menu interaktif berbasis terminal

---

## Cara Menjalankan Program

Clone repositori terlebih dahulu:

```bash
git clone https://github.com/Faiq-danZ/Kalkulator-Konversi-Satuan-CLI_KELOMPOK-5.git
cd Kalkulator-Konversi-Satuan-CLI_KELOMPOK-5
```

Compile program menggunakan GCC:

```bash
gcc main.c -o kalkulator
```

Jalankan program:

```bash
# Windows
kalkulator.exe

# Linux / Mac
./kalkulator
```

---

## Alur Kerja Git

```
main
├── fitur-konversi-suhu     (Rhesiana Putri Dewi)
├── fitur-konversi-jarak    (Nadilla Sri Ambarwati)
├── fitur-konversi-berat    (Haikal Kamil)
├── fitur-konversi-waktu    (Muhammad Ikhsan Akbar)
└── fitur-tampilan-menu     (Michael Sin)
```

Setiap anggota bekerja di branch masing-masing, lalu ketua melakukan merge ke main di akhir.

---

## Struktur File

```
Kalkulator-Konversi-Satuan-CLI_KELOMPOK-5/
├── main.c
└── README.md
```

---

## Teknologi

- Bahasa: C
- Compiler: GCC
- Version Control: Git & GitHub

---

Proyek ini dibuat sebagai tugas mata Literasi Digital.
Program Studi Mekatronika & Kecerdasan Buatan — UPI Purwakarta.
