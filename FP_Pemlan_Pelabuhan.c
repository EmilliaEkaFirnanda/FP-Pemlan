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
	printf("\n\t\t\t ‹‹‹\t - EMILLIA EKA FIRNANDA	<18081010026>\t\t‹‹‹");
	printf("\n\t\t\t ‹‹‹\t - RAHMAT AULIYA	<18081010027>\t\t‹‹‹");
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
	printf("\n Masukkan Nopol Kendaraan ke-%d			: ",i+1); fflush(stdin); gets(data[i].ken.nopol);	
	printf("\n Masukkan Jenis Kendaraan ke-%d			: ",i+1); fflush(stdin); gets(data[i].ken.jenis);
	printf("\n Masukkan Bobot Kendaraan ke-%d			: ",i+1); fflush(stdin); scanf("%d",&data[i].ken.bobot);
	printf("\n _______________________________________");
	printf("\n |\t == Tujuan yang tersedia ==\t|");
	printf("\n |\t\t\t\t\t|");
	printf("\n | -Ketapang \t -Padang Bai    \t|");
	printf("\n | -Lembar \t -Tanjung Perak   \t|");
	printf("\n |______________________________________|\n");
	do{
		printf(" \n Masukkan Tujuan Pelabuhan ke-%d			: ",i+1); fflush(stdin); gets(data[i].tujuan);	
	}while(((strcmp(data[i].tujuan,("Ketapang"))&&strcmp(data[i].tujuan,("Padang Bai"))&&strcmp(data[i].tujuan,("Lembar"))&&strcmp(data[i].tujuan,("Tanjung Perak")))));
	printf("\n Masukkan Nomor Tiket Kendaraan ke-%d		: ",i+1); fflush(stdin); scanf("%d",&data[i].nomor_tiket);
	do{
		printf("\n Masukkan Tanggal Tiket Kendaraan ke-%d		: ",i+1); fflush(stdin); scanf("%d",&data[i].tgl.tanggal);
	}while(data[i].tgl.tanggal<1 || data[i].tgl.tanggal>31);
	do{
		printf("\n Masukkan Bulan[1-12] Tiket Kendaraan ke-%d	: ",i+1); fflush(stdin); scanf("%d",&data[i].tgl.bulan);
	}while(data[i].tgl.bulan<1 || data[i].tgl.bulan>12);
	do{
		printf("\n Masukkan Tahun Tiket Kendaraan ke-%d		: ",i+1); fflush(stdin); scanf("%d",&data[i].tgl.tahun);	
	}while(data[i].tgl.tahun<2018);
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
	int ubah;
	do{
		printf("\n ________________________________________________________________________________________________");
		printf("\n |\t\t\t\t == KETERSEDIAAN DATA ==\t\t\t\t\t|");
		printf("\n |\t\t\t\t\t\t\t\t\t\t\t\t|");
		printf("\n | 1.Nopol Kendaraan \t 3.Bobot Kendaraan \t 5.Nomor Tiket \t\t7.Update Selesai\t|");
		printf("\n | 2.Jenis Kendaraan \t 4.Tujuan Pelabuhan \t 6.Tanggal Tiket\t\t\t\t|");
		printf("\n |______________________________________________________________________________________________|\n");
		printf("\n Data apa yang ingin di-ubah 	: "); fflush(stdin); scanf("%d",&ubah);
		if(ubah==1){
			printf("\n Ubah Nopol Kendaraan ke-%d	: ",i+1); fflush(stdin); gets(data[i].ken.nopol);
			system("cls");
			printf("\n ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹ UPDATE DATA KENDARAAN ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹\n\n");
			view(i);
		}else if(ubah==2){
			printf("\n Ubah Jenis Kendaraan ke-%d	: ",i+1); fflush(stdin); gets(data[i].ken.jenis);
			system("cls");
			printf("\n ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹ UPDATE DATA KENDARAAN ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹\n\n");
			view(i);
		}else if(ubah==3){
			printf("\n Ubah Bobot Kendaraan ke-%d	: ",i+1); fflush(stdin); scanf("%d",&data[i].ken.bobot);	
			system("cls");
			printf("\n ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹ UPDATE DATA KENDARAAN ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹\n\n");
			view(i);
		}else if(ubah==4){
			printf("\n ________________________________________________");
			printf("\n |\t == Tujuan yang tersedia ==\t\t|");
			printf("\n |\t\t\t\t\t\t|");
			printf("\n | -Ketapang \t -Padang Bai \t\t\t|");
			printf("\n | -Lembar \t -Tanjung Perak\t\t\t|");
			printf("\n |______________________________________________|\n");
			do{
				printf(" \n Ubah Tujuan Pelabuhan ke-%d	: ",i+1); fflush(stdin); gets(data[i].tujuan);
				system("cls");
				printf("\n ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹ UPDATE DATA KENDARAAN ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹\n\n");
				view(i);	
			}while(((strcmp(data[i].tujuan,("Ketapang"))&&strcmp(data[i].tujuan,("Padang Bai"))&&strcmp(data[i].tujuan,("Lembar"))&&strcmp(data[i].tujuan,("Tanjung Perak")))));
		}else if(ubah==5){
			printf("\n Ubah Nomor Tiket Kendaraan ke-%d	: ",i+1); fflush(stdin); scanf("%d",&data[i].nomor_tiket);	
			system("cls");
			printf("\n ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹ UPDATE DATA KENDARAAN ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹\n\n");
			view(i);
		}else if(ubah==6){
			do{
				printf("\n Ubah Tanggal Tiket Kendaraan ke-%d	: ",i+1); fflush(stdin); scanf("%d",&data[i].tgl.tanggal);
			}while(data[i].tgl.tanggal<1 || data[i].tgl.tanggal>31);
			do{
				printf("\n Ubah Bulan[1-12] Tiket Kendaraan ke-%d	: ",i+1); fflush(stdin); scanf("%d",&data[i].tgl.bulan);
			}while(data[i].tgl.bulan<1 || data[i].tgl.bulan>12);
			do{
				printf("\n Ubah Tahun Tiket Kendaraan ke-%d	: ",i+1); fflush(stdin); scanf("%d",&data[i].tgl.tahun);	
			}while(data[i].tgl.tahun<2018);
			system("cls");
			printf("\n ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹ UPDATE DATA KENDARAAN ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹\n\n");
			view(i);
		}
	}while(ubah!=7);
}

