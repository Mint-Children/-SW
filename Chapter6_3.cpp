/* ��ǻ�Ϳ� ����, ����, �� ������ �ϴ� ���α׷��� �ۼ��϶�. ��ǻ�ʹ� ����ڿ��� �˸��� �ʰ� ����, ����, �� �߿��� ���Ƿ� �ϳ��� �����Ѵ�.
����ڴ� ���α׷��� �Է� �ȳ� �޽����� ����, 3�� �߿��� �ϳ��� �����ϰ� �ȴ�. ������� ������ ������ ��ǻ�ʹ� ���� ������ �����Ͽ��� ���� �̰����,
������ �˷��ش�.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {

	srand((unsigned int)time(NULL));
	
	int User;
	int Computer = (rand() % 3 + 1);

	printf("(1:���� 2:���� 3:��) �߿��� �ϳ��� �����Ͻÿ�: ");
	scanf("%d", &User);

	if (Computer == 1)
		printf("��ǻ�ʹ� ������ �����Ͽ����ϴ�.\n");
	else if (Computer == 2)
		printf("��ǻ�ʹ� ������ �����Ͽ����ϴ�.\n");
	else if (Computer == 3)
		printf("��ǻ�ʹ� ���� �����Ͽ����ϴ�.\n");
	
	if (User == Computer)
		printf("�����ϴ�.\n");
	else if ((User == 1 && Computer == 3) || (User == 2 && Computer == 1) || (User == 3 && Computer == 2))
		printf("����ڰ� �̰���ϴ�.\n");
	else if ((User == 1 && Computer == 2) || (User == 2 && Computer == 3) || (User == 3 && Computer == 1))
		printf("����ڰ� �����ϴ�.\n");
	
	return 0;
}