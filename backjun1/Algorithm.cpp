#include <iostream>

void basic() {
	printf("Hello WorldEnter\n"); // \n = Enter
	printf("abcdef\tb\tc\n"); // \t = ��

	double b = 1.12345678912345678912;

	printf("%30.20f\n", b);

	printf("%30d abc\n", 100);

	printf("%d %d %d %d %d\n", 1, 2, 3, 4, 5);
}

// 1�ܿ�
// � ������ �ذ��ϱ� ���� �����̳� ����
// ex) ������ ������ ��(input) �̰� Ȧ������ ¦������ ���(output)�ϴ� ������ ���α׷��Ͻÿ�.

// Odd  : Ȧ��
// Even : ¦��
bool isEven(int value) {
	bool ret = value % 2 == 0;

	if (ret) printf("¦��\n");
	else printf("Ȧ��\n");

	return ret;
}


// ���� �Լ��� �׽�Ʈ���� ����
// �˰��� input -> output ���Ǹ� �����ϸ� ��.
void main() {
	int n;
	int arr[250];

	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &arr[i]);
	}
	
}