#include <stdio.h>
void main() {
	//���� 3�� n1, n2 , n3�� �Է¹޾Ƽ�
	// n1+ n2 + n3�� ����ϰ�
	// n1 + n2 + n3��  ����غ��� ���α׷��� �ۼ��ϼ���
	// n1 - n2 - n3��  ����غ��� ���α׷��� �ۼ��ϼ���
	// n1 * n2 * n3��  ����غ��� ���α׷��� �ۼ��ϼ���
	// n1 / n2 / n3��  ����غ��� ���α׷��� �ۼ��ϼ���

	int n1, n2, n3;
	char c;
	printf("Input Number");
	scanf_s("%d", &n1);
	scanf_s("%d",&n2);
	scanf_s("%d",&n3);
	
	printf("Input Operator");
	scanf_s("%c", &c);
	scanf_s("%c", &c);

	switch (c) {
	case '+':
		printf("%d + %d + %d = %d\n", n1, n2, n3, (n1 + n2 + n3));
		break;

	case '-':
		printf("%d - %d - %d = %d\n", n1, n2, n3, (n1 - n2 - n3));
		break;
	case '*':
		printf("%d * %d * %d = %d\n", n1, n2, n3, (n1 * n2 * n3));
		break;
	case '/':
		printf("%d / %d / %d = %d\n", n1, n2, n3, (n1 / n2 / n3));
		break;
	}

	if (c == '+') {
		printf("%d + %d + %d = %d\n", n1, n2, n3, (n1 + n2 + n3));
	}
	else if(c=='-'){
		printf("%d - %d - %d = %d\n", n1, n2, n3, (n1 - n2 - n3));
	}
	else if (c == '*') {
		printf("%d * %d * %d = %d\n", n1, n2, n3, (n1 * n2 * n3));
	}
	else {
		printf("%d / %d / %d = %d\n", n1, n2, n3, (n1 / n2 / n3));
	}

	
	
	
	
}