#include <stdio.h>

// bir satirlik yorum
// ikinci satir

/*

buradaki hersey yorum
derleyici tarafindan degerlendirilmez

*/

int main()
{
    // int tamsayilar
    // float kayan noktali sayilar
    // char karakter
    
    int x = -6;
    float zf = 3.25;
    char c = 'B';

    printf("tamsayilar %d\n", x);
    printf("ondalikli sayilar: %f\n", zf);
    printf("karakterler: %c\n", c);
    
    int a = 15;
    int b = 5;
    char islem;

    printf("Ýki sayi girin: ");
    scanf("%d %d", &a, &b);
    printf("Islem giriniz (+)topla, (x)carp, (-)cikar, (/)bol: ");
    scanf(" %c", &islem);
    printf("Yapilan islem: %c\n", islem);
    printf("Girilen sayilar: %d, %d\n", a, b);
    if (islem == '+') {
        printf("Toplam: %d + %d = %d\n", a, b, a+b);
    } else if (islem == '-') {
        printf("cikar: %d - %d = %d\n", a, b, a-b);
    } else if (islem == '*') {
        printf("carpim: %d * %d = %d\n", a, b, a*b);
    } else if (islem == '/') {
        printf("bolum: %d / %d = %d\n", a, b, a/b);
    } else {
      printf("tanimsiz islem!\n");
    }
    
    /*
    // kontrol bloklari
    // if else
    if (3 < 2) {
       printf("3 2 den kucuktur\n");
    } else if (3 > 2) {
       printf("3 2 den buyuktur\n"); // break
    } else if (3 == 2) {
      printf("3 2 ye esittir.\n");
    } else {
      printf("boyle bi durum mumkun degil\n");
    }
    // kod devam ediyor
    
    if (3 < 2) {
       printf("A 3 2 den kucuktur\n");    
    }
    
    if (3 > 2) {
      printf("A 3 2 ye buyuktur.\n"); // break
    }
    // kod devam ediyor
    
    if (3 == 2) {
      printf("A 3 2 ye esittir.\n");    
    }        
    else {
      printf("A boyle bi durum mumkun degil\n");
    }
    
    char m = '?';
    if (m == '+') {
      printf("toplama islemi\n");
    } else if(m == '-') {
      printf("cikarma islemi\n");
    } else if (m == '*') {
      printf("carpma islemi\n");
    } else if (m == '/') {
      printf("bolme islemi\n");
    } else {
      printf("tanimsiz islem\n");
    }
    // devam
    */  
    getch();
    return 0;
}
