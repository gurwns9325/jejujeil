#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int luck=0;
int chair=0;
char num[40];
int A1, A2, B1, B2, i, a, all, re;
int timnum=0;
int choice(){
  luck=(rand()%all)+1;
  for(i=0;i<all;i++){
  	if(luck==num[i]){
	  num[i]=0;
	  return luck;
	  }
  }
  choice();
}

int main()
{
	srand(time(NULL));
	int i;
	printf("전체 학생 인원을 입력하세요\n");
	scanf("%d", &all); 
	for(i=0;i<all;i++){
		num[i]=i+1;
	}
	A1=(all/4)-(all%4);
	B1=4;
	A2=all%4;
	B2=5;
	system("cls");
	if(A2!=0){
		for(a=0;a<A1;a++){
			for(i=0;i<B1;i++){
			chair=choice();
			Sleep(300);
				if(chair>9){
				printf("%d   ",chair);
				}
				else{
				printf("%d    ",chair);
				}
			}
			timnum=timnum+1;
			Sleep(300);
			printf("     ----------%d조", timnum); 
			printf("\n");
		}
		for(a=0;a<A2;a++){
			for(i=0;i<B2;i++){
			chair=choice();
			Sleep(300);
				if(chair>9){
				printf("%d   ",chair);
				}
				else{
				printf("%d    ",chair);
				}
			}
			timnum=timnum+1;
			Sleep(300);
			printf("----------%d조", timnum);
			printf("\n");
		}
	}
	if(A2==0){
		for(a=0;a<A1;a++){
			for(i=0;i<B1;i++){
			chair=choice();
			Sleep(300);
				if(chair>9){
				printf("%d   ",chair);
				}
				else{
				printf("%d    ",chair);
				}
			}
			timnum=timnum+1;
			Sleep(300);
			printf("----------%d조", timnum);
			printf("\n");
		}
		printf("\n");
	}
	printf("다시 시작하려면 1을 입력하세요.");
	scanf("%d", &re);
	if(re==1){
	system("cls");
	timnum=0;
	main();
	}
return 0;
}
