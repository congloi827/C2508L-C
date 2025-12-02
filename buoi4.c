#include <stdio.h>
#include <stdbool.h>

int main(){
//	int x = 6;
//	printf("%d \n", x < 5 && x < 10);
//	printf("%d \n", x < 5 || x < 10);
//	printf("%d \n", !(x < 5 || x < 10));
//    bool isHandsome = false; 
//    printf("%d", isHandsome);
//      int x = 10;
//      if(x > 10); {
//	  // khoi code nay duoc thuc thi neu dieu kien tren la true
//	  printf("x > 10");
//	  } else {
//	  	printf("x <= 10");
//	  }
// viet chuong trinh kiem tra so chan, le

//     int x;
//     printf("nhap 1 so nguyen bat ky");
//     scanf("%d", &x);
//     if(x > 0){
//     	if(x % 2 == 0){
//     	printf("x la so chan");
//	    } else{
//	 	printf("x la so le");
//	   }
//	 } eles {
//	 	printf("gia tri nhap vao khong hop le!");
//	 }
//     float a, b, x;
//     printf("nhap so nguyen bat ky");
//     scanf("%f", &a);
//     printf("nhap so nguyen bat ky");
//     scanf("%f", &b);
//     if(a == 0){
//     	if(b != 0){
//     	printf ("phuong trinh vo nghiem");
//	 }else{
//	 	// truong hop b == 0
//	 	printf("phuong trinh vo so nghiem");
//	 	
//	 } 
//	} else {
//	 	// truong hop a!=0
//	 	x = - b / a;
//	 	printf("phuong trinh co nghiem x = %.2f", x);
//		}
//     if (a == 0 && b != 0 ){
//     	printf ("phuong trinh vo nghiem");
//	 } else if (a == 0 && b == 0){
//	 	printf("phuong trinh vo so nghiem");
//	 } else {
//	 	x = - b / a;
//	 	printf("phuong trinh co nghiem x = %.2f", x);
//	 }
//	 
int a, b, max;
printf("nhap so nguyen a:");
scanf("%d", &a);
printf("nhap so nguyen b:");
scanf("%d", &b);
  max = a;
if( b > a) {
	max = b;
}
	printf("so lon nhat la so: %d", max);
	
	// cu phap short hand cua if
//	int a, b;
//    printf("nhap so nguyen a:");
//	scanf("%d", &a);
//	printf("nhap so nguyen b:");
//	scanf("%d", &b);
//	int max = (b > a ) ? b : a; 
//	printf("so nguyen lon nhat la : %d \n", max );


     
     
    return 0;
}
