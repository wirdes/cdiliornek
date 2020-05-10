#include <stdio.h>
#include <locale.h>	


struct bilgi{
	
	int barkodno;
	char *urunismi;
	int stok;
	float fiyat;	
};

typedef struct bilgi urun;
void satinal(urun *urunListesi,int barkotno);

int main(void){
	setlocale(LC_ALL, "Turkish");
	
	urun urun1={ 1001 , "Ekmek" , 1 , 1.5 };
	urun urun2={ 1002 , "Sabun" , 35 , 0.5 };
	urun urun3={ 1003 , "Hazýr Çorba" , 10 , 2.0 };
	urun urun4={ 1004 , "Su" , 42 , 0.5 };
	urun urun5={ 1005 , "Yumurta" , 30 , 10.0 };
	urun urun6={ 1006 , "Zeytin" , 10 , 12.0 };
	urun urun7={ 1007 , "Peynir" , 15 , 7.5 };
	urun urun8={ 1008 , "Süt" , 15 , 2.0 };
	urun urun9={ 1009 , "Yoðurt" , 20 , 1.5 };
	urun urun10={ 1010 , "Elma" , 20 , 3.0 };
	
	urun urunListesi [ 10 ];
	urunListesi [ 0 ]=urun1;
	urunListesi [ 1 ]=urun2;
	urunListesi [ 2 ]=urun3;
	urunListesi [ 3 ]=urun4;
	urunListesi [ 4 ]=urun5;
	urunListesi [ 5 ]=urun6;
	urunListesi [ 6 ]=urun7;
	urunListesi [ 7 ]=urun8;
	urunListesi [ 8 ]=urun9;
	urunListesi [ 9 ]=urun10;
	int barkotno;
    do 
	{
		
	printf("Barkot Numarasý giriniz:");
    scanf("%d",&barkotno);
	satinal(urunListesi,barkotno);

    }while(barkotno>0);
}
	
void satinal(urun *urunListesi,int barkotno){
	int i;
	for( i=0;i<10;i++){
		if((urunListesi+i)->barkodno==barkotno){
			
			if((urunListesi+i)->stok!=0){
			printf("----------------------------------------------------\n");
			(urunListesi+i)->stok--;
			printf( "Barkot NO:%3d Ürün Ýsmi:%-s Stok:%-d Fiyat:%.1f\n", (urunListesi+i)->barkodno, (urunListesi+i)->urunismi, (urunListesi+i)->stok,(urunListesi+i)->fiyat );
			printf("----------------------------------------------------\n");
			break;
			
			}else {
				printf("Yeterli Stok bulunmadý\n");
				break;
			}
		}
	}
	
	if(i==10){
		printf("Girilen barkot numarasýna ait ürün bulunamadý.\n");
	}
	
}



