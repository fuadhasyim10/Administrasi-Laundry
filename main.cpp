#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#include <iostream>
using namespace std;

int main()
{
char nama[30],alamat[60],noHP[60],kategoriCucian[30];
int biaya,jumlahBayar,uangKembalian,berat,totalharga,kdKategori,plMenu;
struct tm *Sys_T;
	time_t Tval;
    Tval = time(NULL);
    Sys_T = localtime(&Tval);
cetak:
	system ("cls");
	
	printf("====================================================\n");
	printf("\tADMINISTRASI LAUNDRY\n");
	printf("====================================================\n");
	printf("----------------------------------------------------\n");
	printf("\tMenu Utama\n");
	printf("----------------------------------------------------\n");
	printf("[1] Input Data Pesanan\n");
	printf("[2] Cetak Struk\n");
	printf("[3] Keluar\n");
	printf("----------------------------------------------------\n");
	printf("Pilih Menu		: "); scanf("%d", &plMenu);
	printf("\n");
	
	system ("cls");
	
		switch(plMenu)
			{
			case 1 :
				printf("====================================================\n");
				printf("\tInput Data Pesanan\n");
				printf("====================================================\n");
				printf("Nama Pelanggan		: "); scanf("%s", &nama);
				printf("Alamat			: "); scanf("%s", &alamat);
				printf("No Handphone		: "); scanf("%s", &noHP);
				printf("----------------------------------------------------\n");
				printf("\tKategori Cucian\n");
				printf("----------------------------------------------------\n");
				printf("1. Reguler	(1 Hari)	(Rp. 5000)\n");
				printf("2. Ekspress	(12 Jam)	(Rp. 10000)\n");
				printf("3. Kilat	(5 Jam)		(Rp. 15000)\n");
				printf("----------------------------------------------------\n");
				printf("Input No Kategori [1-3]	: "); scanf("%d", &kdKategori);
					switch(kdKategori)
						{
						case 1 :
						strcpy(kategoriCucian,"Cuci Reguler 1 Hari	");
						biaya=5000;
						break;
						case 2 :
						strcpy(kategoriCucian,"Cuci Ekspress 12 Jam	");
						biaya=10000;
						break;
						case 3 :
						strcpy(kategoriCucian,"Cuci Kilat 5 Jam	");
						biaya=15000;
						break;
						default:
						strcpy(kategoriCucian, "tanda salah kode");
						break;
						}
				printf("Berat Cucian (Kg)	: "); scanf("%d", &berat);
				printf("\n");
				printf("Tekan Enter! untuk kembali ke Menu Utama . . .");
			plMenu = getche();
			goto cetak; 
			break;
			
			case 2 :
				printf("====================================================\n");
				printf("\tStruk Pesanan Laundry\n");
				printf("====================================================");
				printf ( "\n%s", asctime (Sys_T));
				printf("\nNama Pelanggan		: %s", nama);
				printf("\nAlamat			: %s", alamat);
				printf("\nNo Handphone		: %s", noHP);
				printf("\n%s", kategoriCucian);
				printf(": Rp. %d", biaya);
				totalharga=biaya*berat;
				printf("\nBerat Cucian		: %d Kg", berat);
				printf("\n----------------------------------------------------");
				printf("\nTotal Harga		: Rp. %d", totalharga);
				printf("\n----------------------------------------------------");
				printf("\nTotal Bayar		: Rp. "); scanf("%d", &jumlahBayar);
				uangKembalian=jumlahBayar-totalharga;
				printf("Kembalian		: Rp. %d", uangKembalian);
				printf("\n----------------------------------------------------\n");
				printf("\n");
				printf("Tekan Enter! untuk kembali ke Menu Utama . . .");
			plMenu = getche();
			goto cetak;
			break;
			
			case 3 :
  				return(0);	
			break;
			}
  
}
