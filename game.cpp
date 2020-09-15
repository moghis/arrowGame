#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
void gotoxy(int x, int y)
{
	COORD c = { x, y }; 
	SetConsoleCursorPosition( GetStdHandle(STD_OUTPUT_HANDLE) , c);
}
struct account
{
	char H[80];
}customer[10];
void ClearCoursor(){
  HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
  CONSOLE_CURSOR_INFO info;
  info.dwSize = 100;
  info.bVisible = FALSE;
  SetConsoleCursorInfo(consoleHandle, &info);}
main()
{	
	ClearCoursor();
	char q[10];
	int a[200],l[200],A[20],B[10],F[10];
	int x,y,z,b,i=-1,j,m=0,n=0,k=0,t,c,d,r=3000,s=1,p=1,o=0,sum=0,f,e,h=0,W=2,S,g,max,v,P=5,I,T;
	while(1)
	{
	system("cls");
	system("color cf");
	printf("                                                        MENU\n");
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),0Xc5);
	printf("%c%c",61,62);
	printf("  1.START\n\n\n");
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),0Xcf);
	printf("  2.HIGH SCORES\n\n\n");
	printf("  3.SETING\n\n\n");
	printf("  4.Exit\n\n\n");
	x=1;
	z=0;
	while(x!=13)
	{	
		x=getch();
		if(x!=13)
			y=getch();
	if(x==224&&y==80&&z==0)
	{
		system("cls");
		printf("                                                        MENU\n");
		printf("  1.START\n\n\n");
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),0Xc5);
		printf("%c%c",61,62);
		printf("  2.HIGH SCORES\n\n\n");
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),0Xcf);
		printf("  3.SETING\n\n\n");
		printf("  4.Exit\n\n\n");	
		z=1;
	}
	else if(x==224&&y==72&&z==0)	
	{
		system("cls");
		printf("                                                        MENU\n");
		printf("  1.START\n\n\n");
		printf("  2.HIGH SCORES\n\n\n");
		printf("  3.SETING\n\n\n");
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),0Xc5);
		printf("%c%c",61,62);
		printf("  4.Exit\n\n");
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),0Xcf);
		z=2;	
	}
	else if(x==224&&y==80&&z==1)
	{
		system("cls");
		printf("                                                        MENU\n");
		printf("  1.START\n\n\n");
		printf("  2.HIGH SCORES\n\n\n");
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),0Xc5);
		printf("%c%c",61,62);
		printf("  3.SETING\n\n\n");
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),0Xcf);
		printf("  4.Exit\n\n\n");
		z=3;
	}
	else if(x==224&&y==72&&z==1)
	{
		system("cls");
			printf("                                                        MENU\n");
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),0Xc5);
		printf("%c%c",61,62);
		printf("  1.START\n\n\n");
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),0Xcf);
		printf("  2.HIGH SCORES\n\n\n");
		printf("  3.SETING\n\n\n");
		printf("  4.Exit\n\n\n");	
		z=0;
	}
	else if(x==224&&y==72&&z==2)
	{
		system("cls");
			printf("                                                        MENU\n");

		printf("  1.START\n\n\n");
		printf("  2.HIGH SCORES\n\n\n");
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),0Xc5);
		printf("%c%c",61,62);
		printf("  3.SETING\n\n\n");
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),0Xcf);
		printf("  4.Exit\n\n\n");
		z=3;
	}
	else if(x==224&&y==80&&z==2)
	{
		system("cls");
			printf("                                                        MENU\n");
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),0Xc5);
		printf("%c%c",61,62);
		printf("  1.START\n\n\n");
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),0Xcf);
		printf("  2.HIGH SCORES\n\n\n");
		printf("  3.SETING\n\n\n");
		printf("  4.Exit\n\n\n");	
		z=0;
	}
	else if(x==224&&y==80&&z==3)
	{
		system("cls");
		printf("                                                        MENU\n");
		printf("  1.START\n\n\n");
		printf("  2.HIGH SCORES\n\n\n");
		printf("  3.SETING\n\n\n");
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),0Xc5);
		printf("%c%c",61,62);
		printf("  4.Exit\n\n\n");
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),0Xcf);
		z=2;	
	}
	else if(x==224&&y==72&&z==3)
	{
		system("cls");
		printf("                                                        MENU\n");
		printf("  1.START\n\n\n");
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),0Xc5);
		printf("%c%c",61,62);
		printf("  2.HIGH SCORES\n\n\n");
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),0Xcf);
		printf("  3.SETING\n\n\n");
		printf("  4.Exit\n\n\n");	
		z=1;
	}
	}
	if(z==2)
	{
		system("color 2f");
		system("cls");
		printf("                                                         EXIT\n\n");
		printf("ARE YOU SURE WANT TO EXIT?\n\n");
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),0X21);
		printf("%c%c",61,62);
		printf("yes\n\n");
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),0X2f);
		printf("no");
		x=1;	
		while(x!=13)
		{
			x=getch();
			if(x!=13)
				y=getch();
			if(x==224&&(y==80||y==72)&&z==2)
			{
				system("cls");
				printf("                                                         EXIT\n\n");
				printf("ARE YOU SURE WANT TO EXIT?\n\n");
				printf("yes\n\n");
				SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),0X21);
				printf("%c%c",61,62);
				printf("no");
				SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),0X2f);
				z=1;	
			}
			else if(x==224&&(y==80||y==72)&&z==1)
			{
				system("cls");
				printf("                                                         EXIT\n\n");
				printf("ARE YOU SURE WANT TO EXIT?\n\n");
				SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),0X21);
				printf("%c%c",61,62);
				printf("yes\n\n");
				SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),0X2f);
				printf("no");
				z=2;
			}
		}
		if(z==2)
			break;
		z=-1;		
	}
	if(z==0)
	{
		system("color 5f");
		system("cls");
		printf("                                                          START\n\n");
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),0X5c);
		printf("%c%c",61,62);
		printf("BACK\n\n");
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),0X5f);
		printf("play\n\n");
		x=1;	
		while(x!=13)
		{
			x=getch();
			if(x!=13)
				y=getch();
			if(x==224&&(y==80||y==72)&&z==0)
			{
				system("cls");
				printf("                                                          START\n\n");
				printf("BACK\n\n");
				SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),0X5c);
				printf("%c%c",61,62);
				printf("play\n\n");
				SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),0X5f);
				z=1;
			}
			else if(x==224&&(y==72||y==80)&&z==1)
			{
				system("cls");
				printf("                                                          START\n\n");
				SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),0X5c);
				printf("%c%c",61,62);
				printf("BACK\n\n");
				SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),0X5f);
				printf("play\n\n");
				z=0;	
			}
			
		}
		loop2:
		if(z==1)
		{
			system("color 5f");
			system("cls");
			printf("                                                          START\n\n");
			printf("BACK\n\n");
			SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),0X5c);
			printf("%c%c",61,62);
			printf("play\n\n");
			SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),0X5f);
			printf("....................................\n\n");
			printf("enter your name:");
			scanf("%s",customer[h].H);
			system("cls");
			system("color 30");
			printf("                                                          PLAY\n\n\n");
			printf("%c%c",61,62);
			printf("EASY\n\n\n");
			printf("MEDUIM\n\n\n");
			printf("HARD\n\n\n");
			printf("PROFESSIONAL\n\n\n");
			q[h]='E';
			f=750;
			e=37;
			z=1;
			x=0;
			while(x!=13)
			{
				x=getch();
				if(x!=13)
					y=getch();
				if(x==224&&y==80&&z==1)
				{
					system("cls");
					printf("                                                          PLAY\n\n\n");
					printf("EASY\n\n\n");
					printf("%c%c",61,62);
					printf("MEDUIM\n\n\n");
					printf("HARD\n\n\n");
					printf("PROFESSIONAL\n\n\n");
					q[h]='M';
					f=650;
					e=31;
					z=2;
				}
				else if(x==224&&y==72&&z==1)
				{
					system("cls");
					printf("                                                          PLAY\n\n\n");
					printf("EASY\n\n\n");
					printf("MEDUIM\n\n\n");
					printf("HARD\n\n\n");
					printf("%c%c",61,62);
					printf("PROFESSIONAL\n\n\n");
					q[h]='P';
					f=340;
					e=14;
					z=3;
				}
				else if(x==224&&y==80&&z==2)
				{
					system("cls");
					printf("                                                          PLAY\n\n\n");
					printf("EASY\n\n\n");
					printf("MEDUIM\n\n\n");
					printf("%c%c",61,62);
					printf("HARD\n\n\n");
					printf("PROFESSIONAL\n\n\n");
					q[h]='H';
					f=490;
					e=20;
					z=4;
				}
				else if(x==224&&y==72&&z==2)
				{
					system("cls");
					printf("                                                          PLAY\n\n\n");
					printf("%c%c",61,62);
					printf("EASY\n\n\n");
					printf("MEDUIM\n\n\n");
					printf("HARD\n\n\n");
					printf("PROFESSIONAL\n\n\n");
					q[h]='E';
					f=750;
					e=37;
					z=1;
				}
				else if(x==224&&y==80&&z==3)
				{
					system("cls");
					printf("                                                          PLAY\n\n\n");
					printf("%c%c",61,62);
					printf("EASY\n\n\n");
					printf("MEDUIM\n\n\n");
					printf("HARD\n\n\n");
					printf("PROFESSIONAL\n\n\n");
					q[h]='E';
					f=750;
					e=37;
					z=1;
				}
				else if(x==224&&y==72&&z==3)
				{
					system("cls");
					printf("                                                          PLAY\n\n\n");
					printf("EASY\n\n\n");
					printf("MEDUIM\n\n\n");
					printf("%c%c",61,62);
					printf("HARD\n\n\n");
					printf("PROFESSIONAL\n\n\n");
					q[h]='H';
					f=490;
					e=20;
					z=4;	
				}
				else if(x==224&&y==72&&z==4)
				{
					system("cls");
					printf("                                                          PLAY\n\n\n");
					printf("EASY\n\n\n");
					printf("%c%c",61,62);
					printf("MEDUIM\n\n\n");
					printf("HARD\n\n\n");
					printf("PROFESSIONAL\n\n\n");
					q[h]='M';
					f=650;
					e=31;
					z=2;
				}
				else if(x==224&&y==80&&z==4)
				{
					system("cls");
					printf("                                                          PLAY\n\n\n");
					printf("EASY\n\n\n");
					printf("MEDUIM\n\n\n");
					printf("HARD\n\n\n");
					printf("%c%c",61,62);
					printf("PROFESSIONAL\n\n\n");
					q[h]='P';
					f=340;
					e=14;
					z=3;
				}
			}
			srand(time(NULL));
			for(i=0;i<200;i++)
				a[i]=rand()%4+1;
			for(i=0;i<k;i++)
					l[i]=0;
			i=t=z=d=c=k=b=j=m=n=x=y=sum=0;
			p=s=1;
			o=59;
			loop1:
			for(;1;i++)
			{	
				if(o==-1)
					goto loop3;
				x=0;
				if(s==e)
					p=1;
				if(P==4)	
				system("color 4e");
				if(P==5)
				system("color 5e");
				if(P==3)
				system("color 3e");
				if(P==2)
				system("color 2e");
				system("cls");	
				printf("score=%d  time=%d	                                 play\n\n",k,o);
				printf("      x x\n");     
				printf("     x  %cx\n",233);     
				printf("     x  _x\n");     
				printf("      x x\n"); 
   				printf("       %c\n",179);   
				printf("       %c\n",179);
				printf("      / \\\n");
				printf("       %c\n",179);
				printf("       %c\n",179);
				printf("      / \\\n");
				printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\");
				b=i-1;
				for(i=0;i<k;i++)
					l[i]=i;
				for(i=0;i<=b;i++)
				{
					for(j=i+1;j<=b;j++)
					{
						if(a[j]==1||a[j]==2)
							n++;
						else if(a[j]==3||a[j]==4)
							m++;
					}
					if(i!=l[i]&&(13*m+4*n)>107&&(a[i]==2||a[i]==1))
						goto loop3;
					if(i!=l[i]&&(13*m+4*n)>98&&(a[i]==3||a[i]==4))
						goto loop3;
					if(a[i]==1&&(t!=1||i!=l[i]))
					{
						gotoxy(116-(13*m+4*n),6);
							printf("/%c\\",179);
						gotoxy(116-(13*m+4*n),7);
							printf(" %c",179);
						gotoxy(116-(13*m+4*n),8);	
							printf(" %c",179);
						gotoxy(116-(13*m+4*n),9);
							printf(" %c",179);
					}			 	
					else if(a[i]==2&&(z!=2||i!=l[i]))
					{
						gotoxy(116-(13*m+4*n),6);
							printf(" %c",179);
						gotoxy(116-(13*m+4*n),7);
							printf(" %c",179);
						gotoxy(116-(13*m+4*n),8);
							printf(" %c",179);
						gotoxy(116-(13*m+4*n),9);
							printf("\\%c/",179);
					}
					else if(a[i]==3&&(d!=3||i!=l[i]))
					{
						gotoxy(106-(13*m+4*n),6);
							printf("%c",196);
						gotoxy(107-(13*m+4*n),6);
							printf("%c",196);
						gotoxy(108-(13*m+4*n),6);
							printf("%c",196);
						gotoxy(109-(13*m+4*n),6);
							printf("%c",196);
						gotoxy(110-(13*m+4*n),6);
							printf("%c",196);
						gotoxy(-111-(13*m+4*n),6);
							printf("%c",196);
						gotoxy(112-(13*m+4*n),6);
							printf("%c",196);
						gotoxy(113-(13*m+4*n),6);
							printf("%c",196);
						gotoxy(114-(13*m+4*n),6);
							printf("%c",196);
						gotoxy(115-(13*m+4*n),6);
							printf("%c",196);
						gotoxy(116-(13*m+4*n),6);
							printf(">");
					}
					else if(a[i]==4&&(c!=4||i!=l[i]))
					{
						gotoxy(106-(13*m+4*n),6);
							printf("<");
						gotoxy(107-(13*m+4*n),6);
							printf("%c",196);
						gotoxy(108-(13*m+4*n),6);
							printf("%c",196);
						gotoxy(109-(13*m+4*n),6);
							printf("%c",196);
						gotoxy(110-(13*m+4*n),6);
							printf("%c",196);
						gotoxy(111-(13*m+4*n),6);
							printf("%c",196);
						gotoxy(112-(13*m+4*n),6);
							printf("%c",196);
						gotoxy(113-(13*m+4*n),6);
							printf("%c",196);
						gotoxy(114-(13*m+4*n),6);
							printf("%c",196);
						gotoxy(115-(13*m+4*n),6);
							printf("%c",196);
						gotoxy(116-(13*m+4*n),6);
							printf("%c",196);
					}
					m=0;
					n=0;
				}
				for(s=p;s<=e;s++)
				{
					sum+=s;
					if(sum>=f)
					{
						o--;
						sum=0;
					}
					Sleep(s);
					if(kbhit())
					{
						p=s+1;
						s++;
						break;
					}
				}
				s--;
				if(kbhit())
					break;
			}
			k++;
			x=getch();
			y=getch();
			if(x==224&&y==80&&a[k-1]==2)
			{
				z=2;
				r=0;
				goto loop1;	
			}
			else if(x==224&&y==72&&a[k-1]==1)
			{
				t=1;
				r=0;
				goto loop1;
			}
			else if(x==224&&y==75&&a[k-1]==4)
			{
				c=4;
				r=0;
				goto loop1;
			}
			else if(x==224&&y==77&&a[k-1]==3)
			{
				d=3;
				r=0;
				goto loop1;
			}
			else 
				k--;
			loop3:
			A[h]=k; 	
			i=h;
			h++;
			W=0;
			system("color 1e");
			system("cls");
			printf("                                                            GAME OVER\n\n\n");
			printf("%c%c",61,62);
			printf("MENU\n\n\n");
			printf("PLAY AGAIN\n\n\n\n\n");
			printf("                                                   	YOUR SCORE=%d",k);
			z=0;
			while(x!=13)
			{
				x=getch();
				if(x!=13)
				y=getch();
				if(x==224&&(y==72||y==80)&&z==0)
				{
					system("color 1e");
					system("cls");
					printf("                                                            GAME OVER\n\n\n");
					printf("MENU\n\n\n");
					printf("%c%c",61,62);
					printf("PLAY AGAIN\n\n\n\n\n");
					printf("                                                   	YOUR SCORE=%d",k);
					z=2;	
				}
				else if(x==224&&(y==72||y==80)&&z==2)
				{
					system("color 1e");
					system("cls");
					printf("                                                            GAME OVER\n\n\n");
					printf("%c%c",61,62);
					printf("MENU\n\n\n");
					printf("PLAY AGAIN\n\n\n\n\n");
					printf("                                                   	YOUR SCORE=%d",k);
					z=0;
				}
			}
			if(z==2)
			{
				z=1;
				goto loop2;		
			}
		}
	}
	if(z==1)
	{	
	system("color 9e");
		system("cls");
		printf("                                                              HIGH SCORES\n\n\n");
		printf("                                         NAME                        SCORE                  LEVEL\n\n\n");
		for(v=0,I=0;v<=i;v++)
		{
			F[v]=A[v];
			if(q[v]!='P')
			{
				A[v]=-1;
				I++;
			}	
		}
		for(v=0,T=0;v<=i;v++,T++)
		{
		for(h=0;h<=i;h++)
		{
			if(h==0)
			{
				max=A[h];
				g=h;
			}
			if(A[h]>max)
			{
				max=A[h];
				g=h;
			}
		}
		gotoxy(42,5+2*T);
		if(A[g]!=-1)
			printf("%s",customer[g].H);
		gotoxy(70,5+2*T);
		if(A[g]!=-1)
			printf("%d",A[g]);
		gotoxy(93,5+2*T);
		if(A[g]!=-1)
			printf("PROFESSIONAL");
		A[g]=-1;
		}
		T-=I;
		for(v=0,I=0;v<=i;v++)
		{
			A[v]=F[v];
			if(q[v]!='H')
			{
				A[v]=-1;
				I++;
			}	
		}
		for(v=0;v<=i;v++,T++)
		{
		for(h=0;h<=i;h++)
		{
			if(h==0)
			{
				max=A[h];
				g=h;
			}
			if(A[h]>max)
			{
				max=A[h];
				g=h;
			}
		}
		gotoxy(42,5+2*T);
		if(A[g]!=-1)
			printf("%s",customer[g].H);
		gotoxy(70,5+2*T);
		if(A[g]!=-1)
			printf("%d",A[g]);
		gotoxy(93,5+2*T);
		if(A[g]!=-1)
			printf("HARD");
		A[g]=-1;
		}
		T-=I;
		for(v=0,I=0;v<=i;v++)
		{
			A[v]=F[v];
			if(q[v]!='M')
			{
				A[v]=-1;
				I++;
			}
		}
		for(v=0;v<=i;v++,T++)
		{
		for(h=0;h<=i;h++)
		{
			if(h==0)
			{
				max=A[h];
				g=h;
			}
			if(A[h]>max)
			{
				max=A[h];
				g=h;
			}
		}
		gotoxy(42,5+2*T);
		if(A[g]!=-1)
			printf("%s",customer[g].H);
		gotoxy(70,5+2*T);
		if(A[g]!=-1)
			printf("%d",A[g]);
		gotoxy(93,5+2*T);
		if(A[g]!=-1)
			printf("MEDUIM");
		A[g]=-1;
		}
		T-=I;
		for(v=0,I=0;v<=i;v++)
		{
			A[v]=F[v];
			if(q[v]!='E')
			{
				A[v]=-1;
				I++;
			}	
		}	
		for(v=0;v<=i;v++,T++)
		{
		for(h=0;h<=i;h++)
		{
			if(h==0)
			{
				max=A[h];
				g=h;
			}
			if(A[h]>max)
			{
				max=A[h];
				g=h;
			}
		}
		gotoxy(42,5+2*T);
		if(A[g]!=-1)
			printf("%s",customer[g].H);
		gotoxy(70,5+2*T);
		if(A[g]!=-1)
			printf("%d",A[g]);
		gotoxy(93,5+2*T);
		if(A[g]!=-1)
			printf("EASY");
		A[g]=-1;
		}
		T-=I;
		for(v=0;v<=i;v++)
			A[v]=F[v];
		gotoxy(0,5+2*T);
		printf("%c%c",61,62);
		gotoxy(2,5+2*T);
		printf("BACK");
		x=0;
		x=getch();
	}
	if(z==3)
	{
		system("color E2");
		system("cls");
		printf("                                                              SETING\n\n\n");
		printf("%c%c",61,62);
		printf("BACK\n\n");
		printf("CHANGE THE GAME BACKGROUND COLOR\n\n");
		printf("CLEAN SCORES AND RESTART");
		x=0;
		while(x!=13)
		{
			x=getch();
			if(x!=13)
				y=getch();
			if(x==224&&y==80&&z==3)
			{
				system("cls");
				printf("                                                              SETING\n\n\n");
				printf("BACK\n\n");
				printf("%c%c",61,62);
				printf("CHANGE THE GAME BACKGROUND COLOR\n\n");
				printf("CLEAN SCORES AND RESTART");
				z=0;
			}
			else if(x==224&&y==72&&z==3)
			{
				system("cls");
				printf("                                                              SETING\n\n\n");
				printf("BACK\n\n");
				printf("CHANGE THE GAME BACKGROUND COLOR\n\n");
				printf("%c%c",61,62);
				printf("CLEAN SCORES AND RESTART");
				z=5;
			}
			else if(x==224&&y==72&&z==0)
			{
				system("cls");
				printf("                                                              SETING\n\n\n");
				printf("%c%c",61,62);
				printf("BACK\n\n");
				printf("CHANGE THE GAME BACKGROUND COLOR\n\n");
				printf("CLEAN SCORES AND RESTART");
				z=3;
			}
			else if(x==224&&y==80&&z==0)
			{
				system("cls");
				printf("                                                              SETING\n\n\n");
				printf("BACK\n\n");
				printf("CHANGE THE GAME BACKGROUND COLOR\n\n");
				printf("%c%c",61,62);
				printf("CLEAN SCORES AND RESTART");
				z=5;
			}
			else if(x==224&&y==80&&z==5)
			{
				system("cls");
				printf("                                                              SETING\n\n\n");
				printf("%c%c",61,62);
				printf("BACK\n\n");
				printf("CHANGE THE GAME BACKGROUND COLOR\n\n");
				printf("CLEAN SCORES AND RESTART");
				z=3;
			}
			else if(x==224&&y==72&&z==5)
			{
				system("cls");
				printf("                                                              SETING\n\n\n");
				printf("BACK\n\n");
				printf("%c%c",61,62);
				printf("CHANGE THE GAME BACKGROUND COLOR\n\n");
				printf("CLEAN SCORES AND RESTART");
				z=0;
			}
		}
		if(z==0)
		{
			system("cls");
			system("color 8e");
			printf("                            			CHANGE THE GAME BACKGROUND COLOR\n\n\n");
			printf("%c%c",61,62);
			printf("BACK\n\n");
			printf("RED\n\n");
			printf("PURPLE\n\n");
			printf("AQUA\n\n");
			printf("GREEN\n\n");
			x=0;
			while(x!=13)
			{
				x=getch();
				if(x!=13)
					y=getch();
				if(x==224&&y==80&&z==0)
				{
					system("cls");
					printf("                            			CHANGE THE GAME BACKGROUND COLOR\n\n\n");
					printf("BACK\n\n");
					printf("%c%c",61,62);
					printf("RED\n\n");
					printf("PURPLE\n\n");
					printf("AQUA\n\n");
					printf("GREEN\n\n");
					z=1;
					P=4;
				}
				else if(x==224&&y==72&&z==0)
				{
					system("cls");
					printf("                            			CHANGE THE GAME BACKGROUND COLOR\n\n\n");
					printf("BACK\n\n");
					printf("RED\n\n");
					printf("PURPLE\n\n");
					printf("AQUA\n\n");
					printf("%c%c",61,62);
					printf("GREEN\n\n");
					z=2;
					P=2;
				}
				else if(x==224&&y==72&&z==1)
				{
					system("cls");
					printf("                            			CHANGE THE GAME BACKGROUND COLOR\n\n\n");
					printf("%c%c",61,62);
					printf("BACK\n\n");
					printf("RED\n\n");
					printf("PURPLE\n\n");
					printf("AQUA\n\n");
					printf("GREEN\n\n");
					z=0;
				}
				else if(x==224&&y==80&&z==1)
				{
					system("cls");
					printf("                            			CHANGE THE GAME BACKGROUND COLOR\n\n\n");
					printf("BACK\n\n");
					printf("RED\n\n");
					printf("%c%c",61,62);
					printf("PURPLE\n\n");
					printf("AQUA\n\n");
					printf("GREEN\n\n");
					P=5;
					z=3;
				}
				else if(x==224&&y==72&&z==2)
				{
					system("cls");
					printf("                            			CHANGE THE GAME BACKGROUND COLOR\n\n\n");
					printf("BACK\n\n");
					printf("RED\n\n");
					printf("PURPLE\n\n");
					printf("%c%c",61,62);
					printf("AQUA\n\n");
					printf("GREEN\n\n");
					P=3;
					z=4;
				}
				else if(x==224&&y==80&&z==2)
				{
					system("cls");
					printf("                            			CHANGE THE GAME BACKGROUND COLOR\n\n\n");
					printf("%c%c",61,62);
					printf("BACK\n\n");
					printf("RED\n\n");
					printf("PURPLE\n\n");
					printf("AQUA\n\n");;
					printf("GREEN\n\n");
					z=0;
				}
				else if(x==224&&y==80&&z==3)
				{
					system("cls");
					printf("                            			CHANGE THE GAME BACKGROUND COLOR\n\n\n");
					printf("BACK\n\n");
					printf("RED\n\n");
					printf("PURPLE\n\n");
					printf("%c%c",61,62);
					printf("AQUA\n\n");
					printf("GREEN\n\n");
					z=4;
					P=3;
				}
				else if(x==224&&y==72&&z==3)
				{
					system("cls");
					printf("                            			CHANGE THE GAME BACKGROUND COLOR\n\n\n");
					printf("BACK\n\n");
					printf("%c%c",61,62);
					printf("RED\n\n");
					printf("PURPLE\n\n");
					printf("AQUA\n\n");
					printf("GREEN\n\n");
					z=1;
					P=4;
				}
				else if(x==224&&y==80&&z==4)
				{
					system("cls");
					printf("                            			CHANGE THE GAME BACKGROUND COLOR\n\n\n");
					printf("BACK\n\n");
					printf("RED\n\n");
					printf("PURPLE\n\n");
					printf("AQUA\n\n");
					printf("%c%c",61,62);
					printf("GREEN\n\n");
					z=2;
					P=2;
				}
				else if(x==224&&y==72&&z==4)
				{
					system("cls");
					printf("                            			CHANGE THE GAME BACKGROUND COLOR\n\n\n");
					printf("BACK\n\n");
					printf("RED\n\n");
					printf("%c%c",61,62);
					printf("PURPLE\n\n");
					printf("AQUA\n\n");
					printf("GREEN\n\n");
					z=3;
					P=5;
				}										
			}
		}
		if(z==5)
		{
			h=W=0;
			i=-1;
		}
	}
    }
}
