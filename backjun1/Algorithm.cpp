#include <iostream>

void basic() {
	printf("Hello WorldEnter\n"); // \n = Enter
	printf("abcdef\tb\tc\n"); // \t = 탭

	double b = 1.12345678912345678912;

	printf("%30.20f\n", b);

	printf("%30d abc\n", 100);

	printf("%d %d %d %d %d\n", 1, 2, 3, 4, 5);
}

// 1단원
// 어떤 문제를 해결하기 위한 과정이나 절차
// ex) 정수가 들어왔을 때(input) 이게 홀수인지 짝수인지 출력(output)하는 과정을 프로그램하시오.

// Odd  : 홀수
// Even : 짝수
bool isEven(int value) {
	bool ret = value % 2 == 0;

	if (ret) printf("짝수\n");
	else printf("홀수\n");

	return ret;
}


// 메인 함수는 테스트같은 느낌
// 알고리즘 input -> output 조건만 만족하면 됨.
void main() {
	int n;
	int arr[250];

	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &arr[i]);
	}
	
}