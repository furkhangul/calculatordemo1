#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");
    int sayi1,sayi2,mod;
    
    printf("Lütfen işlem için bir sayı giriniz:");
    scanf("%d",&sayi1);
    printf("Lütfen işlem için ikinci sayınızı giriniz:");
    scanf("%d",&sayi2);
    printf("*\n*\n*");
    printf("\n ------MODLAR------");
    printf("\n[1]Toplama\n[2]Çıkarma\n[3]Çarpma\n[4]Bölme ");
    printf("\n*\n*\n*");
    printf("\nLütfen bi mod seçiniz:");
    scanf("%d",&mod);
    switch(mod){
    case 1: printf("Seçtiğiniz sayıların toplamı: %d ",sayi1+sayi2);break;
    case 2: printf("Seçtiğiniz sayıların farkı: %d",sayi1-sayi2);break;
    case 3: printf("Seçtiğiniz sayıların çarpımı: %d",sayi1*sayi2);break;
    case 4: printf("Seçtiğiniz sayıların bölümü: %d",sayi1/sayi2);break;
    default: printf("HATA YAPTINIZ LÜTFEN PROGRAMI TEKRAR ÇALIŞTIRINIZ");break;
    }
    return 0;
}
