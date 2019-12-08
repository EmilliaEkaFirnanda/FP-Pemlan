#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

/*---STRUCT------------------------------------------------------------------------------------------------------------------------------------------*/

struct tanggal{
	int tanggal;
	int bulan;
	int tahun;
};

struct kendaraan{
	char nopol[100];
	int bobot;
	char jenis[100];
};

struct pelabuhan{
	int nomor_tiket;
	char tujuan[100];
	struct tanggal tgl;
	struct kendaraan ken;
};
typedef struct pelabuhan pel;
pel data[100];

/*---SPLASH SCREEN------------------------------------------------------------------------------------------------------------------------------------------*/

void bismillah(){
	system("color 0A");
	printf("\n\t\t\t ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹");
	printf("\n\t\t\t ‹‹‹\t\t\t\t\t\t\t‹‹‹");
	printf("\n\t\t\t ‹‹‹\t\tWELCOME TO OUR FINAL PROJECT\t\t‹‹‹");
	printf("\n\t\t\t ‹‹‹\t\t\t\t\t\t\t‹‹‹");
	printf("\n\t\t\t ‹‹‹\t - RAHMAT AULIYA	<180801010025>\t\t‹‹‹");
	printf("\n\t\t\t ‹‹‹\t - EMILLIA EKA FIRNANDA	<180801010026>\t\t‹‹‹");
	printf("\n\t\t\t ‹‹‹\t\t\t\t\t\t\t‹‹‹");
	printf("\n\t\t\t ‹‹‹\t\t\t GOOD LUCK :) \t\t\t‹‹‹");
	printf("\n\t\t\t ‹‹‹\t\t\t\t\t\t\t‹‹‹");
	printf("\n\t\t\t ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹");
	printf("\n\n\n\t\t\t ==================< APLIKASI PELABUHAN >==================");

}

void alhamdulillah(){
	system("color 0D");
	printf("\n\n\n\t\t\t ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹");
	printf("\n\n");
	printf("\t\t\t ================= TERIMA KASIH BANYAK :) =================");
	printf("\n\n");
	printf("\t\t\t ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹\n\n");
	
}

/*---MENU AND SUBMENU------------------------------------------------------------------------------------------------------------------------------------------*/

int menu,search,sort;

void pilihan_menu(){
	system("color 06");
	printf("\n\t\t\t ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹ PROGRAM APLIKASI PELABUHAN ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹\n");
	printf("\n\t\t\t\t\t\t 1. Input Data Kendaraan");
	printf("\n\t\t\t\t\t\t 2. View Data Kendaraan");
	printf("\n\t\t\t\t\t\t 3. Update Data Kendaraan");
	printf("\n\t\t\t\t\t\t 4. Search Data Kendaraan");
	printf("\n\t\t\t\t\t\t 5. Sort Data Kendaraan");
	printf("\n\t\t\t\t\t\t 0. Keluar Aplikasi");
	printf("\n\n\t\t\t ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹\n");
	printf("\n\t\t\t\t\t Pilih Menu : "); scanf("%d",&menu);
}
	
void pilihan_search(){
	system("color 0B");
	printf("\n\t\t\t ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹ SEARCH DATA KENDARAAN ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹\n");
	printf("\n\t\t\t\t\t 1. Berdasarkan Nopol Kendaraan");
	printf("\n\t\t\t\t\t 2. Berdasarkan Nomor Tiket Kendaraan");
	printf("\n\t\t\t\t\t 3. Berdasarkan Bobot Kendaraan");
	printf("\n\t\t\t\t\t 4. Kembali ke Menu Utama");
	printf("\n\n\t\t\t ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹\n");
	printf("\n\t\t\t\t\t Pilih Menu : "); scanf("%d",&search);
}
	
void pilihan_sort(){
	system("color 0C");
	printf("\n\t\t\t ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹ SORT DATA KENDARAAN ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹\n");
	printf("\n\t\t\t\t\t 1. Berdasarkan Nomor Tiket Kendaraan");
	printf("\n\t\t\t\t\t 2. Berdasarkan Nopol Kendaraan");
	printf("\n\t\t\t\t\t 3. Berdasarkan Jenis Kendaraan");
	printf("\n\t\t\t\t\t 4. Berdasarkan Bobot Kendaraan");
	printf("\n\t\t\t\t\t 5. Berdasarkan Tujuan Kendaraan");
	printf("\n\t\t\t\t\t 6. Berdasarkan Tanggal Kendaraan");
	printf("\n\t\t\t\t\t 7. Kembali ke Menu Utama");
	printf("\n\n\t\t\t ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹\n");
	printf("\n\t\t\t\t\t Pilih Menu : "); scanf("%d",&sort);
}

/*---INPUT USER------------------------------------------------------------------------------------------------------------------------------------------*/

