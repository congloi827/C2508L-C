// comment nghia la khong cho trinh bien dich dich dong code nay
// day la tien xu ly (preprocessor). muc dich la nhung thu vien Standard input output (thu vien nhap xuat chuan) vao trong file thuc thi
#include <stdio.h>

// Day la ham ma chuong trinh se thuc thi dau tien
int main(){
	// day la than ham
	
	// ham printf (print formatted) dung de in ra man hinh 1  cai gi do
	printf("Xin chao \n");
	
	int tuoi = 25;
	// %d %f %c %lf... goi la format specifier (dac ta dinh dang)
	printf("tuoi cua toi la: %d \n", tuoi);
	
    float diemToan = 4.5;
	float diemVan = 7.5;
	float diemAnh = 5.5;
	float diemTrungbinh;
	
	printf("Diem Toan : %f \n", diemToan);
	printf("Diem Van : %f \n", diemVan);
	printf("Diem Anh : %f \n", diemAnh);
	
	diemTrungbinh = (diemToan + diemVan + diemAnh) / 3;
	
	printf("Diem Trung Binh la: %f \n", diemTrungbinh);
	
	char kytu = 'A'; // ky tu dung nhay don
	
	printf("gia tri cua bien ky tu la: %c \n", kytu);
	
	// de nhap du lieu tu ban phim thi minh dung scanf()
	int a;
	printf("Nhap so a: ");
	// dau & la toan tu dia chi, dung de xac dinh gia tri cua bien a duoc luu o dau trong bo nho RAM
	scanf("%d", &a);
	
	printf("gia tri cua bien a la: %d \n", a);
	
	int b;
	printf ("nhap so b: ");
	scanf("%d", &b);
	printf("gia tri cua bien b la: %d \n", b);
	int tong = a + b;
	printf ("tong gia tri cua a va b: %d \n", tong);
	
	return 0;
}
