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

//Fitur Konversi Suhu (Rhesiana Putri Dewi)

void konversi_suhu() { 
    double celcius, fahrenheit, kelvin; 
    int pilihan; 
 
    system("clear || cls"); 
    printf("\n  ── KONVERSI SUHU ──────────────────────\n"); 
    printf("  Masukkan suhu dalam Celcius: "); 
    scanf("%lf", &celcius); 
 
    printf("\n  Konversi ke:\n"); 
    printf("  [1]  Fahrenheit\n"); 
    printf("  [2]  Kelvin\n"); 
    printf("  [3]  Keduanya\n"); 
    printf("\n  Pilihan: "); 
    scanf("%d", &pilihan); 
 
    printf("\n  ── HASIL ──────────────────────────────\n"); 
 
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
 
    printf("  ───────────────────────────────────────\n"); 
} 