#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*////////////////////////KARE VE D�KD�RTGEN ALAN HESABI////////////////////////*/
int main()
{

    setlocale(LC_ALL,"Turkish");
    int kareninBirKenari,dikdortgeninBirKenari,dikdortgeninDigerKenari;
    printf("Karenin bir kenar�n� giriniz (m)... \n");
    scanf("%d",&kareninBirKenari);
    printf("Karenin alan�: %d m2\n",kareninBirKenari * kareninBirKenari);

    printf("Dikd�rtgenin kenarlar�n� giriniz (m)...\n");
    scanf("%d %d",&dikdortgeninBirKenari, &dikdortgeninDigerKenari);
    printf("Dikd�rtgenin alan�: %d m2\n",dikdortgeninBirKenari * dikdortgeninDigerKenari);

    return 0;
}