/*---LINEAR SEARCH------------------------------------------------------------------------------------------------------------------------------------------*/

int linear_search_update(pel data[], int n, char cari[]) { 
    int i; 
    for (i=0;i<n;i++) 
        if (!strcmp(cari, data[i].ken.nopol)) 
            return i;
    return -1; 
} 

int linear_search_nopol(pel data[], int n, char cari[]) { 
    int i; 
    for (i=0;i<n;i++) 
        if (!strcmp(cari, data[i].ken.nopol)) 
            return i;
    return -1; 
} 

int linear_search_tiket(pel data[], int n, int cari) { 
    int i;
    for (i=0;i<n;i++) 
        if (data[i].nomor_tiket == cari) {
            return i;
		}
	return -1;
} 

int linear_search_bobot(pel data[], int n, int cari) { 
    int i; 
    for (i=0;i<n;i++) 
        if (data[i].ken.bobot == cari) {
			return i;
		}
	return -1;
} 

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
			printf("\n\n\t ---< DATA BERHASIL DITAMBAHKAN >---\n\n");
			getch();
			system("cls");
		}
		else if(menu==2){
			system("cls");
			printf("\n ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹ VIEW DATA KENDARAAN ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹ \n");
			if(n==0){
				printf("\n\n\t ---< SILAHKAN INPUT DATA TERLEBIH DAHULU ! >---\n\n");
			}else{
				for(i=0;i<n;i++){
					view(i);
				}
				printf("\n\n\t ---< DATA BERHASIL DITAMPILKAN >---\n\n");
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
				printf("\n\n\t ---< DATA KENDARAAN TIDAK DITEMUKAN >---\n\n");
			}else{
				view(w);
				update(w);
				printf("\n\n\t ---< DATA BERHASIL DI-UPDATE >---\n\n");
			}
			getch();
			system("cls");
		}
		else if(menu==4){
	do{
				system("cls");
				pilihan_search();
				if(search==1){
					char cari_nopol[100];
					system("cls");
					printf("\n ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹ SEARCH DATA KENDARAAN  ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹\n");
					printf(" ====================  (Berdasarkan Nopol)   ====================\n\n");
					printf(" Masukkan Nopol Kendaraan yang dicari : "); fflush(stdin); gets(cari_nopol);
	
					int x;
					x=linear_search_nopol(data,n,cari_nopol);
					
					if(x==-1){
						printf("\n\n\t ---< DATA KENDARAAN TIDAK DITEMUKAN >---\n\n");
					}else{
						view(x);
						printf("\n\n\t ---< DATA KENDARAAN DITEMUKAN >---\n\n");
					}

//					i=0;
//					found=false;
//					while(i<=n && n!=NULL){
//						if(!strcmp(cari_nopol, data[i].ken.nopol)){
//							view(i);
//							found=true;
//							i++;
//						}else{
//							i++;
//						}
//					}
//					if (found!=true){
//						printf("\n DATA KENDARAAN TIDAK DITEMUKAN\n");
//					}
			
					getch();
					system("cls");
				}
				else if(search==2){
					int cari_tiket;
			
					system("cls");
					printf("\n ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹ SEARCH DATA KENDARAAN  ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹\n");
					printf(" ================== (Berdasarkan Nomor Tiket) ===================\n\n");
					printf(" Masukkan Nomor Tiket Kendaraan yang dicari : "); fflush(stdin); scanf("%d",&cari_tiket);
			
					int z;
					z=linear_search_tiket(data,n,cari_tiket);
					
					if(z==-1){
						printf("\n\n\t ---< DATA KENDARAAN TIDAK DITEMUKAN >---\n\n");
					}else{
						view(z);
						printf("\n\n\t ---< DATA KENDARAAN DITEMUKAN >---\n\n");
					}
					
//					i=0;
//					found=false;
//					while(i<=n && !found){
//						if(cari_tiket==data[i].nomor_tiket){
//							found=true;
//						}else{
//						i++;
//						}
//					}
//					if (found==true){	
//						view(i);
//					}else{
//						printf("\n DATA KENDARAAN TIDAK DITEMUKAN\n");
//					}
			
					getch();
					system("cls");
				}
				else if(search==3){
					int cari_bobot;
			
					system("cls");
					printf("\n ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹ SEARCH DATA KENDARAAN  ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹\n");
					printf(" ================ (Berdasarkan Bobot Kendaraan) =================\n\n");
					printf(" Masukkan Bobot Kendaraan yang dicari : "); fflush(stdin); scanf("%d",&cari_bobot);
			
					int y;
					y=linear_search_bobot(data,n,cari_bobot);
					
					if(y==-1){
						printf("\n\n\t ---< DATA KENDARAAN TIDAK DITEMUKAN >---\n\n");
					}else{
						view(y);
						y++;
						printf("\n\n\t ---< DATA KENDARAAN DITEMUKAN >---\n\n");
					}
					
//					i=0;
//					found=false;
//					while(i<=n && n!=NULL){
//						if(cari_bobot==data[i].ken.bobot){
//							view(i);
//							found=true;
//							i++;
//						}else{
//							i++;
//						}
//					}
//					if (found!=true){
//						printf("\n DATA KENDARAAN TIDAK DITEMUKAN\n");
//					} 
//			
					getch();
					system("cls");

				}
			}while(search!=4);
		}		else if(menu==5){
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
					printf("\n\n\t ---< DATA BERHASIL DI-SORT >---\n\n");
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
					printf("\n\n\t ---< DATA BERHASIL DI-SORT >---\n\n");
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
					printf("\n\n\t ---< DATA BERHASIL DI-SORT >---\n\n");
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
					printf("\n\n\t ---< DATA BERHASIL DI-SORT >---\n\n");
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
					printf("\n\n\t ---< DATA BERHASIL DI-SORT >---\n\n");
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
					printf("\n\n\t ---< DATA BERHASIL DI-SORT >---\n\n");
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
