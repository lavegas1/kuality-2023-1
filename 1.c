#include <stdio.h>

void main() {
	int Number;
	char Name[30];
	char Determination[100];

	printf("�̸� : ");
	scanf_s("%s", &Name,30);

	printf("�й� : ");
	scanf_s("%d", &Number);

	printf("���� : ");
	scanf_s("%s", &Determination, 100);
	
	printf("=====�ڱ�Ұ���=====\n");
	printf("�̸� : %s\n", &Name);
	printf("�й� : %d\n", Number);
	printf("���� : %s\n", &Determination);

}