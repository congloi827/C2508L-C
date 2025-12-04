#include <stdio.h>

int main(){
//	int a, b, tam;
//	printf ("nhap so a:");
//	scanf("%d", &a);
//	printf ("nhap so b:");
//	scanf("%d", &b);
//	// printf("nhap a, b");
//	// scanf("%d%d", &a, &b);
//	
//	if (a > b) {
//	tam = a;
//	a = b;
//	b = tam;
//	}
//	printf ("gia tri a la: %d, gia tri b la: %d ", a ,b);
//    int a, b;
//    printf ("nhap a, b");
//    scanf("%d%d", &a, &b);
//    if(a == b){
//    	printf ("a == b ");
//	} else {
//		printf (" a != b");
//	}
//	char c;
//	printf("nhap ki tu: ");
//	scanf("%c", &c);
//	if ( c >= 'a' && c <= 'z'){		
//	 c = c - 32;
//   c -= 32
//		printf ("ki tu hoa la %c", c);
//	}else {
//		printf("ki tu vua nhap bang c %c", c);
//	}
// char c;
// printf("nhap ki tu :");
// scanf("%c", &c);
// if (c >= 'a' && c <= 'z'){
// 	c -= 32;
// 	printf (" ki tu in hoa la: %c", c);
// } else if  (c >= 'A' && c <= 'Z'){
// c += 32;
// printf ("ki tu thuong la: %c ", c);
// } else if  (c >= '0' && c <= '9') {
// 	printf (" ki tu ta vua nhap la ki tu so : %c", c);
// } else {
// 	printf (" chung ta vua nhap la ki tu %c", c);
// }
//int tuoi;
//int  giaVe = 50000;
//printf(" nhap tuoi");
//scanf("%d", &tuoi);
//if (tuoi < 6 ) {
//	giaVe = giaVe - giaVe * 0.5;
//}else if (tuoi <= 10) {
//	giaVe = giaVe - giaVe * 0.3;
//} else if (tuoi <= 15); {
//giaVe = giaVe - giaVe * 0.15;
//}
//printf("tien ve cua ban la: %d", giaVe);
float diem;
printf("nhap diem cac mon :");
scanf("%f", &diem);
if(diem >= 0 && diem <= 10){
	if (diem >= 9){
	printf(" xuat sac :");
}else if (diem >8){

printf("hoc sinh gioi: ");
} else if (diem >7){
	printf("hoc sinh kha:");
}else if (diem >6){
	printf("hocsinh trungbinh");
} else if(diem >= 5){
	printf("trungbinh");
} else{printf("yeu");
}
}else {printf ("diem khong hop le");
}
 
	

	
	
	return 0;
}
