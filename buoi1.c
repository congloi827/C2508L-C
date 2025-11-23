// khai bao thu vien (preprocesor tien xu ly )
 // sutio.h = standard input output ( thu vien nhap xuat chuan
// #include "studio.h
 #include  <stdio.h>

int main() {
    // code o trong day
    // ham main la ham dac biet trong C, chuong trinh se tu goi ham main khi run
    
    // ham printf la ham duoc viet san trong thu vien stdio.h. "hello Word" la doi so (argument) cua ham
    //printf ("hello word \n\n\n\n");
    //printf ("\t hello word");
    
    // yeu cau nhap vao 2 so a, b sau do in ra man hinh tong cua 2 so
    int a, b; // int: integer la kieu so nguyen
    printf ("nhap vao so a: ");
    scanf ("%d", &a); // d la digit
    
    printf("nhap vao so b: ");
    scanf("%d", &b);
    
    printf ("tong cua a va b la: %d ", a + b);
    return 0;
}
