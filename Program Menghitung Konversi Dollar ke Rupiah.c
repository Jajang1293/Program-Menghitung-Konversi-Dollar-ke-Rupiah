#include<stdio.h>
#define kurs 14500

int main()
{
    float dollar = 0;
    printf("Program Konversi Dollar ke Rupiah\n");
    printf("Kurs: 1 USD = 14.500 Rupiah\n");
    printf("=======================================\n");
    printf("Jumlah dollar : $ ");
    scanf("%f", &dollar);

    float rupiah = dollar*kurs;
    printf("Hasil Konversi Dollar ke Rupiah : Rp %.2f", rupiah);
    return 0;
}
