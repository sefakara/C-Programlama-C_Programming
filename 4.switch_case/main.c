/* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\
*                       Sefa Kara  16/09/2020             *
*       switch-case kullanimi :                           *
*       hesap makinesi ve kismi bilet satis sistemi       *
*  						                                  *
\* * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <stdlib.h>

int main ( )
{

/*
	int islem ;
	float sayi = 0 , sayi1 = 0 , sonuc;

    while(1)
	{
        printf ("YAPMAK ISTEDIGINIZ ISLEMI SECINIZ ;\n " );
        printf ("1- TOPLAMA\n");
        printf (" 2- CIKARMA\n ");
        printf ("3- CARPMA\n ");
        printf ("4- BOLME\n ");
        scanf ( "%d", &islem );

        switch (islem)
        {
            case 1 :printf ("iki sayi giriniz\n");
		      		scanf ( "%f%f", &sayi , &sayi1);
		      		sonuc = sayi + sayi1 ;
		      		printf ("iki sayinin toplami = %f\n\n\n", sonuc);
		      		break ;

            case 2 :printf ("iki sayi giriniz\n");
		      		scanf ( "%f%f" , &sayi , &sayi1);
		      		sonuc = sayi - sayi1 ;
		      		printf ("iki sayinin farki= %f\n\n\n", sonuc);
		      		break ;

            case 3 :printf ("iki sayi giriniz\n");
		      		scanf ( "%f%f" , &sayi , &sayi1);
		      		sonuc = sayi * sayi1 ;
		      		printf ("iki sayinin carpimi = %f\n\n\n", sonuc);
		      		break ;

            case 4 :printf ("iki sayi giriniz\n");
		      		scanf ( "%f%f" , &sayi , &sayi1);
		      		if (sayi1 != 0)
                    {
                        sonuc = sayi / sayi1 ;
                        printf ("iki sayinin bolumu = %f\n\n\n", sonuc);
                    }
                    else
                        printf("sifira bolunemez...\n\n");
		      		break ;
            default :
                printf("gecersiz giris\n\n");
        }
	}
*/

/*
    char secim,secim2;
    char isim[10],soyisim[10];
    int gun,ay,yil;

    printf(" Islem seciniz\n");
    printf("1.Rezervasyon: (R/r)\n");
    printf("2.Rezervasyon iptal: (Q/q)\n");


    switch(getchar())
    {
        case 'r':
        case 'R':
            printf("isim soyisim: ");
            scanf("%s%s",&isim,&soyisim);
            printf("yolculuk tarihi: \n");
            scanf("%d%d%d",&gun,&ay,&yil);
            printf("Yolcu: %s %s\nTarih: %d.%d.%d\n",isim,soyisim,gun,ay,yil);
            break;

        case 'Q':
        case 'q':
            printf("isim: ");
            scanf("%s",&isim);
            printf("onayliyor musunuz? (E-e)");
            scanf("%s",&secim2);
            if (secim2 == 'E' || secim2 == 'e')
                printf("bilet iptal edilmistir...");
            else
                printf("bilet iptal edilmemistir...\n\n");
            break;

        default:
            printf("gecersiz giris");
    }
*/

	return 0;
}
