#include <stdio.h>
void main() {
	//정수 3개 n1, n2 , n3를 입력받아서
	// n1+ n2 + n3를 출력하고
	// n1 + n2 + n3를  출력해보는 프로그램을 작성하세요
	// n1 - n2 - n3를  출력해보는 프로그램을 작성하세요
	// n1 * n2 * n3를  출력해보는 프로그램을 작성하세요
	// n1 / n2 / n3를  출력해보는 프로그램을 작성하세요

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