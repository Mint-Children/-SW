#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

void printMenu() {
	printf("--------------------------------------\n");
	printf("1. 'in' ��ġ���� ��ȯ�մϴ�.\n");
	printf("2. 'yard' �ߵ忡�� ��ȯ�մϴ�.\n");
	printf("3. 'cm' ��ġ���Ϳ��� ��ȯ�մϴ�.\n");
	printf("4. �����մϴ�. \n");
	printf("--------------------------------------\n");
}

void inMenu() {
	printf("--------------------------------------\n");
	printf("1. 'yard' �ߵ�� ��ȯ�մϴ�.\n");
	printf("2. 'cm' ��ġ���ͷ� ��ȯ�մϴ�.\n");
	printf("--------------------------------------\n");
}

void yardMenu() {
	printf("--------------------------------------\n");
	printf("1. 'in' ��ġ�� ��ȯ�մϴ�. \n");
	printf("2. 'cm' ��ġ���ͷ� ��ȯ�մϴ�.\n");
	printf("--------------------------------------\n");
}

void cmMenu() {
	printf("--------------------------------------\n");
	printf("1. 'in' ��ġ�� ��ȯ�մϴ�.");
	printf("2. 'yard'�� ��ȯ�մϴ�.");
	printf("--------------------------------------\n");
}

double in_to_yard(double len_in) {
	return len_in * 0.027778;
}

double in_to_cm(double len_in) {
	return len_in * 2.54;
}

double yard_to_in(double len_yard) {
	return len_yard * 36;
}

double yard_to_cm(double len_yard) {
	return len_yard * 91.44;
}

double cm_to_in(double len_cm) {
	return len_cm * 0.393701;
}

double cm_to_yard(double len_cm) {
	return len_cm * 0.010936;
}

int main() {
	int choice_1;
	int choice_2;
	double len;
	double value = 0.0;
	while (1) {
		printMenu();
		printf("�޴����� �����ϼ���.\n");
		scanf_s("%d", &choice_1);
		if (choice_1 == 4) break;

		else if (choice_1 == 1) {
			printf("���̸� �����ּ���.\n");
			scanf_s("%lf", &len);
			inMenu();
			printf("�޴����� �����ϼ���.\n");
			scanf_s("%d", &choice_2);
			if (choice_2 == 1) {
				value = in_to_yard(len);
				printf("%lf\n", value);
			}
			else if (choice_2 == 2) {
				value = in_to_cm(len);
				printf("%lf\n", value);
			}
		}
		else if (choice_1 == 2) {
			printf("���̸� �����ּ���.\n");
			scanf_s("%lf", &len);
			yardMenu();
			printf("�޴����� �����ϼ���.\n");
			scanf_s("%d", &choice_2);
			if (choice_2 == 1) {
				value = yard_to_in(len);
				printf("%lf\n", value);
			}
			else if (choice_2 == 2) {
				value = yard_to_cm(len);
				printf("%lf\n", value);
			}
		}
		else if (choice_1 == 3) {
			printf("���̸� �����ּ���.\n");
			scanf_s("%lf", &len);
			cmMenu();
			printf("�޴����� �����ϼ���.\n");
			scanf_s("%d", &choice_2);
			if (choice_2 == 1) {
				value = cm_to_in(len);
				printf("%lf\n", value);
			}
			else if (choice_2 == 2) {
				value = cm_to_yard(len);
				printf("%lf\n", value);
			}
		}
		else
			printf("�߸��� ���� �Է��ϼ̽��ϴ�.\n");
	}
}