void input(int i){
	printf(" Masukkan Nopol Kendaraan ke-%d		: ",i+1); fflush(stdin); gets(data[i].ken.nopol);
	printf(" Masukkan Jenis Kendaraan ke-%d		: ",i+1); fflush(stdin); gets(data[i].ken.jenis);
	printf(" Masukkan Bobot Kendaraan ke-%d		: ",i+1); fflush(stdin); scanf("%d",&data[i].ken.bobot);
	printf(" Masukkan Tujuan Pelabuhan ke-%d		: ",i+1); fflush(stdin); gets(data[i].tujuan);
	printf(" Masukkan Nomor Tiket Kendaraan ke-%d	: ",i+1); fflush(stdin); scanf("%d",&data[i].nomor_tiket);
	printf(" Masukkan Tanggal Tiket Kendaraan ke-%d	: ",i+1); fflush(stdin); scanf("%d",&data[i].tgl.tanggal);
	printf(" Masukkan Bulan Tiket Kendaraan ke-%d	: ",i+1); fflush(stdin); scanf("%d",&data[i].tgl.bulan);
	printf(" Masukkan Tahun Tiket Kendaraan ke-%d	: ",i+1); fflush(stdin); scanf("%d",&data[i].tgl.tahun);
}
	
void view(int i){
	printf("\n ===== Data Kendaraan ke-%d =====",i+1);
	printf("\n Nopol Kendaraan		: %s",data[i].ken.nopol);
	printf("\n Jenis Kendaraan 		: %s",data[i].ken.jenis);
	printf("\n Bobot Kendaraan 		: %d ton",data[i].ken.bobot);
	printf("\n Tujuan Pelabuhan 		: %s",data[i].tujuan);
	printf("\n Nomor Tiket Kendaraan 		: %d",data[i].nomor_tiket);
	printf("\n Tanggal Tiket Kendaraan	: %d-%d-%d\n",data[i].tgl.tanggal,data[i].tgl.bulan,data[i].tgl.tahun);
}

void update(int i){
	printf(" Ubah Jenis Kendaraan ke-%d		: ",i+1); fflush(stdin); gets(data[i].ken.jenis);
	printf(" Ubah Bobot Kendaraan ke-%d		: ",i+1); fflush(stdin); scanf("%d",&data[i].ken.bobot);
	printf(" Ubah Tujuan Pelabuhan ke-%d		: ",i+1); fflush(stdin); gets(data[i].tujuan);
	printf(" Ubah Nomor Tiket Kendaraan ke-%d	: ",i+1); fflush(stdin); scanf("%d",&data[i].nomor_tiket);
	printf(" Ubah Tanggal Tiket Kendaraan ke-%d	: ",i+1); fflush(stdin); scanf("%d",&data[i].tgl.tanggal);
	printf(" Ubah Bulan Tiket Kendaraan ke-%d	: ",i+1); fflush(stdin); scanf("%d",&data[i].tgl.bulan);
	printf(" Masukkan Tahun Tiket Kendaraan ke-%d	: ",i+1); fflush(stdin); scanf("%d",&data[i].tgl.tahun);
}

/*---LINEAR SEARCH------------------------------------------------------------------------------------------------------------------------------------------*/

int linear_search_update(pel data[], int n, char cari[]) { 
    int i; 
    for (i=0;i<n;i++) 
        if (!strcmp(cari, data[i].ken.nopol)) 
            return i;
    return -1; 
}

//disini isien rekursifnya linear search selanjutnya.



/*---SHELL SORT------------------------------------------------------------------------------------------------------------------------------------------*/

void shell_sort_tiket(pel data[],int n){
	int gap,i,j;
	pel temp;
	for(gap=n/2;gap>0;gap/=2){
		for(i=gap;i<n;i++){
			temp = data[i];
			for(j=i;j>=gap && data[j-gap].nomor_tiket>temp.nomor_tiket;j-=gap){
				data[j]=data[j-gap];
			}
		data[j]=temp;
		}
	}	
}

void shell_sort_bobot(pel data[],int n){
	int gap,i,j;
	pel temp;
	for(gap=n/2;gap>0;gap/=2){
		for(i=gap;i<n;i++){
			temp = data[i];
			for(j=i;j>=gap && data[j-gap].ken.bobot>temp.ken.bobot;j-=gap){
				data[j]=data[j-gap];
			}
		data[j]=temp;
		}
	}	
}

void shell_sort_nopol(pel data[],int n){
	int gap,i,j;
	pel temp;
	for(gap=n/2;gap>0;gap/=2){
		for(i=gap;i<n;i++){
			temp = data[i];
			for(j=i;j>=gap && (strcmp(data[j].ken.nopol, data[j-gap].ken.nopol)<0);j-=gap){
				data[j]=data[j-gap];
			}
		data[j]=temp;
		}
	}
}

void shell_sort_jenis(pel data[],int n){
	int gap,i,j;
	pel temp;
	for(gap=n/2;gap>0;gap/=2){
		for(i=gap;i<n;i++){
			temp = data[i];
			for(j=i;j>=gap && (strcmp(data[j].ken.jenis, data[j-gap].ken.jenis)<0);j-=gap){
				data[j]=data[j-gap];
			}
		data[j]=temp;
		}
	}
}

