/* ���� �������� �ѷ��ڽ��Ϳ� Ÿ���� Ű�� 140cm �̻��̰� ���̰� 10�� �̻��̾�� �Ѵٰ� ��������.
   ����ڿ��� Ű�� ���̸� ������ �Ŀ� "Ÿ�� �����ϴ�."�Ǵ� "�˼��մϴ�."�� ����ϴ� ���α׷��� �ۼ��Ͽ�����.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int height, age;

	printf("Ű�� �Է��Ͻÿ�(cm): ");
	scanf("%d", &height);
	printf("���̸� �Է��Ͻÿ�: ");
	scanf("%d", &age);

	if (height > 140 && age >= 10)
		printf("Ÿ�� �����ϴ�.");
	else
		printf("�˼��մϴ�.");

	return 0;
}