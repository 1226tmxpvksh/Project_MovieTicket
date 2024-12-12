#include <stdio.h>
#include "idpw.h"
#include "file.h"

void idpw()
{
	int menu;

	while (1)
	{
		printf("1.회원가입\n2.로그인\n3.종료\n");
		printf("메뉴를 선택하십시오:");
		scanf_s("%d", &menu);

		if (menu == 1)
		{
			memberjoin();
			continue;
		}
		else if (menu == 2)
		{
			login();
			break;
		}

		else if (menu == 3)
		{
			exit();
		}
		else
		{
			printf("1부터3까지 입력하세오");
		}

	}
}

int memberjoin()
{
	int menu;
	int condition = 1;
	while (condition)
	{
		condition = 0;
		printf("회원가입\n");
		printf("ID:");
		scanf("%s", &user[order].id);
		printf("PW:");
		scanf("%s", &user[order].pw);
		printf("이름:");
		scanf("%s", &user[order].name);
		printf("나이:");
		scanf("%s", &user[order].age);
		for (int j = 0; j < order; j++)
		{
			if (strcmp(user[order].id, user[j].id) == 0)
			{
				printf("아이디가 중복되었습니다\n");
				condition = 1;
				break;
			}
		}
	}
	file();
	idpw();
}