#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*////////////////////////KARE VE DÝKDÖRTGEN ALAN HESABI////////////////////////*/
int main()
{

    setlocale(LC_ALL,"Turkish");
    int kareninBirKenari,dikdortgeninBirKenari,dikdortgeninDigerKenari;
    printf("Karenin bir kenarýný giriniz (m)... \n");
    scanf("%d",&kareninBirKenari);
    printf("Karenin alaný: %d m2\n",kareninBirKenari * kareninBirKenari);

    printf("Dikdörtgenin kenarlarýný giriniz (m)...\n");
    scanf("%d %d",&dikdortgeninBirKenari, &dikdortgeninDigerKenari);
    printf("Dikdörtgenin alaný: %d m2\n",dikdortgeninBirKenari * dikdortgeninDigerKenari);

    return 0;
}
