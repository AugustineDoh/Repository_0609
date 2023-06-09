#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXCONTACT 100

typedef struct ContactInfo {	//구조체 설정
char name[21];
char phone[16];
char birth[9];
} Contact;					//구조체 이름

void printMainMenu();				//상시출력메뉴
void swapContact(Contact* contactData, int index1, int index2);			//정보교환 함수
void sortContact(Contact* contactData, int numContact);				//이름순서대로 정렬 함수
void insertContact(Contact* contactData, int *numContact);			//정보입력함수
void deleteContact(Contact* contactData, int *numContact);			//정보삭제함수
void printAll(Contact* contactData, int numContact);				//모든정보출력함수
void findContactByBirth(Contact* contactData, int numContact);			//생일추적함수
