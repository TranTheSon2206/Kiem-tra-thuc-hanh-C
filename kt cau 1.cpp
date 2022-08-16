#include<stdio.h>// Cau 1:Tinh dien tich tam giac tu 3 cach nhap tu ban phim
#include<math.h>
int main(){
	//Nhap du lien 3 canh
	float a,b,c,s,p;
	printf("Nhap lan luot so lieu cua ba canh a,b,c\n");
	scanf("%f%f%f",&a,&b,&c);
	p=(a+b+c)/2;//Tinh nua chu vi tam giac
	if (a+b>c && a+c>b && b+c>a) {
		s=sqrt(p*(p-a)*(p-b)*(p-c));// Tinh dien tich tam giac theo cong thuc Heron
		printf("Dien tich cua tam giac la S: %f",s);
	}
	else {
		printf("Ba canh vua nhap khong tao thanh mot tam giac");
	}
return 0;
}

