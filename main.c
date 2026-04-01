#include <stdio.h>
#include <stdlib.h>

void konversi_suhu();
void konversi_jarak();
void konversi_berat();
void konversi_waktu();
void tampilkan_menu();

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

// Nadilla fitur konversi jarak
void konversi_jarak() { 
    double kilometer, meter, centimeter; 
    int pilihan; 
 
    system("clear || cls"); 
    printf("\n  ── KONVERSI JARAK ─────────────────────\n"); 
    printf("  Masukkan jarak dalam Kilometer: "); 
    scanf("%lf", &kilometer); 
 
    printf("\n  Konversi ke:\n"); 
    printf("  [1]  Meter\n"); 
    printf("  [2]  Centimeter\n"); 
    printf("  [3]  Keduanya\n"); 
    printf("\n  Pilihan: "); 
    scanf("%d", &pilihan); 
 
    printf("\n  ── HASIL ──────────────────────────────\n"); 
 
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
 
    printf("  ───────────────────────────────────────\n"); 
} 