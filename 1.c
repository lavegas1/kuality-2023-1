#include <stdio.h>

void main() {
	int Number;
	char Name[30];
	char Determination[100];

	printf("이름 : ");
	scanf_s("%s", &Name,30);

	printf("학번 : ");
	scanf_s("%d", &Number);

	printf("다짐 : ");
	scanf_s("%s", &Determination, 100);
	
	printf("=====자기소개서=====\n");
	printf("이름 : %s\n", &Name);
	printf("학번 : %d\n", Number);
	printf("다짐 : %s\n", &Determination);

}