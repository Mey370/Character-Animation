#include <stdio.h> 
#include <conio.h> 
#include <time.h>  
#include <windows.h> 
#include <stdlib.h> 
void gotoxy(int x, int y); 
int main()
{
	system("color f0");
    long i;
	char FileName[100], hi[132000];/*�������ַ�����,�����洢���ļ��򿪵��ַ���*/
	FILE *in;
	//getch(); 
    printf("3\n");
    Sleep(1000);
    printf("2\n");
    Sleep(1000);
    printf("1\n");
    Sleep(1000);
    printf("start/n");
	system("C:\\Users\\Dell\\Desktop\\GitHub\\�ٱ�Сӣ.mp3");	//����Ƶ����Ƶ�ļ���


    
    
	for(i=1;i<=1013;i++)
	{
		sprintf(FileName,"C:\\Users\\Dell\\Desktop\\GitHub\\txtͼƬ\\(%ld).txt",i);/*�ļ��ĵ�ַ��ַ�Լ��޸�,�ļ���������д*/
        
	in=fopen(FileName,"r");
	fread(hi,1,13200,in);//������һ��TXT�ļ�����ַ���. 
	printf("%s\n%d",hi,i);
	Sleep(40);//�ȴ�40����ִ��
	gotoxy(1,1);fclose(in); 
	}
} 
void gotoxy(int x, int y) //��������ǽ����λ���ƶ�������x,y 
	{
		COORD pos;pos.X = x - 1;pos.Y = y - 1;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	}