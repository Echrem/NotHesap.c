#include <stdio.h>

int main(){

int not;
float toplamnot;
float ortalamanot;

 for(int i=0; i<3;){
printf("%d notu giriniz:",i++);
scanf("%d", &not);
toplamnot =toplamnot + not;
ortalamanot=(toplamnot/3);}

if (ortalamanot<=100 && ortalamanot>=50)
	{
		printf("Çalışkan Öğrenci Ortalama: %f \n",ortalamanot);
		
	}
	 else if (ortalamanot<=50 && ortalamanot>=1)
	{
		printf("Vasat Öğrenci Ortalama:%f \n",ortalamanot);
		
	}
 

}
