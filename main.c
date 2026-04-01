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

//fitur tampilan menu
void tampilkan_menu() {
    system("clear || cls");
    printf("\n");
    printf("  ╔══════════════════════════════════════╗\n");
    printf("  ║     KALKULATOR KONVERSI SATUAN       ║\n"); 
    printf("  ║        Kelompok Mekatronika AI       ║\n");
    printf("  ╠══════════════════════════════════════╣\n");
    printf("  ║  [1]  Konversi Suhu                  ║\n");
    printf("  ║  [2]  Konversi Jarak                 ║\n");
    printf("  ║  [3]  Konversi Berat                 ║\n");
    printf("  ║  [4]  Konversi Waktu                 ║\n");
    printf("  ║  [0]  Keluar                         ║\n");
    printf("  ╚══════════════════════════════════════╝\n");
    printf("\n");
}