void shell_sort_tujuan(pel data[],int n){
	int gap,i,j;
	pel temp;
	for(gap=n/2;gap>0;gap/=2){
		for(i=gap;i<n;i++){
			temp = data[i];
			for(j=i;j>=gap && (strcmp(data[j].tujuan, data[j-gap].tujuan)<0);j-=gap){
				data[j]=data[j-gap];
			}
		data[j]=temp;
		}
	}
}

void shell_sort_tanggal(pel data[],int n){
	int gap,i,j;
	pel temp;
	for(gap=n/2;gap>0;gap/=2){
		for(i=gap;i<n;i++){
			temp = data[i];
			for(j=i;j>=gap && data[j-gap].tgl.tahun>temp.tgl.tahun;j-=gap){
				data[j]=data[j-gap];
				for(j=i;j>=gap && data[j-gap].tgl.tahun==temp.tgl.tahun && data[j-gap].tgl.bulan>temp.tgl.bulan;j-=gap){
					data[j]=data[j-gap];
					for(j=i;j>=gap && data[j-gap].tgl.tahun==temp.tgl.tahun && data[j-gap].tgl.bulan==temp.tgl.bulan && data[j-gap].tgl.tanggal>temp.tgl.tanggal;j-=gap){
						data[j]=data[j-gap];
					}
				}
			}
		data[j]=temp;
		}
	}
}

/*---------------------------------------------------------------------------------------------------------------------------------------------*/

int main() {
	
	int i,j,n=0;
	bool found;
	
	bismillah();
	getch();
	system("cls");
	do{
		system("cls");
		pilihan_menu();
		if(menu==1){
			system("cls");
			printf("\n ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹ INPUT DATA KENDARAAN ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹ \n\n");
			input(n);
			n++;
			getch();
			system("cls");
		}
		else if(menu==2){
			system("cls");
			printf("\n ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹ VIEW DATA KENDARAAN ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹ \n");
			if(n==0){
				printf("\n Input Data Kendaraan Terlebih Dahulu!!!");
			}else{
				for(i=0;i<n;i++){
					view(i);
				}
			}
			getch();
			system("cls");
		}
		else if(menu==3){
			char cari_update[100];
			system("cls");
			printf("\n ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹ UPDATE DATA KENDARAAN ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹\n\n");
			printf(" Masukkan Nopol Kendaraan yang ingin diupdate : "); fflush(stdin); gets(cari_update);
			
			int w;
			w=linear_search_update(data,n,cari_update);
			if(w==-1){
				printf("\n DATA KENDARAAN TIDAK DITEMUKAN\n");
			}else{
				update(w);
			}
			getch();
			system("cls");
		}
		else if(menu==4){
			do{
				system("cls");
				pilihan_search();
				if(search==1){
				// ini search nopol
					
				}
				else if(search==2){
				// ini search nomor tiket
					
				}
				else if(search==3){
				// ini search bobot

				}
			}while(search!=4);
		}
		else if(menu==5){
			do{
				system("cls");
				pilihan_sort();
				if(sort==1){
					system("cls");
					printf("\n ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹ SORT DATA KENDARAAN  ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹\n");
					printf(" ================== (Berdasarkan Nomor Tiket) =================\n\n");
					shell_sort_tiket(data,n);
					for(i=0;i<n;i++){
						view(i);
					}
					
					getch();
					system("cls");
				}
				else if(sort==2){
					system("cls");
					printf("\n ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹ SORT DATA KENDARAAN  ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹\n");
					printf(" ==================== (Berdasarkan Nopol)  ====================\n\n");
					shell_sort_nopol(data,n);
					for(i=0;i<n;i++){
						view (i);
					}
					
					getch();
					system("cls");	
				}
				else if(sort==3){
					system("cls");
					printf("\n ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹ SORT DATA KENDARAAN  ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹\n");
					printf(" ==================== (Berdasarkan Jenis)  ====================\n\n");
					shell_sort_jenis(data,n);
					for(i=0;i<n;i++){
						view (i);
					}
					
					getch();
					system("cls");
					
				}
				else if(sort==4){
					system("cls");
					printf("\n ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹ SORT DATA KENDARAAN  ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹\n");
					printf(" ==================== (Berdasarkan Bobot)  ====================\n\n");
					shell_sort_bobot(data,n);
					for(i=0;i<n;i++){
						view(i);
					}
					
					getch();
					system("cls");
				}
				else if(sort==5){
					system("cls");
					printf("\n ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹ SORT DATA KENDARAAN  ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹\n");
					printf(" ==================== (Berdasarkan Tujuan) ====================\n\n");
					shell_sort_tujuan(data,n);
					for(i=0;i<n;i++){
						view(i);
					}
					
					getch();
					system("cls");
				}
				else if(sort==6){
					system("cls");
					printf("\n ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹ SORT DATA KENDARAAN  ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹\n");
					printf(" ==================== (Berdasarkan Tanggal)====================\n\n");
					shell_sort_tanggal(data,n);
					for(i=0;i<n;i++){
						view(i);
					}
					
					getch();
					system("cls");
				}
			}while(sort!=7);
		}

	}while(menu!=0);
	
	system("cls");
	alhamdulillah();
	
	return 0;
}
