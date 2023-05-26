/* 04. 전달된 문자가 알파벳 문자인지 아닌지를 검사하는 함수 check_alpha(char c)를 작성하고 이것을 호출하여서 사용자가 입력한 문자가 
       알파벳('a'에서 'z'까지)인지를 판단하여 출력하는 프로그램을 작성하라. */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check_alpha(char c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return 1;
    }
    return 0;
}

int main() {
    printf("문자를 입력하세요: ");
    char ch;

    scanf("%c", &ch);

    if (check_alpha(ch) == 1)
        printf("%c는 알파벳 문자입니다.", ch);
    else
        printf("%c는 알파벳 문자가 아닙니다.", ch);

}