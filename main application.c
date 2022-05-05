
// DSA PROJECT - BANK MANAGEMENT SYSTEM
// TEAM MEMBERS :
// 1. ABHISHEK KUMAR (20BCE0210)
// 2. SOUMODEEP CHAKRABORTY (20BCE0340)
// 3. KUNAL SINGH (20BCE0449)
// 4. UTSAV MISHRA (20BEC0200)
// 5. KEERTHANA B (20BML0014)


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include "set (1).c"


USER_DETAIL *headforbst=NULL;

ADDRESS *hforadd=NULL;
int main(int argc, char const *argv[])
{
	time_t t;
	srand((unsigned)time(&t));
	hforadd=addressinlist();
	headforbst=from_file_to_tree();
	printf("\t\t****************************************************************\n\t\t\t\tWelcome to Smart Banking Service\n\n");
	printf("\t\t****************************************************************\n");
	printf("\n\t\t\t\tTEAM 2 - \n\n\t\t\t\t[20BCE0210] ABHISHEK KUMAR \n\t\t\t\t[20BML0014] KEERTHANA B \n\t\t\t\t[20BCE0340] SOUMODEEP CHAKRABORTY \n\t\t\t\t[20BCE0449] KUNAL SINGH \n\t\t\t\t[20BEC0200] UTSAV MISHRA ");
    printf("\n\t\t****************************************************************\n");
	char pcheck[4];
	strcpy(pcheck,"00");
	int d;
	while(1){

        printf("\n    MENU \n\n");
		printf("1. NEW CUSTOMER\n");
		printf("2. EXISTING CUSTOMER\n");
		printf("3. EXIT\n");
		printf("\nYOUR CHOICE : ");
        scanf("%d",&d);

       switch(d)
       {
       case 1:
        headforbst=NEW_USER(headforbst);
        writingtofile(headforbst);
        break;

       case 2:
        headforbst=EXISTING_USER(headforbst);
        writingtofile(headforbst);
        break;

       case 3:
        exit(1);
        break;

       default: printf("INVALID CHOICE ! \n");
       }}

	return 0;
}
