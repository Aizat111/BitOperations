#include<stdio.h>
#include<conio.h>
int a(unsigned short sayi,int ksayi){
	int i;
	for(i=sizeof(int)*4; i>sizeof(int)*4-ksayi; i--){
		if(sayi & 1<< sizeof(int)*4-1){
			sayi=sayi<<1;
			sayi|=1<<0;
		}
		else sayi=sayi<<1;
	}
	printf("sonuc=%d",sayi);
	return sayi;
}
int main(){
	unsigned short sayi;
	int ksayi;
	printf("sayi giriniz:");scanf("%d",&sayi);
	printf("kac sola kaydirilacak:");scanf("%d",&ksayi);
	a(sayi,ksayi);
}
