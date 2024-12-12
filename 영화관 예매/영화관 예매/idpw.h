#ifndef IDPW
#define IDPW

void idpw();
int memberjoin();
void login();

typedef struct member
{
	char id[10];
	char pw[10];
	char name[10];
	int age[10];
	int seat[10][10];
}member;

member user[10];

int order;

int user_num;

#endif IDPW