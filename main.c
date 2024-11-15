#include "ft_printf.h"
#include <stdio.h> // Orijinal printf için

int main(void)
{
    char c = 'A';
    char *str = "Hello, world!";
    int num = -123;
    unsigned int unum = 123;
    void *ptr = &num;
    int hex = 255;

    // Karakter çıktısı
    ft_printf("ft_printf: Character: %c\n", c);
    printf("printf   : Character: %c\n\n", c);

    // String çıktısı
    ft_printf("ft_printf: String: %s\n", str);
    printf("printf   : String: %s\n\n", str);

    // Pointer çıktısı
    ft_printf("ft_printf: Pointer: %p\n", ptr);
    printf("printf   : Pointer: %p\n\n", ptr);

    // Negatif tam sayı çıktısı
    ft_printf("ft_printf: Decimal: %d\n", num);
    printf("printf   : Decimal: %d\n\n", num);

    // İşaretsiz tam sayı çıktısı
    ft_printf("ft_printf: Unsigned: %u\n", unum);
    printf("printf   : Unsigned: %u\n\n", unum);

    // Hexadecimal küçük harf çıktısı
    ft_printf("ft_printf: Hexadecimal: %x\n", hex);
    printf("printf   : Hexadecimal: %x\n\n", hex);

    // Hexadecimal büyük harf çıktısı
    ft_printf("ft_printf: Hexadecimal (Caps): %X\n", hex);
    printf("printf   : Hexadecimal (Caps): %X\n\n", hex);

    // Yüzde işareti çıktısı
    ft_printf("ft_printf: Percent: %%\n");
    printf("printf   : Percent: %%\n\n");

    // Geçersiz format karakteri çıktısı
    ft_printf("ft_printf: Invalid format: %y\n");
    printf("printf   : Invalid format: %y\n\n");

    return 0;
}
