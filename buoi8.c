#include <stdio.h>

// Fucition prototype
// khai bao tet ca cac ham chuc nang cua chuong trinh o day
int tongCongTich();
int tinhTong();
void tinhHieu();
int tinhTich();
float tinhThuong();
int tinhTuoi(int);



int main(){
	// function call (loi goi ham )
//	int tong;
//	tong = tinhTong();
//	printf("tong la: %d", tong);
	
	
//	tinhHieu ();
//
//	int tich;
//	tich = tinhTich();
//	printf("Tich la: %d \n", tich);
	
//	float thuong;
//	thuong = tinhThuong();
//	printf("Thuong la: %.2f\n", thuong);

// int kq = tongCongTich(); 
//printf("Tong la: %d", kq);
	
//	tinhTich();
//	
//	tinhThuong();
	int namSinh;
	printf("Nhap nam sinh");
	scanf("%d",&namSinh);
	int tuoi = tinhTuoi(namSinh);
	printf("Tuoi cua ban la: %d", tuoi);
	
	return 0;
	
}
int tongCongTich(){

int a, b, tong, tich;
	printf("nhap a: ");
	scanf("%d", &a);
	printf("nhap b: ");
	scanf("%d", &b);
	tong = a + b;
	tich = a+ b;
	return tong + tich;
}

//float tinhThuong() {
//   	float a, b;
//	printf("nhap a: ");
//	scanf("%f", &a);
//	printf("nhap b: ");
//	scanf("%f", &b);
//	
//	return a / b;
//}
// viet ham tinh tong 2 so
//int tinhTong(){
//	int a, b;
//	printf("nhap a: ");
//	scanf("%d", &a);
//	printf("nhap b: ");
//	scanf("%d", &b);
//	
//	
//	return a + b;
//}
//// viet ham tru 2 so
//void tinhHieu(){
//	int a, b;
//	printf("nhap a: ");
//	scanf("%d", &a);
//	printf("nhap b: ");
//	scanf("%d", &b);
//	
//	printf("hieu la: %d \n", a - b);
//	
//}
//
//// viet ham nhan 2 so
//int tinhTich(){
//	int a, b;
//	printf("nhap a: ");
//	scanf("%d", &a);
//	printf("nhap b: ");
//	scanf("%d", &b);
//	
//	return a * b;
//	
//}
////void tinhTich(){
////	int a, b;
////	printf("nhap a: ");
////	scanf("%d", &a);
////	printf("nhap b: ");
////	scanf("%d", &b);
////}

//float tinhThuong() {
//   	int a, b;
//	printf("nhap a: ");
//	scanf("%d", &a);
//	printf("nhap b: ");
//	scanf("%d", &b);
//	
//	return  (float) a / b;
//}

//void tinhThuong(){
//	int a, b;
//	printf("nhap a: ");
//	scanf("%d", &a);
//	printf("nhap b: ");
//	scanf("%d", &b);
//	
//	printf("Thuong la: %d \n", (float) a / b);
//	
//}
int tinhTuoi(int namSinh){
	return 2025 - namSinh;
}



