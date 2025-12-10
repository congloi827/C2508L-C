#include <stdio.h>
int main (){
//	int n;
//	printf("nhap so 1, 2, 3:");
//	scanf("%d", &n);
//	
//	if(n == 1 || n == 2 || n == 3){
//		switch (n){
//			case 1: printf("*"); break;
//			case 2: printf("**"); break;
//			case 3: printf("***");
//		}
//	}else{
//		printf("so ban nhap khong phai la  1, 2, 3");
//	}
//     int thang;
//     printf("nhap thang");
//     scanf("%d", &thang);
//     if (thang >= 1 && thang <= 12){
//     	switch(thang){
//     		case 1: case 2: case 3:
//     			printf("quy 1");
//     			break;
//     		case 4: case 5: case 6:
//     			printf("quy 2");
//     			break;
//     		case 7: case 8: case 9:
//     			printf("quy 3");
//     			break;
//     		case 10: case 11: case 12:
//     			printf("quy 4");
//		 }
//	 }else{
//	 	printf("thang khong hop le");
//	 }



// xay dung menu 2 cap
//    chuong trinh doc truyen 'thien long bat bo'
//     
//	1. Chuong 1
//	2. Chuong 2
//	3. Chuong 3
//	4. Chuong 4
//	
//	moi ban nhap so chuong (1-4):
//	
//	1. Chuong 1- Tap 1
//	2. Chuong 1 - Tap 2
//	3. Chuong 1 - Tap 3
//	
//	Moi ban nhap so tap (1-3):
//		
//	nguoi dung nhap so 1 => In ra dong chu ban da chon "Chuong 1 - Tap 1"


//  int chuong, tap;
//  printf("chuong trinh doc truyen 'thien long bat bo'\n");
//  printf("\n");
//  printf("1. Chuong 1 \n");
//  printf("2. Chuong 2 \n");
//  printf("3. Chuong 3 \n");
//  printf("4. Chuong 4 \n");
//  printf("\n");
//  printf("moi ban nhap so chuong (1-4): \n");
//  scanf("%d", &chuong);
//  
//  switch(chuong){
//  	case 1: printf("1. Chuong 1 - Tap 1 \n"); 
//            printf("2. Chuong 1 - Tap 2 \n"); 
//  	        printf("3. Chuong 1 - Tap 3 \n"); 
//  	        printf("moi ban nhap so tap (1-3): \n");
//  	        scanf("%d", &tap);
//            printf("ban da chon chuong %d tap %d", chuong, tap);
//            break;
//    case 2: printf("1. Chuong 2 - Tap 1 \n"); 
//            printf("2. Chuong 2 - Tap 2 \n"); 
//  	        printf("3. Chuong 2 - Tap 3 \n"); 
//  	        printf("moi ban nhap so tap (1-3): \n");
//  	        scanf("%d", &tap);
//            printf("ban da chon chuong %d tap %d", chuong, tap);
//            break;
//    case 3: printf("1. Chuong 3 - Tap 1 \n"); 
//            printf("2. Chuong 3 - Tap 2 \n"); 
//  	        printf("3. Chuong 3 - Tap 3 \n"); 
//  	        printf("moi ban nhap so tap (1-3): \n");
//  	        scanf("%d", &tap);
//            printf("ban da chon chuong %d tap %d", chuong, tap);
//            break;
//    case 4: printf("1. Chuong 4 - Tap 1 \n"); 
//            printf("2. Chuong 4 - Tap 2 \n"); 
//  	        printf("3. Chuong 4 - Tap 3 \n"); 
//  	        printf("moi ban nhap so tap (1-3): \n");
//  	        scanf("%d", &tap);
//            printf("ban da chon chuong %d tap %d", chuong, tap);
//	  }
    // vong lap for
    // in ra man hinh cac so tu 1- 10
    // i: index (chi muc)
    // bieu thuc so 1 chi chay 1 lan duy nhat trong vong lap for
//    int i;
//    for(i = 1; i <= 10; i++ ){
////    	continue;
//    	printf("%d \n", i);  	
//	}
	
	// co cach nao khac de thoat khoi vong lap hay khong
	// dung break
	
	//bai tap1
	//in ra mam hinh cac so chan tu 1-10
	
//	int i;
//	for(i = 1; i <= 10 ; i++){
//		if (i % 2 == 0){ // !=  de ra so le
//			printf("%d \n", i);
//		}
//	
//	}
//		int i;
//	for(i = 2; i <= 10 ; i = i + 2){
//		printf("%d \n", i);		
//	
//	}
     
     // bai 2: tinh tong tu 1-n voi n nhap tu ban phim
//     int n, tong = 0, i;
//     printf("nhap n :");
//     scanf("%d", &n);
//     for(i = 1;i <= n ; i++ ){
//     	tong = tong + i;
//     }
//    	printf("tong la %d",tong);
    // bai 3
//    int n, tong= 0, i;
//    printf("nhap so n: ");
//    scanf("%d", &n);
//    for(i = 1; i <= n; i = i + 2){
//    	tong = tong + i;
//    	// tong += i
//	} printf("tong la : %d", tong);
    
		
	// bai 4
//	int n, tong= 0, i;
//    printf("nhap so n: ");
//    scanf("%d", &n);
//    for(i = 2; i <= n; i = i + 2){
//    	tong = tong + i;
//    	// tong += i
//	} printf("tong la : %d", tong);
//	
	//vong lap while
	
//	int n = 1;
//	while(n <= 10){
//		printf("%d \n", n);
//		n++;
//	}
// vong lap do while
//    do{
//    	//block code
//    }while(condition)
	
//	int n = 1;
//	do{
//		printf("hello \n");
//		n++;
//	}while(n <= 10);

//  for( ; ; ){
//  	printf("hello");
//  }
//  int i
//  for(i = 0 ; ; ){
//  	printf("hello");
//  }
    // bai tap su dung do while in ra ca so 1-10 (khong in ra so 2)
    int i = 1;
    do{
		 if(i != 2){
    	printf("%d \n", i);
	}
    		i++;
	}while(i <= 10);
	
//	int i = 1;
//    do{
//		 if(i != 2){
//    	printf("%d \n", i);
//    	i++;
//    	continue;
//	}
//    		i++;
//	}while(i <= 10);
	

	
	
	
	return 0;
}
