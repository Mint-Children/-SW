#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

void printMenu() {
	printf("--------------------------------------\n");
	printf("1. 'in' 인치에서 변환합니다.\n");
	printf("2. 'yard' 야드에서 변환합니다.\n");
	printf("3. 'cm' 센치미터에서 변환합니다.\n");
	printf("4. 종료합니다. \n");
	printf("--------------------------------------\n");
}

void inMenu() {
	printf("--------------------------------------\n");
	printf("1. 'yard' 야드로 변환합니다.\n");
	printf("2. 'cm' 센치미터로 변환합니다.\n");
	printf("--------------------------------------\n");
}

void yardMenu() {
	printf("--------------------------------------\n");
	printf("1. 'in' 인치로 변환합니다. \n");
	printf("2. 'cm' 센치미터로 변환합니다.\n");
	printf("--------------------------------------\n");
}

void cmMenu() {
	printf("--------------------------------------\n");
	printf("1. 'in' 인치로 변환합니다.");
	printf("2. 'yard'로 변환합니다.");
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
		printf("메뉴에서 선택하세요.\n");
		scanf_s("%d", &choice_1);
		if (choice_1 == 4) break;

		else if (choice_1 == 1) {
			printf("길이를 적어주세요.\n");
			scanf_s("%lf", &len);
			inMenu();
			printf("메뉴에서 선택하세요.\n");
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
			printf("길이를 적어주세요.\n");
			scanf_s("%lf", &len);
			yardMenu();
			printf("메뉴에서 선택하세요.\n");
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
			printf("길이를 적어주세요.\n");
			scanf_s("%lf", &len);
			cmMenu();
			printf("메뉴에서 선택하세요.\n");
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
			printf("잘못된 값을 입력하셨습니다.\n");
	}
}