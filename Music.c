#include <stdio.h>
#include <windows.h>
FILE * pFile;


int func1();
void func2(void);
void func3(void);
void func4(void);
void delete_song(void);
void func6(void);

/*typedef struct Mp3rec
{
char name[SONGNAME];
char artist[SONGARTIST];
char length[SONGLENGTH];
char tname[TRACK_NUMBER];
};*/


int main (void)
{int menuchoice;
//fp= fopen("mp3_list.txt", "r" "W" "a"); either to add or read a text file.

printf ("********************************************\n");
printf ("************************************\n");
printf ("*********** MP3 Player **********\n");
printf ("********************************************");
printf("\n1: Play File");
printf("\n2: Show Library");
printf("\n3: Add Record");
printf("\n4: Edit/Modify ");

printf("\n\nEnter Choice From 1-4: ");
scanf("%i", &menuchoice);

switch (menuchoice)
{
case 1:
mciSendString("play 1.mp3 wait", NULL, 0, NULL);
break;
/*case 2:
func2();
break;
case 3:
func3();
break;
case 4:
func4();
break;*/

default:
printf("\nPROVAAAL");
break;
}


}
