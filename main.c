#include <stdio.h>
#include <stdlib.h>

void konversi_suhu();
void konversi_jarak();
void konversi_berat();
void konversi_waktu();
void tampilkan_menu();

void tampilkan_menu() {
    system("clear || cls");
    printf("\n");
    printf("  +======================================+\n");
    printf("  |     KALKULATOR KONVERSI SATUAN       |\n");
    printf("  |        Kelompok Mekatronika AI       |\n");
    printf("  +======================================+\n");
    printf("  |  [1]  Konversi Suhu                  |\n");
    printf("  |  [2]  Konversi Jarak                 |\n");
    printf("  |  [3]  Konversi Berat                 |\n");
    printf("  |  [4]  Konversi Waktu                 |\n");
    printf("  |  [0]  Keluar                         |\n");
    printf("  +======================================+\n");
    printf("\n");
}

void konversi_suhu() {
    double celcius, fahrenheit, kelvin;
    int pilihan;
    system("clear || cls");
    printf("\n  -- KONVERSI SUHU --\n");
    printf("  Masukkan suhu dalam Celcius: ");
    scanf("%lf", &celcius);
    printf("\n  Konversi ke:\n");
    printf("  [1]  Fahrenheit\n");
    printf("  [2]  Kelvin\n");
    printf("  [3]  Keduanya\n");
    printf("\n  Pilihan: ");
    scanf("%d", &pilihan);
    printf("\n  -- HASIL --\n");
    switch (pilihan) {
        case 1:
            fahrenheit = (celcius * 9.0 / 5.0) + 32;
            printf("  %.2f C  =  %.2f F\n", celcius, fahrenheit);
            break;
        case 2:
            kelvin = celcius + 273.15;
            printf("  %.2f C  =  %.2f K\n", celcius, kelvin);
            break;
        case 3:
            fahrenheit = (celcius * 9.0 / 5.0) + 32;
            kelvin = celcius + 273.15;
            printf("  %.2f C  =  %.2f F\n", celcius, fahrenheit);
            printf("  %.2f C  =  %.2f K\n", celcius, kelvin);
            break;
        default:
            printf("  [!] Pilihan tidak valid.\n");
    }
    printf("  -----------------------------------\n");
}

void konversi_jarak() {
    double kilometer, meter, centimeter;
    int pilihan;
    system("clear || cls");
    printf("\n  -- KONVERSI JARAK --\n");
    printf("  Masukkan jarak dalam Kilometer: ");
    scanf("%lf", &kilometer);
    printf("\n  Konversi ke:\n");
    printf("  [1]  Meter\n");
    printf("  [2]  Centimeter\n");
    printf("  [3]  Keduanya\n");
    printf("\n  Pilihan: ");
    scanf("%d", &pilihan);
    printf("\n  -- HASIL --\n");
    switch (pilihan) {
        case 1:
            meter = kilometer * 1000;
            printf("  %.2f km  =  %.2f m\n", kilometer, meter);
            break;
        case 2:
            centimeter = kilometer * 100000;
            printf("  %.2f km  =  %.2f cm\n", kilometer, centimeter);
            break;
        case 3:
            meter = kilometer * 1000;
            centimeter = kilometer * 100000;
            printf("  %.2f km  =  %.2f m\n", kilometer, meter);
            printf("  %.2f km  =  %.2f cm\n", kilometer, centimeter);
            break;
        default:
            printf("  [!] Pilihan tidak valid.\n");
    }
    printf("  -----------------------------------\n");
}

void konversi_berat() {
    double kilogram, gram, pons;
    int pilihan;
    system("clear || cls");
    printf("\n  -- KONVERSI BERAT --\n");
    printf("  Masukkan berat dalam Kilogram: ");
    scanf("%lf", &kilogram);
    printf("\n  Konversi ke:\n");
    printf("  [1]  Gram\n");
    printf("  [2]  Pons\n");
    printf("  [3]  Keduanya\n");
    printf("\n  Pilihan: ");
    scanf("%d", &pilihan);
    printf("\n  -- HASIL --\n");
    switch (pilihan) {
        case 1:
            gram = kilogram * 1000;
            printf("  %.2f kg  =  %.2f g\n", kilogram, gram);
            break;
        case 2:
            pons = kilogram * 2.20462;
            printf("  %.2f kg  =  %.2f pons\n", kilogram, pons);
            break;
        case 3:
            gram = kilogram * 1000;
            pons = kilogram * 2.20462;
            printf("  %.2f kg  =  %.2f g\n", kilogram, gram);
            printf("  %.2f kg  =  %.2f pons\n", kilogram, pons);
            break;
        default:
            printf("  [!] Pilihan tidak valid.\n");
    }
    printf("  -----------------------------------\n");
}

void konversi_waktu() {
    double jam, menit, detik;
    int pilihan;
    system("clear || cls");
    printf("\n  -- KONVERSI WAKTU --\n");
    printf("  Masukkan waktu dalam Jam: ");
    scanf("%lf", &jam);
    printf("\n  Konversi ke:\n");
    printf("  [1]  Menit\n");
    printf("  [2]  Detik\n");
    printf("  [3]  Keduanya\n");
    printf("\n  Pilihan: ");
    scanf("%d", &pilihan);
    printf("\n  -- HASIL --\n");
    switch (pilihan) {
        case 1:
            menit = jam * 60;
            printf("  %.2f jam  =  %.2f menit\n", jam, menit);
            break;
        case 2:
            detik = jam * 3600;
            printf("  %.2f jam  =  %.2f detik\n", jam, detik);
            break;
        case 3:
            menit = jam * 60;
            detik = jam * 3600;
            printf("  %.2f jam  =  %.2f menit\n", jam, menit);
            printf("  %.2f jam  =  %.2f detik\n", jam, detik);
            break;
        default:
            printf("  [!] Pilihan tidak valid.\n");
    }
    printf("  -----------------------------------\n");
}

int main() {
    int pilihan;
    while (1) {
        tampilkan_menu();
        printf("  Masukkan pilihan Anda: ");
        scanf("%d", &pilihan);
        switch (pilihan) {
            case 1: konversi_suhu();   break;
            case 2: konversi_jarak();  break;
            case 3: konversi_berat();  break;
            case 4: konversi_waktu();  break;
            case 0:
                printf("\n  Terima kasih telah menggunakan program ini. Sampai jumpa!\n\n");
                exit(0);
            default:
                printf("\n  [!] Pilihan tidak valid. Silakan coba lagi.\n");
        }
        printf("\n  Tekan Enter untuk kembali ke menu...");
        getchar();
        getchar();
    }
    return 0;
}