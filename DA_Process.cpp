#include<windows.h>
#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#define textcolor(txt,back) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), back*16+txt)
#define resetcolor() SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15)
int p,i,e,r;
main()
{
for(e=0;e==0;)
{
	int f=0,np=0;
	//����� f ���¶֧������͹�ѹ (Flush)
	//f mean Flush Check.
	
	//����� np ���¶֧�����ٻẺ���� �����������
	//np mean some patten has success.
	
	//�͡�û�͹�ٻẺ����
	//wait to type card patten.
	printf("DA Process Core v0.1\n");
	printf("\n");
	
		textcolor(12,0 );
		printf("* Color Red = 1\n"); // 1 �ҵ��
		textcolor(11,0 );
		printf("* Color Blue = 2\n"); // 2 �ҵع��
		textcolor(10,0 );
		printf("* Color Green = 3\n"); // 3 �ҵػ��
		resetcolor();
		
	printf("\n");
	printf("Enter Card Unit [0-4] = ");
	scanf("%d",&p); //���ٻẺ�������㹵���� p
	
	//����� a ���¶֧���촷��ŧ����
	//����� ac ���¶֧�բͧ���촷��ŧ����
	//����� h ���¶֧���촺����
	//����� hc ���¶֧�բͧ���촺����
	int a[5],ac[5],h[5],hc[5]; //���ҧ����û�������������� a, ac, h, hc �ӹǹ 5 (0-4) 
	
	printf("\n");
	//����Ѻ��������зӫ�Ӣͧ���촷��ŧ����
	//Loop Resive Data
	for(i=0;i<p;i++) //�ӫ�ӵ���ӹǹ��� p ������ (�ٻẺ���� ���ͨӹǹ���촷��ŧ����)
	{
		printf("Enter Number of Card %d = ",i+1);
		scanf("%d",&a[i+1]);
		
		printf("Enter Card %d Color = ",i+1);
		scanf("%d",&ac[i+1]);
		printf("\n");
	}
	
		printf("\n");
		printf("\n");
		printf("Enter Card on hand\n");
	
	//����Ѻ��������зӫ�Ӣͧ���촺����
	//Loop Resive Data Card on hand
	for(i=0;i<4;i++)
	{
		printf("Enter Number of Card %d = ",i+1);
		scanf("%d",&h[i+1]);
		
		printf("Enter Card %d Color = ",i+1);
		scanf("%d",&hc[i+1]);
		printf("\n");
	}
	
	//��Ǩ�ͺ��� Flush �ͧ���촷��ŧ���� (�ٻẺ 4 �)
	//Flush Check 4 Card patten
	if(p==4)
	{
		//����բͧ����㺷�� 1 = 2 ��� 2 = 3 ��� 3 = 4 (��ҡ��촷ء㺷��ŧ�����������ǡѹ)
		if	(
				(ac[1]==ac[2]) 
				&&
				(ac[2]==ac[3])
				&&
				(ac[3]==ac[4])
			)
		{
			f=1;
		}
	}
	
	//����ͺ��� Flush �ͧ���촷��ŧ���� (�ٻẺ 3 �)
	//Flush Check 3 Card patten
	if(p==3)
	{
		//����բͧ����㺷�� 1 = 2 ��� 2 = 3 (��ҡ��촷ء㺷��ŧ�����������ǡѹ)
		if	(
				(ac[1]==ac[2])
				&&
				(ac[2]==ac[3])
			)
		{
			f=1;
		}
	}
	
	//����ͺ��� Flush �ͧ���촷��ŧ���� (�ٻẺ 2 �)
	//Flush Check 2 Card patten
	if(p==2)
	{
		//����բͧ����㺷�� 1 = 2 (��ҡ��촷ء㺷��ŧ�����������ǡѹ)
		if	(
				(ac[1]==ac[2])
			)
		{
			f=1;
		}
	}


		
	
	
	
	
	
	//��äӹǹ���ٻẺ���� 4 �
	//4 Card patten
	if(p==4)
	{
		//�ʴ��ٻẺ��äӹǹ
		printf("\n---------- 4 Card Patten ----------\n\n");
		
		//��� Royal Straight Flush
		//Royal Straight Flush (1)
		for(i=0;i<4;i++)
		{
			if	(
					(f==1) //����� Flush
					&&
					(
						(
							(a[1]==11)&&(a[2]==12)&&(a[3]==13)&&(a[4]==1) //�� J Q K A
						)
						&&
						(h[i+1]==10) //���촺���ͤ�� 10
						&&
						(hc[i+1]==ac[1]) //���촺���� �����ǡѺ���촷��ŧ����
					)
				)
			{
				system("cls");
				printf("Select Card %d is Royal Straight Flush\n",i+1);
				np=1;
			}
		}
		
		//Royal Straight Flush (2)
		for(i=0;i<4;i++)
		{
			if	(
					(f==1) //����� Flush
					&&
					(
						(
							(a[1]==10)&&(a[2]==12)&&(a[3]==13)&&(a[4]==1) //�� 10 Q K A
						)
						&&
						(h[i+1]==11) //���촺���ͤ�� J
						&&
						(hc[i+1]==ac[1]) //���촺���� �����ǡѺ���촷��ŧ����
					)
				)
			{
				system("cls");
				printf("Select Card %d is Royal Straight Flush\n",i+1);
				np=1;
			}
		}
		
		//Royal Straight Flush (3)
		for(i=0;i<4;i++)
		{
			if	(
					(f==1) //����� Flush
					&&
					(
						(
							(a[1]==10)&&(a[2]==11)&&(a[3]==13)&&(a[4]==1) //�� 10 J K A
						)
						&&
						(h[i+1]==12) //���촺���ͤ�� Q
						&&
						(hc[i+1]==ac[1]) //���촺���� �����ǡѺ���촷��ŧ����
					)
				)
			{
				system("cls");
				printf("Select Card %d is Royal Straight Flush\n",i+1);
				np=1;
			}
		}
		
		//Royal Straight Flush (4)
		for(i=0;i<4;i++)
		{
			if	(
					(f==1) //����� Flush
					&&
					(
						(
							(a[1]==10)&&(a[2]==11)&&(a[3]==12)&&(a[4]==1) //�� 10 J Q A
						)
						&&
						(h[i+1]==13) //���촺���ͤ�� K
						&&
						(hc[i+1]==ac[1]) //���촺���� �����ǡѺ���촷��ŧ����
					)
				)
			{
				system("cls");
				printf("Select Card %d is Royal Straight Flush\n",i+1);
				np=1;
			}
		}
		
		//Royal Straight Flush (5)
		for(i=0;i<4;i++)
		{
			if	(
					(f==1) //����� Flush
					&&
					(
						(
							(a[1]==10)&&(a[2]==11)&&(a[3]==12)&&(a[4]==13) //�� 10 J Q K
						)
						&&
						(h[i+1]==1) //���촺���ͤ�� A
						&&
						(hc[i+1]==ac[1]) //���촺���� �����ǡѺ���촷��ŧ����
					)
				)
			{
				system("cls");
				printf("Select Card %d is Royal Straight Flush\n",i+1);
				np=1;
			}
		}
		
		//��� Lucky Seven Flush
		//Lucky Seven Flush
		if(np!=1)
		{
			for(i=0;i<4;i++)
			{
				if	(
						(f==1) //����� Flush
						&&
						(
							(
								(a[1]==7)&&(a[2]==7)&&(a[3]==7)&&(a[4]==7) //�� 7 7 7 7
							)
							&&
							(h[i+1]==7) //���촺���ͤ�� 7
							&&
							(hc[i+1]==ac[1]) //���촺���� �����ǡѺ���촷��ŧ����
						)
					)
				{
					system("cls");
					printf("Select Card %d is Lucky Seven Flush\n",i+1);
					np=1;
				}
			}
		}
		
		//��� Lucky Seven
		//Lucky Seven
		if(np!=1)
		{
			for(i=0;i<4;i++)
			{
				if	(
						(
							(a[1]==7)&&(a[2]==7)&&(a[3]==7)&&(a[4]==7) //�� 7 7 7 7
						)
						&&
						(h[i+1]==7)//���촺���ͤ�� 7
					)
				{
					system("cls");
					printf("Select Card %d is Lucky Seven \n",i+1);
					np=1;
				}
			}
		}
		
		//��� Five Flush
		//Five Flush
		if(np!=1)
		{
			for(i=0;i<4;i++)
			{
				if	(
						(f==1) //����� Flush
						&&
						(
							(
								(a[1]==a[2])&&(a[2]==a[3])&&(a[3]==a[4]) //�� ���촫�� 4 �
							)
							&&
							(h[i+1]==a[1]) //���촺�����Ţ���ǡѺ���촷��ŧ����
							&&
							(hc[i+1]==ac[1])  //���촺���� �����ǡѺ���촷��ŧ����
						)
					)
				{
					system("cls");
					printf("Select Card %d is Five Flush\n",i+1);
					np=1;
				}
			}
		}
		
		//��� Five Card
		//Five Card
		if(np!=1)
		{
			for(i=0;i<4;i++)
			{
				if	(
						(
							(a[1]==a[2])&&(a[2]==a[3])&&(a[3]==a[4]) //�� ���촫�� 4 �
						)
						&&
						(h[i+1]==a[1]) //���촺�����Ţ���ǡѺ���촷��ŧ����
					)
				{
					system("cls");
					printf("Select Card %d is Five Card\n",i+1);
					np=1;
				}
			}
		}
		
		//��� House Flush
		//House Flush
		if(np!=1)
		{
			//House Flush (1)
			for(i=0;i<4;i++)
			{
				if	(
						(f==1) //����� Flush
						&&
						(
							(
								(a[1]==a[2])&&(a[3]==a[4]) //�� ���촫�� 2 � �ӹǹ 2 ���
							)
							&&
							(
								(h[i+1]==a[1])||(h[i+1]==a[3]) //���촺�����Ţ���ǡѺ���촷���ӡѹ���㴤��˹��
							)
							&&
							(hc[i+1]==ac[1]) //���촺���� �����ǡѺ���촷��ŧ����
						)
					)
				{
					system("cls");
					printf("Select Card %d is House Flush\n",i+1);
					np=1;
				}
			}
		
		
			//House Flush (2)
			for(i=0;i<4;i++)
			{
				if	(
						(f==1) //����� Flush
						&&
						(
							(
								(a[1]==a[2])&&(a[2]==a[3]) //�� ���촫�� 4 � (�ӴѺ���촷�� 1,2,3)
							)
							&&
							(h[i+1]==a[4]) //���촺�����Ţ���ǡѺ���촷��ŧ����(�ӴѺ���4)
							&&
							(hc[i+1]==ac[1]) //���촺���� �����ǡѺ���촷��ŧ����
						)
					)
				{
					system("cls");
					printf("Select Card %d is House Flush\n",i+1);
					np=1;
				}
			}
		
		
			//House Flush(3)
			for(i=0;i<4;i++)
			{
				if	(
						(f==1) //����� Flush
						&&
						(
							(
								(a[2]==a[3])&&(a[3]==a[4]) //�� ���촫�� 4 � (�ӴѺ���촷�� 2,3,4)
							)
							&&
							(h[i+1]==a[1]) //���촺�����Ţ���ǡѺ���촷��ŧ����(�ӴѺ���1)
							&&
							(hc[i+1]==ac[1]) //���촺���� �����ǡѺ���촷��ŧ����
						)
					)
				{
					system("cls");
					printf("Select Card %d is House Flush\n",i+1);
					np=1;
				}
			}
		}
		
		
		//Straight Flush
		if(np!=1)
		{
			//Straight Flush (1)
			for(i=0;i<4;i++)
			{
				if	(
						(f==1) //����� Flush
						&&
						(
							(
								(a[1]==(a[2]-1))&&(a[2]==(a[3]-1))&&(a[3]==(a[4]-1)) //�� �������§ 4 �
							)
							&&
							(
								(h[i+1]==(a[1]-1))||(h[i+1]==(a[4]+1)) //���촺���ͤ�� �Ţ�ͧ���촷��ŧ�����ըӹǹ���·���ش -1 ���� �ըӹǹ�ҡ����ش +1
							)
							&&
							(hc[i+1]==ac[1]) //���촺���� �����ǡѺ���촷��ŧ����
						)
					)
				{
					system("cls");
					printf("Select Card %d is Straight Flush\n",i+1);
					np=1;
				}
			}
				
			
			//Straight Flush(2)
			for(i=0;i<4;i++)
			{
				if	(
						(f==1) //����� Flush
						&&
						(
							(
								(a[1]==(a[2]-2))&&(a[2]==(a[3]-1))&&(a[3]==(a[4]-1)) // 4 6 7 8
							)
							&&
							(h[i+1]==a[1]+1) // 5
							&&
							(hc[i+1]==ac[1]) //���촺���� �����ǡѺ���촷��ŧ����
						)
					)
				{
					system("cls");
					printf("Select Card %d is Straight Flush\n",i+1);
					np=1;
				}
			}
			
			//Straight Flush (3)
			for(i=0;i<4;i++)
			{
				if	(
						(f==1) //����� Flush
						&&
						(
							(
								(a[1]==(a[2]-1))&&(a[2]==(a[3]-2))&&(a[3]==(a[4]-1)) // 4 5 7 8
							)
							&&
							(h[i+1]==1) // 6
							&&
							(hc[i+1]==ac[1]) //���촺���� �����ǡѺ���촷��ŧ����
						)
					)
				{
					system("cls");
					printf("Select Card %d is Straight Flush\n",i+1);
					np=1;
				}
			}
			
			//Straight Flush (4)
			for(i=0;i<4;i++)
			{
				if	(
						(f==1) //����� Flush
						&&
						(
							(
								(a[1]==(a[2]-1))&&(a[2]==(a[3]-1))&&(a[3]==(a[4]-2)) //4 5 6 8
							)
							&&
							(h[i+1]==1) // 7
							&&
							(hc[i+1]==ac[1]) //���촺���� �����ǡѺ���촷��ŧ����
						)
					)
				{
					system("cls");
					printf("Select Card %d is Straight Flush\n",i+1);
					np=1;
				}
			}
			
		}
		
		//��� Four Card
		//Four Card (1)
		if(np!=1)
		{
			for(i=0;i<4;i++)
			{
				if	(
						(
							(a[1]==a[2])&&(a[2]==a[3]) //�� ���촫�� 3 � (�ӴѺ��� 1,2,3)
						)
						&&
						(h[i+1]==a[1]) //���촺�����Ţ���ǡѺ���촷��ŧ����
					)
				{
					system("cls");
					printf("Select Card %d is Four Card\n",i+1);
					np=1;
				}
			}	
		}
		
		//Four Card (2)
		if(np!=1)
		{
			for(i=0;i<4;i++)
			{
				if	(
						(
							(a[2]==a[3])&&(a[3]==a[4]) //�� ���촫�� 3 � (�ӴѺ��� 2,3,4)
						)
						&&
						(h[i+1]==a[1]) //���촺�����Ţ���ǡѺ���촷��ŧ����
					)
				{
					system("cls");
					printf("Select Card %d is Four Card\n",i+1);
					np=1;
				}
			}	
		}
		
		//��� Full House
		//Full House
		if(np!=1)
		{
			//Full House (1)
			for(i=0;i<4;i++)
			{
				if	(
						(
							(a[1]==a[2])&&(a[3]==a[4]) //�� ���촫�� 2 � �ӹǹ 2 ���
						)
						&&
						(
							(h[i+1]==a[1])||(h[i+1]==a[3]) //���촺�����Ţ���ǡѺ���촷���ӡѹ���㴤��˹��
						)
					)
				{
					system("cls");
					printf("Select Card %d is Full House\n",i+1);
					np=1;
				}
			}
		
		
			//Full House (2)
			for(i=0;i<4;i++)
			{
				if	(
						(
							(a[1]==a[2])&&(a[2]==a[3]) //�� ���촫�� 4 � (�ӴѺ���촷�� 1,2,3)
						)
						&&
						(h[i+1]==a[4]) //���촺�����Ţ���ǡѺ���촷��ŧ����(�ӴѺ���4)
					)
				{
					system("cls");
					printf("Select Card %d is Full House\n",i+1);
					np=1;
				}
			}
			
			
			//Full House (3)
			for(i=0;i<4;i++)
			{
				if	(
						(
							(a[2]==a[3])&&(a[3]==a[4]) //�� ���촫�� 4 � (�ӴѺ���촷�� 2,3,4)
						)
						&&
						(h[i+1]==a[1]) //���촺�����Ţ���ǡѺ���촷��ŧ����(�ӴѺ���1)
					)
				{
					system("cls");
					printf("Select Card %d is Full House\n",i+1);
					np=1;
				}
			}
		}
		
		int st=0;
		
		//��� Straight
		//Straight
		if(np!=1)
		{
			//Straight (1)
			for(i=0;i<4;i++)
			{
			if	(
					(
						(a[1]==(a[2]-1))&&(a[2]==(a[3]-1))&&(a[3]==(a[4]-1)) //�� �������§ 4 �
					)
					&&
					((h[i+1]==(a[1]-1))||(h[i+1]==(a[1]))||(h[i+1]==(a[1]+1))||(h[i+1]==(a[1]+2))||(h[i+1]==(a[1]+3))||(h[i+1]==(a[1]+4)))
					//���촺�������Ţ��ҡѺ���촷��ŧ��������˹�� +|- 1
				)
				{
					system("cls");
					printf("Select Card %d is Straight\n",i+1);
					st=1;
					np=1;
				}
			}
			
			
			if(st!=1)
			{
			
				//Straight (2)
					
			
				for(i=0;i<4;i++)
				{
					if	(
							(
								(a[1]==(a[2]-1))&&(a[2]==(a[3]-1)) //�� �������§ 3 � (�ӴѺ���촷�� 1,2,3)
							)
							&&
							((h[i+1]==(a[1]-1))||(h[i+1]==(a[3]+1))) //�ա��촺���� ���촷��ŧ���� ���·���ش -1 ���� �ҡ����ش +1
						)
					{
						system("cls");
						printf("Select Card %d is Straight\n",i+1);
						np=1;
					}
				}
				
				
				//Straight (3)
					
			
				for(i=0;i<4;i++)
				{
					if	(
							(
								(a[2]==(a[3]-1))&&(a[3]==(a[4]-1))  //�� �������§ 3 � (�ӴѺ���촷�� 2,3,4)
							)
							&&
							((h[i+1]==(a[2]-1))||(h[i+1]==(a[2]+3))) //�ա��촺���� ���촷��ŧ���� ���·���ش -1 ���� �ҡ����ش +1 
						)
					{
						system("cls");
						printf("Select Card %d is Straight\n",i+1);
						np=1;
					}
				}
				
				
			
				//Straight (4)	
		
				
				for	(i=0;i<4;i++)
				{
					if	(
							(
								(a[1]==(a[2]-1))&&(a[2]==(a[3]-2)) // 4 5 7 ?
							)
							&&
							(h[i+1]==a[2]+1) // 6
						)
					{
						system("cls");
						printf("Select Card %d is Straight\n",i+1);
						np=1;
					}
				}
				
				
				//Straight(5)
		
				
				for	(i=0;i<4;i++)
				{
					if	(
							(
								(a[2]==(a[3]-1))&&(a[3]==(a[4]-2)) // ? 4 5 7
							)
							&&
							(h[i+1]==a[3]+1) // 6
						)
					{
						system("cls");
						printf("Select Card %d is Straight\n",i+1);
						np=1;
					}
				}
				
				
				
				//Straight(6)
				
				
				for(i=0;i<4;i++)
				{
					if	(
							(
								(a[1]==(a[2]-2))&&(a[2]==(a[3]-1)) // 4 6 7 ?
							)
							&&
							(h[i+1]==(a[1]+1)) // 5
						)
					{
						system("cls");
						printf("Select Card %d is Straight\n",i+1);
						np=1;
					}
				}
				
				
				
				//Straight (7)
				
				
				for(i=0;i<4;i++)
				{
					if	(
							(
								(a[2]==(a[3]-2))&&(a[3]==(a[4]-1)) // ? 4 6 7
							)
							&&
							(h[i+1]==(a[2]+1)) // 5
						)
					{
						system("cls");
						printf("Select Card %d is Straight\n",i+1);
						np=1;
					}
				}	
			}
		}
		
		//��� Flush
		//Flush
		if(np!=1)
		{
			if	(f==1) //����� Flush
			{	
				for(i=0;i<4;i++)
				{
					if	(hc[i+1]==ac[1]) //�ա��촺���� �����ǡѺ���촷��ŧ����
					{
						system("cls");
						printf("Select Card %d is Flush\n",i+1);
						np=1;
					}
				}	
			}
		}
		
		//��� Three Seven
		//Three Seven
		if(np!=1)
		{
			//Three Seven (1)
			for(i=0;i<4;i++)
			{
				if	(
						(
							(a[1]==7)&&(a[2]==7) //������ 7 7 (���˹觷�� 1,2)
						)
						&&
						(h[i+1]==7) // �ա��� 7
					)
				{
					system("cls");
						printf("Select Card %d is Three Seven\n",i+1);
					np=1;
				}
			}
			
			//Three Seven (2)
			for(i=0;i<4;i++)
			{
				if	(
						(
							(a[2]==7)&&(a[3]==7) //������ 7 7 (���˹觷�� 2,3)
						)
						&&
						(h[i+1]==7) // �ա��� 7
					)
				{	
					system("cls");
						printf("Select Card %d is Three Seven\n",i+1);
					np=1;
				}
			}	
			
			//Three Seven (3)
			for(i=0;i<4;i++)
			{
				if	(
						(
							(a[3]==7)&&(a[4]==7)//������ 7 7 (���˹觷�� 3,4)
						)
						&&
						(h[i+1]==7) // �ա��� 7
					)
				{
					system("cls");
						printf("Select Card %d is Three Seven\n",i+1);
					np=1;
				}
			}
		}
		
		//��� Three Card
		//Three Card
		if(np!=1)
		{
			//Three Card (1)
			for(i=0;i<4;i++)
			{
				if	(
						(a[1]==a[2]) //�����촫�ӡѹ 2 � (���˹觷�� 1,2)
						&&
						(h[i+1]==a[1]) //�ա��촺�����Ţ���ǡѺ���촷����
					)
				{
					system("cls");
					printf("Select Card %d is Three Card\n",i+1);
					np=1;
				}
			}
			
			
			//Three Card (2)
			for(i=0;i<4;i++)
			{
				if	(
						(
							(a[2]==a[3]) //�����촫�ӡѹ 2 � (���˹觷�� 2,3)
						)
						&&
						(h[i+1]==a[2]) //�ա��촺�����Ţ���ǡѺ���촷����
					)
				{
					system("cls");
					printf("Select Card %d is Three Card\n",i+1);
					np=1;
				}
			}
			
			
			
			//Three Card (3)
			for(i=0;i<4;i++)
			{
				if	(
						(
							(a[3]==a[4]) //�����촫�ӡѹ 2 � (���˹觷�� 3,4)
						)
						&&
						(h[i+1]==a[3]) //�ա��촺�����Ţ���ǡѺ���촷����
					)
				{
					system("cls");
					printf("Select Card %d is Three Card\n",i+1);
					np=1;
				}
			}	
		}
		
		//��� Two Pair
		//Two Pair
		if(np!=1)
		{
			//Two Pair (1)
			for(i=0;i<4;i++)
			{
				if	(
						(a[1]==a[2]) //�����촫�ӡѹ 2 � (���˹觷�� 1,2)
						&&
						(
							(h[i+1]==a[3])||(h[i+1]==a[4]) //�ա��촺�����Ţ���ǡѺ���촷������� (���˹觷�� 3,4)
						)
					)
				{
					system("cls");
					printf("Select Card %d is Two Pair\n",i+1);
					np=1;
				}
			}
			
			//Two Pair (2)
			for(i=0;i<4;i++)
			{
				if	(
						(a[2]==a[3]) //�����촫�ӡѹ 2 � (���˹觷�� 2,3)
						&&
						(
							(h[i+1]==a[1])||(h[i+1]==a[4]) //�ա��촺�����Ţ���ǡѺ���촷������� (���˹觷�� 1,4)
						)
					)
				{
					system("cls");
					printf("Select Card %d is Two Pair\n",i+1);
					np=1;
				}
			}
			
			
			//Two Pair (3)
			for(i=0;i<4;i++)
			{
				if	(
						(a[3]==a[4]) //�����촫�ӡѹ 2 � (���˹觷�� 3,4)
						&&
						(
							(h[i+1]==a[1])||(h[i+1]==a[2]) //�ա��촺�����Ţ���ǡѺ���촷������� (���˹觷�� 1,2)
						)
					)
				{
					system("cls");
					printf("Select Card %d is Two Pair\n",i+1);
					np=1;
				}
			}
		}
		
		//��� One Pair
		//One Pair
		if(np!=1)
		{
			for(i=0;i<4;i++)
			{
				if	(
						(h[i+1]==a[1]) //�ա��촺�����Ţ���ǡѺ���촷��ŧ���˹�� (���˹觷�� 1)
						||
						(h[i+1]==a[2]) //�ա��촺�����Ţ���ǡѺ���촷��ŧ���˹�� (���˹觷�� 2)
						||
						(h[i+1]==a[3]) //�ա��촺�����Ţ���ǡѺ���촷��ŧ���˹�� (���˹觷�� 3)
						||
						(h[i+1]==a[4]) //�ա��촺�����Ţ���ǡѺ���촷��ŧ���˹�� (���˹觷�� 4)
					)
				{
					system("cls");
					printf("Select Card %d is One Pair\n",i+1);
					np=1;
				}
			}
		}
		
		//Mini Straight
		if(np!=1)
		{
			//Mini Straight (1)
			for(i=0;i<4;i++)
			{
				if	(
						(a[1]==(a[2]-1)) // 5 6 ? ?
						&&
						((h[i+1]==a[1]-1)||(h[i+1]==a[1]+1)) // 4|7
					)
				{
					system("cls");
					printf("Select Card %d is Mini Straight\n",i+1);
					np=1;
				}
			}
			
			
			//Mini Straight (2)
			for(i=0;i<4;i++)
			{
				if	(
						(
							(a[2]==(a[3]-1)) // ? 5 6 ?
						)
						&&
						((h[i+1]==a[2]-1)||(h[i+1]==a[2]+1)) // 4|7
					)
				{
					system("cls");
					printf("Select Card %d is Mini Straight\n",i+1);
					np=1;
				}
			}
			
			//Mini Straight (3)
			for(i=0;i<4;i++)
			{
				if	(
						(
							(a[3]==(a[4]-1)) // ? ? 5 6
						)
						&&
						((h[i+1]==a[3]-1)||(h[i+1]==a[3]+1)) // 4|7
					)
				{
					system("cls");
					printf("Select Card %d is Mini Straight\n",i+1);
					np=1;
				}
			}	
			
			//Mini Straight (4)
			for(i=0;i<4;i++)
			{
				if	(
						(a[1]==(a[2]-2)) // 4 6 ? ?
						&&
						(h[i+1]==(a[1]+1)) // 5
					)
				{
					system("cls");
					printf("Select Card %d is Mini Straight\n",i+1);
					np=1;
				}
			}
			
			//Mini Straight (5)
			for(i=0;i<4;i++)
			{
				if	(
						(a[2]==(a[3]-2)) // ? 4 6 ?
						&&
						(h[i+1]==(a[2]+1)) // 5
					)
				{
					system("cls");
					printf("Select Card %d is Mini Straight\n",i+1);
					np=1;
				}
			}
			
			//Mini Straight (6)
			for(i=0;i<4;i++)
			{
				if	(
						(a[3]==(a[4]-2)) // ? ? 4 6
						&&
						(h[i+1]==(a[3]+1)) // 5
					)
				{
					system("cls");
					printf("Select Card %d is Mini Straight\n",i+1);
					np=1;
				}
			}
			
			
			//Mini Straight (7)
			for(i=0;i<4;i++)
			{
				if	(
						(
							(a[4]==1)&&(a[1]==2) // 2 ? ? A [1,4]
						)
						&&
						(h[i+1]==3) // 3
					)
				{
					system("cls");
					printf("Select Card %d is Mini Straight\n",i+1);
					np=1;
				}
			}
		}
		
		//��������
		//Random Card
		r = rand() % 4 + 1;
		system("cls");
		printf("Select Card %d is Random\n",r);
		
		
		printf("\n");
		
	}//end 4 card patten
	
	
	//��äӹǹ���ٻẺ���� 4 �
	//3 Card patten
	else if(p==3)
	{
		printf("\n---------- 3 Card Patten ----------\n\n");
		
		//�����͡�� Straight Flush
		//Straight Flush Chance
		for(i=0;i<4;i++)
		{
			if	(
					(f==1) //����� Flush
					&&
					(
						(
							(a[1]==(a[2]-1))&&(a[2]==(a[3]-1)) // 2 3 4 , ���������§ 3 �
						)
						&&
						(
							(h[i+1]==(a[1]-1))||(h[i+1]==(a[3]+1)) // 1 | 5
						)
						&&
						(hc[i+1]==ac[1]) //���촺���� �����ǡѺ���촷��ŧ����
					)
				)
			{
				system("cls");
				printf("Select Card %d \n",i+1);
				np=1;
			}
		}
		
		//�����͡�� Straight 1
		//Straight Chance (1)
		if(np!=1)
		{
			for(i=0;i<4;i++)
			{
				if	(
						
						(
							(a[1]==(a[2]-1))&&(a[2]==(a[3]-1)) // 2 3 4 , ���������§ 3 �
						)
						&&
						(
							(h[i+1]==(a[1]-1))||(h[i+1]==(a[3]+1)) // 1 | 5
						)
					)
				{
					system("cls");
					printf("Select Card %d \n",i+1);
					np=1;
				}
			}
		
			//�����͡�� Straight Flush 2
			//Straight Flush Chance (2)
			if(np!=1)
			{
				for(i=0;i<4;i++)
				{
					if	(
							(f==1) //����� Flush
							&&
							(
								(a[1]==(a[2]-1)) // 1 2 4
								&&
								(a[2]==(a[3]-2))
							)
							&&
							(h[i+1]==(a[2]+1)) // 3
							&&
							(hc[i+1]==ac[1])
						)
					{
						system("cls");
						printf("Select Card %d \n",i+1);
						np=1;
					}
				}
			}	
					
			
			//��� Straight 2
			//Straight Chance (2)
			if(np!=1)
			{
				for(i=0;i<4;i++)
				{
					if	(
							(
								(a[1]==(a[2]-1)) // 1 2 4
								&&
								(a[2]==(a[3]-2))
							)
							&&
							(h[i+1]==(a[2]+1)) // 3
						)
					{
						system("cls");
						printf("Select Card %d \n",i+1);
						np=1;
					}
				}
			}	
			
			//�����͡�� Straight Flush 3
			//Straight Flush Chance (4)
			if(np!=1)
			{
				for(i=0;i<4;i++)
				{
					if	(
							(f==1) //����� Flush
							&&
							(
								(a[1]==(a[2]-2)) // 1 3 4
								&&
								(a[2]==(a[3]-1))
							)
							&&
							(h[i+1]==(a[1]+1)) // 2
							&&
							(hc[i+1]==ac[1])
						)
					{
						system("cls");
						printf("Select Card %d \n",i+1);
						np=1;
					}
				}
			}	
			
			//�����͡�� Straight 3
			//Straight Chance(3)
			if(np!=1)
			{
				for(i=0;i<4;i++)
				{
					if	(
							(
								(a[1]==(a[2]-2)) // 1 3 4
								&&
								(a[2]==(a[3]-1))
							)
							&&
							(h[i+1]==(a[1]+1)) // 2
						)
					{
						system("cls");
						printf("Select Card %d \n",i+1);
						np=1;
					}
				}
			}	
				
			//�����͡�� Straight Flush 4
			//Straight Flush Chance (4)
			if(np!=1)
			{	
				for	(i=0;i<4;i++) //����� Flush
				{
					if	(
							(f==1)
							&&
							(
								(a[1]==(a[2]-3))&&(a[2]==(a[3]-1)) // 1 4 5
							)
							&&
							(
								(h[i+1]==(a[1]+1)) // 2 | 3
								||
								(h[i+1]==(a[1]+2))
							)
							&&
							(hc[i+1]==ac[1])
						)
					{
						system("cls");
						printf("Select Card %d \n",i+1);
						np=1;
					}
				}
			}	
			
			//�����͡�� Straight 4
			//Straight Chance(4)
			if(np!=1)
			{	
				for	(i=0;i<4;i++)
				{
					if	(
							(
								(a[1]==(a[2]-3))&&(a[2]==(a[3]-1)) // 1 4 5
							)
							&&
							(
								(h[i+1]==(a[1]+1)) // 2 | 3
								||
								(h[i+1]==(a[1]+2))
							)
						)
					{
						system("cls");
						printf("Select Card %d \n",i+1);
						np=1;
					}
				}
			}	
			
			//�����͡�� Straight Flush 5
			//Straight Flush Chance (5)
			if(np!=1)
			{	
				for(i=0;i<4;i++)
				{
					if	(
							(f==1) //����� Flush
							&&
							(
								(a[1]==(a[2]-1))&&(a[2]==(a[3]-3)) // 1 2 5
							)
							&&
							(
								(h[i+1]==(a[2]+1)) //  2 | 3
								||
								(h[i+1]==(a[2]+2))
							)
							&&
							(hc[i+1]==ac[1])
						)
					{
						system("cls");
						printf("Select Card %d \n",i+1);
						np=1;
					}
				}
			}	
			
			//�����͡�� Straight 5
			//Straight Chance (5)
			if(np!=1)
			{	
				for(i=0;i<4;i++)
				{
					if	(
							(
								(a[1]==(a[2]-1))&&(a[2]==(a[3]-3)) // 1 2 5
							)
							&&
							(
								(h[i+1]==(a[2]+1)) //  2 | 3
								||
								(h[i+1]==(a[2]+2))
							)
						)
					{
						system("cls");
						printf("Select Card %d \n",i+1);
						np=1;
					}
				}
			}	
			
			//�����͡�� Straight Flush 6
			//Straight Flush Chance (6)
			if(np!=1)
			{	
				for(i=0;i<4;i++)
				{
					if	(
							(f==1) //����� Flush
							&&
							(
								(a[1]==(a[2]-2))&&(a[2]==(a[3]-2)) // 1 3 5
							)
							&&
							(
								(h[i+1]==(a[1]+1)) // 2 | 4
								||
								(h[i+1]==(a[2]+1))
							)
							&&
							(hc[i+1]==ac[1])
						)
					{
						system("cls");
						printf("Select Card %d \n",i+1);
						np=1;
					}
				}
			}	
			
			//�����͡�� Straight 6
			//Straight Chance (6)
			if(np!=1)
			{	
				for(i=0;i<4;i++)
				{
					if	(
							(
								(a[1]==(a[2]-2))&&(a[2]==(a[3]-2)) // 1 3 5
							)
							&&
							(
								(h[i+1]==(a[1]+1)) // 2 | 4
								||
								(h[i+1]==(a[2]+1))
							)
						)
					{
						system("cls");
						printf("Select Card %d \n",i+1);
						np=1;
					}
				}
			}
		}
		
		//�����͡�� Five Flush , Lucky Seven Flush
		//��� Four Card
		//Five Flush , Seven Flush Chance
		//Four Card
		if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	(
						(f==1) //����� Flush
						&&
						(
							(a[1]==a[2])&&(a[2]==a[3]) // 1 1 1
						)
						&&
						(
							(h[i+1]==a[1]) // 1
						)
						&&
						(hc[i+1]==ac[1])
					)
				{
					system("cls");
					printf("Select Card %d \n",i+1);
					np=1;
				}
			}
		}	
		
		
		//�����͡�� Five Card , Lucky Seven
		//��� Four Card
		//Five Card , Lucky Seven Chance
		//Four Card
		if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	(
						(
							(a[1]==a[2])&&(a[2]==a[3]) // 1 1 1
						)
						&&
						(
							(h[i+1]==a[1]) // 1
						)
					)
				{
					system("cls");
					printf("Select Card %d \n",i+1);
					np=1;
				}
			}
		}	
		
		
		//�����͡�� Straight 1
		//��� Mini Straight
		//Straight Chance 1
		//Mini Straight
		if(np!=1)
		{
			for(i=0;i<4;i++)
			{
				if	(
						(
							(a[1]==(a[2]-1)) // 2 3 ?
						)
						&&
						(
							(h[i+1]==(a[1]-1)) // 1 | 4
							||
							(h[i+2]==(a[2]+1))
						)
					)
				{
					system("cls");
					printf("Select Card %d \n",i+1);
					np=1;
				}
			}
		}
		
		
		//�����͡�� Straight 2
		//��� Mini Straight
		//Straight Chance 2
		//Mini Straight
		if(np!=1)
		{
			for(i=0;i<4;i++)
			{
				if	(
						(
							(a[2]==(a[3]-1)) // ? 2 3
						)
						&&
						(
							(h[i+1]==(a[1]-1)) // 1 | 4
							||
							(h[i+2]==(a[2]+1))
						)
					)
				{
					system("cls");
					printf("Select Card %d \n",i+1);
					np=1;
				}
			}
		}
	
		//�����͡�� Straight 3
		//Straight Chance 3
		if(np!=1)
		{
			for(i=0;i<4;i++)
			{
				if	(
						(
							(a[1]==(a[2]-1)) // 8 9 ?
						)
						&&
						(
							(h[i+1]==(a[1]-2)) // 6 | 11
							||
							(h[i+2]==(a[2]+2))
						)
					)
				{
					system("cls");
					printf("Select Card %d \n",i+1);
					np=1;
				}
			}
		}
		
			
		//�����͡�� Straight 4
		//Straight Chance 4
		if(np!=1)
		{
			for(i=0;i<4;i++)
			{
				if	(
						(
							(a[2]==(a[3]-1)) // ? 8 9
						)
						&&
						(
							(h[i+1]==(a[1]-2)) // 6 | 11
							||
							(h[i+2]==(a[2]+2))
						)
					)
				{
					system("cls");
					printf("Select Card %d \n",i+1);
					np=1;
				}
			}
		}
		
		
		//�����͡�� Four Card , House Flush 1
		//��� Three Card
		//Four Card Chance , House Flush 1
		//Three Card	
		if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	(
						
						(f==1) //����� Flush
						&&
						(
							(a[1]==a[2]) // 1 1 ?
						)
						&&
						(
							(h[i+1]==a[1]) // 1
						)
						&&
						(hc[i+1]==ac[1]) //���촺�����������ǡѺ���촷��ŧ����
					)
				{
					system("cls");
					printf("Select Card %d \n",i+1);
					np=1;
				}
			}
		}	
		
		
		//�����͡�� Four Card , Full House 1
		//��� Three Card
		//Four Card , Full House Chance 1
		//Three Card	
		if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	(
						(
							(a[1]==a[2]) // 1 1 ?
						)
						&&
						(
							(h[i+1]==a[1]) // 1
						)
					)
				{
					system("cls");
					printf("Select Card %d \n",i+1);
					np=1;
				}
			}
		}	
		
		
		//�����͡�� Four Card , House Flush 2
		//��� Three Card
		//Four Card , House Flush Chance 2
		//Three Card
		if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	(
						
						(f==1) //����� Flush
						&&
						(
							(a[2]==a[3]) // ? 2 2
						)
						&&
						(
							(h[i+1]==a[1]) // 2
						)
						&&
						(hc[i+1]==ac[1]) //���촺�����������ǡѺ���촷��ŧ����
					)
				{
					system("cls");
					printf("Select Card %d \n",i+1);
					np=1;
				}
			}
		}	
		
		//�����͡�� Four Card , Full House 2
		//��� Three Card
		//Four Card , Full House Chance 2
		//Three Card	
		if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	(
						(
							(a[2]==a[3]) // ? 2 2
						)
						&&
						(
							(h[i+1]==a[1]) // 2
						)
					)
				{
					system("cls");
					printf("Select Card %d \n",i+1);
					np=1;
				}
			}
		}	
		
		//�����͡�� Three Card
		//��� Two Pair
		//Three Card Chance
		//Two Pair
		if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	(
						(h[i+1]==a[1])||(h[i+1]==a[2])||(h[i+1]==a[3])
					)
				{
					system("cls");
					printf("Select Card %d \n",i+1);
					np=1;
				}
			}
		}	
		
		//��������
		//Random Card
		r = rand() % 4 + 1;
		system("cls");
		printf("Select Card %d is Random\n",r);
		
		
		printf("\n");
	
	
	}//end 3 card patten
	
	
	
	
	
	
		
	//2 Card patten
		else if(p==2)
	{
		printf("\n---------- 2 Card Patten ----------\n\n");
		
		int z=0;
	
		//�Ţ��� error 0-4
		for(z=0;z<5;z++)
		{
			// �Ţ��� &Flush
			if(np!=1)
			{	
				for(i=0;i<4;i++)
				{
					if	(
							
							(f==1) //����� Flush
							&&
							(
								(a[1]==a[2])
							)
							&&
							(
								(h[i+1]==a[1]+z)||(h[i+1]==a[1]-z)
							)
							&&
							(hc[i+1]==ac[1])//���촺�����������ǡѺ���촷��ŧ����
						)
					{
						system("cls");
						printf("Select Card %d \n",i+1);
						np=1;
					}
				}
			}	
		}
		
		for(z=0;z<5;z++)
		{
			// �Ţ���
			if(np!=1)
			{	
				for(i=0;i<4;i++)
				{
					if	(
							
							(
								(a[1]==a[2])
							)
							&&
							(
								(h[i+1]==a[1]+z)||(h[i+1]==a[1]-z)
							)
						)
					{
						system("cls");
						printf("Select Card %d \n",i+1);
						np=1;
					}
				}
			}	
		}
	
	
		//---------------------------------------------------------------------------------
	
	
	
		//�Ţ�Դ error 1-2
		for(z=1;z<3;z++)
		{
			// �Ţ�Դ &Flush
			if(np!=1)
			{	
				for(i=0;i<4;i++)
				{
					if	(
							
							(f==1) //����� Flush
							&&
							(
								(a[1]==a[2]-1)	||	((a[1]==13)&&(a[2]==1))	||	((a[1]==1)&&(a[2]==13))	
							)
							&&
							(
								(h[i+1]==a[2]+z)||(h[i+1]==a[1]-z)
							)
							&&
							(hc[i+1]==ac[1])//���촺�����������ǡѺ���촷��ŧ����
						)
					{
						system("cls");
						printf("Select Card %d \n",i+1);
						np=1;
					}
				}
			}	
		}
		
		
		for(z=1;z<3;z++)
		{
			// �Ţ�Դ
			if(np!=1)
			{	
				for(i=0;i<4;i++)
				{
					if	(
							
							(
								(a[1]==a[2]-1)	||	((a[1]==13)&&(a[2]==1))	||	((a[1]==1)&&(a[2]==13))	
							)
							&&
							(
								(h[i+1]==a[2]+z)||(h[i+1]==a[1]-z)
							)
						)
					{
						system("cls");
						printf("Select Card %d \n",i+1);
						np=1;
					}
				}
			}	
		}
	
	
		//�Ţ�Դ error 0
		if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	(
					
						(f==1) //����� Flush
						&&
						(
							(a[1]==a[2]-1)	||	((a[1]==13)&&(a[2]==1))	||	((a[1]==1)&&(a[2]==13))	
						)
						&&
						(
							(h[i+1]==a[1])||(h[i+1]==a[2])
						)
						&&
						(hc[i+1]==ac[1])//���촺�����������ǡѺ���촷��ŧ����
					)
				{
					system("cls");
					printf("Select Card %d \n",i+1);
					np=1;
				}
			}
		}	
		
		
		// �Ţ�Դ
		if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	(
						
						(
							(a[1]==a[2]-1)	||	((a[1]==13)&&(a[2]==1))	||	((a[1]==1)&&(a[2]==13))	
						)
						&&
						(
							(h[i+1]==a[1])||(h[i+1]==a[2])
						)
					)
				{
					system("cls");
					printf("Select Card %d \n",i+1);
					np=1;
				}
			}
		}	
	
	
	
		//�Ţ�Դ error 3-4
		for(z=3;z<5;z++)
		{
			// �Ţ�Դ &Flush
			if(np!=1)
			{	
				for(i=0;i<4;i++)
				{
					if	(
							
							(f==1) //����� Flush
							&&
							(
								(a[1]==a[2]-1)	||	((a[1]==13)&&(a[2]==1))	||	((a[1]==1)&&(a[2]==13))	
							)
							&&
							(
								(h[i+1]==a[2]+z)||(h[i+1]==a[1]-z)
							)
							&&
							(hc[i+1]==ac[1])//���촺�����������ǡѺ���촷��ŧ����
						)
					{
						system("cls");
						printf("Select Card %d \n",i+1);
						np=1;
					}
				}
			}	
		}
		
		
		for(z=3;z<5;z++)
		{
			// �Ţ�Դ
			if(np!=1)
			{	
				for(i=0;i<4;i++)
				{
					if	(
							
							(
								(a[1]==a[2]-1)	||	((a[1]==13)&&(a[2]==1))	||	((a[1]==1)&&(a[2]==13))	
							)
							&&
							(
								(h[i+1]==a[2]+z)||(h[i+1]==a[1]-z)
							)
						)
					{
						system("cls");
						printf("Select Card %d \n",i+1);
						np=1;
					}
				}
			}	
		}
	
		//----------------------------------------------------------------------------------------------------------
		// a[1]+2 �Ţ��ҧ +2
		//*** 4 <---1---> 6
	
		// *** 4 [5] 6
		// �����͡�ʡ������������ҧ�Ţ +Flush
		if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	(
						
						(f==1) //����� Flush
						&&
						(
							(a[1]==a[2]-2)	||	((a[1]==12)&&(a[2]==1))	||	((a[1]==1)&&(a[2]==12))	
						)
						&&
						(
							(h[i+1]==a[1]+1)
						)
						&&
						(hc[i+1]==ac[1])//���촺�����������ǡѺ���촷��ŧ����
					)
				{
					system("cls");
					printf("Select Card %d \n",i+1);
					np=1;
				}
			}
		}	
	
		
		// �����͡�ʡ������������ҧ�Ţ
		if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	(
						
						(
							(a[1]==a[2]-2)	||	((a[1]==12)&&(a[2]==1))	||	((a[1]==1)&&(a[2]==12))	
						)
						&&
						(
							(h[i+1]==a[1]+1)
						)
					)
				{
					system("cls");
					printf("Select Card %d \n",i+1);
					np=1;
				}
			}
		}	
	
	
		// *** [3] 4 6 [7]
		// �����͡�ʡ������� Straight +1 +3
		for(z=1;z<2;z++)
		{
			// �����͡�ʡ������� Straight +Flush
			if(np!=1)
			{	
				for(i=0;i<4;i++)
				{
					if	(
							
							(f==1) //����� Flush
							&&
							(
								(a[1]==a[2]-2)	||	((a[1]==12)&&(a[2]==1))	||	((a[1]==1)&&(a[2]==12))	
							)
							&&
							(
								(h[i+1]==a[2]+z)	||	(h[i+1]==a[1]-z)
							)
							&&
							(hc[i+1]==ac[1])//���촺�����������ǡѺ���촷��ŧ����
						)
					{
						system("cls");
						printf("Select Card %d \n",i+1);
						np=1;
					}
				}
			}	
		}
		
		
		for(z=1;z<2;z++)
		{
			// �����͡�ʡ������� Straight 
			if(np!=1)
			{	
				for(i=0;i<4;i++)
				{
					if	(
							
							(
								(a[1]==a[2]-2)	||	((a[1]==12)&&(a[2]==1))	||	((a[1]==1)&&(a[2]==12))	
							)
							&&
							(
								(h[i+1]==a[2]+z)	||	(h[i+1]==a[1]-z)
							)
						)
					{
					system("cls");
					printf("Select Card %d \n",i+1);
					np=1;
					}
				}
			}	
		}
	
	
	
		// �����͡�ʡ������� Straight +0 +2
		// �����͡�ʡ������� FullHouse
		// *** [4] 4 6 [6]
		for(z=0;z<1;z++)
		{
			// �����͡�ʡ������� Straight +Flush
			if(np!=1)
			{	
			for(i=0;i<4;i++)
				{
					if	(
						
							(f==1) //����� Flush
							&&
							(
								(a[1]==a[2]-2)	||	((a[1]==12)&&(a[2]==1))	||	((a[1]==1)&&(a[2]==12))	
							)
							&&
							(
								(h[i+1]==a[2]+z)	||	(h[i+1]==a[1]-z)
							)
							&&
							(hc[i+1]==ac[1])//���촺�����������ǡѺ���촷��ŧ����
						)
					{
						system("cls");
						printf("Select Card %d \n",i+1);
						np=1;
					}
				}
			}	
		}
		
		
		for(z=0;z<1;z++)
		{
			// �����͡�ʡ������� Straight 
			if(np!=1)
			{	
				for(i=0;i<4;i++)
				{
					if	(
							
							(
								(a[1]==a[2]-2)	||	((a[1]==12)&&(a[2]==1))	||	((a[1]==1)&&(a[2]==12))	
							)
							&&
							(
								(h[i+1]==a[2]+z)	||	(h[i+1]==a[1]-z)
							)
						)
					{
						system("cls");
						printf("Select Card %d \n",i+1);
						np=1;
					}
				}
			}	
		}
	
	
		// �����͡�ʡ������� Straight -2 +4 // [3]  5  7  [9]
		for(z=2;z<3;z++)
		{
			// �����͡�ʡ������� +Flush
			if(np!=1)
			{	
				for(i=0;i<4;i++)
				{
					if	(
							
							(f==1) //����� Flush
							&&
							(
								(a[1]==a[2]-2)	||	((a[1]==12)&&(a[2]==1))	||	((a[1]==1)&&(a[2]==12))	
							)
							&&
							(
								(h[i+1]==a[2]+z)	||	(h[i+1]==a[1]-z)
							)
							&&
							(hc[i+1]==ac[1])//���촺�����������ǡѺ���촷��ŧ����
						)
					{
						system("cls");
						printf("Select Card %d \n",i+1);
						np=1;
					}
				}
			}	
		}
		
		
		
		for(z=2;z<3;z++)
		{
			if(np!=1)
			{	
				for(i=0;i<4;i++)
				{
					if	(
							
							(
								(a[1]==a[2]-2)	||	((a[1]==12)&&(a[2]==1))	||	((a[1]==1)&&(a[2]==12))	
							)
							&&
							(
								(h[i+1]==a[2]+z)	||	(h[i+1]==a[1]-z)
							)
						)
					{
						system("cls");
						printf("Select Card %d \n",i+1);
						np=1;
					}
				}
			}	
		}
	
	
		//  ----------------------------------------------------------------------------------------
		// �ٻẺ a[1]==a[2]-3 --������ҧ2 *** 4 <---2---> 7
	
	
		// �����͡�ʡ������������ҧ *** 4 [?] 7
		for(z=1;z<2;z++)
		{
			// �����͡�ʡ������������ҧ *** 4 [?] 7
			if(np!=1)
			{	
				for(i=0;i<4;i++)
				{
					if	(
						
							(f==1) //����� Flush
							&&
							(
								(a[1]==a[2]-3)	||	((a[1]==11)&&(a[2]==1))	||	((a[1]==1)&&(a[2]==11))	
							)
							&&
							(
								(h[i+1]==a[1]+z)	||	(h[i+1]==a[2]-z)
							)
							&&
							(hc[i+1]==ac[1])//���촺�����������ǡѺ���촷��ŧ����
						)
					{
						system("cls");
						printf("Select Card %d \n",i+1);
						np=1;
					}
				}
			}	
		}
		
		
		
		for(z=1;z<2;z++)
		{
			if(np!=1)
			{	
				for(i=0;i<4;i++)
				{
					if	(
							
							(
								(a[1]==a[2]-3)	||	((a[1]==11)&&(a[2]==1))	||	((a[1]==1)&&(a[2]==11))	
							)
							&&
							(
								(h[i+1]==a[1]+z)	||	(h[i+1]==a[2]-z)
							)
						)
					{
						system("cls");
						printf("Select Card %d \n",i+1);
						np=1;
					}
				}
			}	
		}
	
	
	
	
		// �����͡�ʡ������� Straight + - 1
		// [3] 4 7 [8]
		for(z=1;z<2;z++)
		{
			// �����͡�ʡ������� Straight + - 1
			if(np!=1)
			{	
				for(i=0;i<4;i++)
				{
					if	(
							
							(f==1) //����� Flush
							&&
							(
								(a[1]==a[2]-3)	||	((a[1]==11)&&(a[2]==1))	||	((a[1]==1)&&(a[2]==11))	
							)
							&&
							(
								(h[i+1]==a[1]-z)	||	(h[i+1]==a[2]+z)
							)
							&&
							(hc[i+1]==ac[1])//���촺�����������ǡѺ���촷��ŧ����
						)
					{
						system("cls");
						printf("Select Card %d \n",i+1);
						np=1;
					}
				}
			}	
		}
		
		
		
		for(z=1;z<2;z++)
		{
			if(np!=1)
			{	
				for(i=0;i<4;i++)
				{
					if	(
							
							(
								(a[1]==a[2]-3)	||	((a[1]==11)&&(a[2]==1))	||	((a[1]==1)&&(a[2]==11))	
							)
							&&
							(
								(h[i+1]==a[1]-z)	||	(h[i+1]==a[2]+z)
							)
						)
					{
						system("cls");
						printf("Select Card %d \n",i+1);
						np=1;
					}
				}
			}	
		}
	
	
	
	

		// �����͡�ʡ������� Straight + - 0
		// +FullHouse
		// [4] 4 7 [7]
		for(z=0;z<1;z++)
		{
			if(np!=1)
			{	
				for(i=0;i<4;i++)
				{
					if	(
						
							(f==1) //����� Flush
							&&
							(
								(a[1]==a[2]-3)	||	((a[1]==11)&&(a[2]==1))	||	((a[1]==1)&&(a[2]==11))	
							)
							&&
							(
								(h[i+1]==a[1]-z)	||	(h[i+1]==a[2]+z)
							)
							&&
							(hc[i+1]==ac[1])//���촺�����������ǡѺ���촷��ŧ����
						)
					{
						system("cls");
						printf("Select Card %d \n",i+1);
						np=1;
					}
				}
			}	
		}
		
		
		
		for(z=0;z<1;z++)
		{
			if(np!=1)
			{	
				for(i=0;i<4;i++)
				{
					if	(
						
							(
								(a[1]==a[2]-3)	||	((a[1]==11)&&(a[2]==1))	||	((a[1]==1)&&(a[2]==11))	
							)
							&&
							(
								(h[i+1]==a[1]-z)	||	(h[i+1]==a[2]+z)
							)
						)
					{
						system("cls");
						printf("Select Card %d \n",i+1);
						np=1;
					}
				}
			}	
		}
	
	
	
		// �����͡�ʡ������� Straight + - 2
		// [4] 6 7 [9]
		for(z=2;z<3;z++)
		{
			if(np!=1)
			{	
				for(i=0;i<4;i++)
				{
					if	(
						
							(f==1) //����� Flush
							&&
							(
								(a[1]==a[2]-3)	||	((a[1]==11)&&(a[2]==1))	||	((a[1]==1)&&(a[2]==11))	
							)
							&&
							(
								(h[i+1]==a[1]-z)	||	(h[i+1]==a[2]+z)
							)
							&&
							(hc[i+1]==ac[1])//���촺�����������ǡѺ���촷��ŧ����
						)
					{
						system("cls");
						printf("Select Card %d \n",i+1);
						np=1;
					}
				}
			}	
		}
		
		
		
		for(z=2;z<3;z++)
		{
			if(np!=1)
			{	
				for(i=0;i<4;i++)
				{
					if	(
						
							(
								(a[1]==a[2]-3)	||	((a[1]==11)&&(a[2]==1))	||	((a[1]==1)&&(a[2]==11))	
							)
							&&
							(
								(h[i+1]==a[1]-z)	||	(h[i+1]==a[2]+z)
							)
						)
					{
						system("cls");
						printf("Select Card %d \n",i+1);
						np=1;
					}
				}
			}	
		}
	
	
		//---------------------------------------------------------------------------------------------------------
		//������ҧ3 ** 4 <---3---> 8
	
	
		// �����͡�ʡ�����Ţ�����ҧ����
		// 4 [?] 8
		for(z=1;z<4;z++)
		{
			if(np!=1)
			{	
				for(i=0;i<4;i++)
				{
					if	(
						
							(f==1) //����� Flush
							&&
							(
								(a[1]==a[2]-4)	||	((a[1]==10)&&(a[2]==1))	||	((a[1]==1)&&(a[2]==10))	
							)
							&&
							(
								(h[i+1]==a[1]+z)
								)
							&&
							(hc[i+1]==ac[1])//���촺�����������ǡѺ���촷��ŧ����
						)
					{
						system("cls");
						printf("Select Card %d \n",i+1);
						np=1;
					}
				}
			}	
		}
		
		
		
		for(z=1;z<4;z++)
		{
			if(np!=1)
			{	
				for(i=0;i<4;i++)
				{
					if	(
						
							(
								(a[1]==a[2]-4)	||	((a[1]==10)&&(a[2]==1))	||	((a[1]==1)&&(a[2]==10))	
							)
							&&
							(
								(h[i+1]==a[1]+z)
							)
						)
					{
						system("cls");
						printf("Select Card %d \n",i+1);
						np=1;
					}
				}
			}	
		}
	
	
	
		// �����͡�ʡ������� Straight
		// �����͡�ʡ������� FullHouse
		// �����͡�ʡ������촵Դ +/-1 (�͡)
		// 4 [4] 8 [8]
		// [3] 4 8 [9]
		for(z=0;z<2;z++)
		{
			if(np!=1)
			{	
				for(i=0;i<4;i++)
				{
					if	(
						
							(f==1) //����� Flush
							&&
							(
								(a[1]==a[2]-4)	||	((a[1]==10)&&(a[2]==1))	||	((a[1]==1)&&(a[2]==10))	
							)
							&&
							(
								(h[i+1]==a[1]-z)	||	(h[i+1]==a[2]+z)	
							)
							&&
							(hc[i+1]==ac[1])//���촺�����������ǡѺ���촷��ŧ����
						)
					{
						system("cls");
						printf("Select Card %d \n",i+1);
						np=1;
					}
				}
			}	
		}
		
		
		
		for(z=0;z<2;z++)
		{
			if(np!=1)
			{	
				for(i=0;i<4;i++)
				{
					if	(
							
							(
								(a[1]==a[2]-4)	||	((a[1]==10)&&(a[2]==1))	||	((a[1]==1)&&(a[2]==10))	
							)
							&&
							(
								(h[i+1]==a[1]+z)	||	(h[i+1]==a[2]+z)	
							)
						)
					{
						system("cls");
						printf("Select Card %d \n",i+1);
						np=1;
					}
				}
			}	
		}
		
		if(np!=1)
		{	
			//��������
			//Random Card
			r = rand() % 4 + 1;
			system("cls");
			printf("Select Card %d is Random\n",r);
		
			
			printf("\n");
		}
	
	
	}//end 2 card patten
	
	
		
	
	
		
	//1 Card patten
	else if(p==1)
	{
		printf("\n---------- 1 Card Patten ----------\n\n");
	
		//�����͡�� Royal Straight Flush �÷ 10 J Q K A +|-1 (1)
		//Royal Straight Flush Chance
		if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	((
						(a[i+1]==10) // 10
					)
					&&
					(a[i+1]=11) // 11
					&&
					(hc[i+1]==ac[1]))
				{
					system("cls");
					printf("Select Card %d \n",i+1);
					np=1;
				}
			}
		}	
		
		//�����͡�� Royal Straight Flush �÷ 10 J Q K A +|-1 (2)
		if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	(	
						(
							(a[i+1]==1) // 1
						)
						&&
						(a[i+1]==13) // 13
						&&
						(hc[i+1]==ac[1])
					)
				{
					system("cls");
					printf("Select Card %d \n",i+1);
					np=1;
				}
			}
		}	
		
		//�����͡�� Royal Straight Flush �÷ 10 J Q K A +|-1 (3)
		if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	(
						(
							(a[i+1]==11)||(a[i+1]==12)||(a[i+1]==13) // 11 | 12 | 13
						)
						&&
						(
							(a[i+1]==(a[i+1]+1))||(a[i+1]==(a[i+1]-1)) // a +|- 1
						)
						&&
						(hc[i+1]==ac[1])
					)
				{
					system("cls");
					printf("Select Card %d \n",i+1);
					np=1;
				}
			}
		}	
		
		//�����͡�� Straight Flush ���Ţ����� ����͹�ѹ +|- 1
		//Straight Flush Chance +|- 1
		if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	(
						(
							(a[i+1]==(h[i+1]+1))||(a[i+1]==(h[i+1]-1))
						)
						&&
						(hc[i+1]==ac[i+1])
					)
				{
					system("cls");
					printf("Select Card %d \n",i+1);
					np=1;
				}
			}
		}	
		
		//�����͡�� �Ѻ��� ���Ţ����շ������͹�ѹ
		//Pair+ Flush Chance
			if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	
					(
						(
							(a[i+1]==h[i+1])
						)
						&&
						(hc[i+1]==ac[i+1])
					)
				{
					system("cls");
					printf("Select Card %d \n",i+1);
					np=1;
				}
			}
		}	
		

		
		//�����͡�� Straight Flush ���Ţ����� ����͹�ѹ +|- 2
		//Straight Flush +|- 2
		if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	(
						(
							(a[i+1]==(h[i+1]+2))||(a[i+1]==(h[i+1]-2))
						)
						&&
						(hc[i+1]==ac[i+1])
					)
				{
					system("cls");
					printf("Select Card %d \n",i+1);
					np=1;
				}
			}
		}	
		
		
		//�����͡�� �Ѻ��� ���Ţ�������͹�ѹ
		//Pair+ Chance
			if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	
					(
						(a[i+1]==h[i+1])
					)
				{
					system("cls");
					printf("Select Card %d \n",i+1);
					np=1;
				}
			}
		}	
		
		
		
		//�����͡�� Straight ���Ţ����͹�ѹ +|- 1
		//Straight Chance +|- 1
		if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	(
						(a[i+1]==(h[i+1]+1))||(a[i+1]==(h[i+1]-1))
					)
				{
					system("cls");
					printf("Select Card %d \n",i+1);
					np=1;
				}
			}
		}	
		
		//�����͡�� Straight ���Ţ����͹�ѹ +|- 2
		//Straight Chance +|- 2
		if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	(
						(a[i+1]==(h[i+1]+2))||(a[i+1]==(h[i+1]-2))
					)
				{
					system("cls");
					printf("Select Card %d \n",i+1);
					np=1;
				}
			}
		}	
		
		//�����͡�� Straight Flush ���Ţ����� ����͹�ѹ +|- 3
		//Straight Flush Chance +|- 3
		if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	(
						(
							(a[i+1]==(h[i+1]+3))||(a[i+1]==(h[i+1]-3))
						)
						&&
						(hc[i+1]==ac[i+1])
					)
				{
					system("cls");
					printf("Select Card %d \n",i+1);
					np=1;
				}
			}
		}	
		
		//�����͡�� Straight ���Ţ����͹�ѹ +|- 3
		//Straight Chance +|- 3
		if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	(
						(a[i+1]==(h[i+1]+3))||(a[i+1]==(h[i+1]-32))
					)
				{
					system("cls");
					printf("Select Card %d \n",i+1);
					np=1;
				}
			}
		}	
		
		//�����͡�� Flush ���շ������͹�ѹ
		//Flush Chance
		if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	(hc[i+1]==ac[1])
				{
					system("cls");
					printf("Select Card %d \n",i+1);
					np=1;
				}
			}
		}	
		
		//��������
		//Random Card
		r = rand() % 4 + 1;
		system("cls");
		printf("Select Card %d is Random\n",r);
		
		
		printf("\n");
		
		
	
	}//end 1 card patten
	
	
	
	
	
	//0 Card patten
	else if(p==0)
	{
		printf("\n---------- 0 Card Patten ----------\n\n");
	
	
		//��������
		//Random Card
		r = rand() % 4 + 1;
		system("cls");
		printf("Select Card %d is Random\n",r);
		
		
		printf("\n");
	
	}//end 0 card patten
	
	
	
	
	
	
	else if ((p!=0)&&(p!=1)&&(p!=2)&&(p!=3)&&(p!=4))
	{
		printf("Patten is not correct! \nPlease Enter Agian");
	}//end not correct data
	
	
	//�ʴ������ŷ��ѹ�֡���
	//Loop display data
	//	for(i=0;i<p;i++)
	//	{
	//		printf("Card %d = %d\n",i+1,a[i+1]);
	//
	//		printf("Card %d Color = %d\n",i+1,ac[i+1]);
	//	}
	//	for(i=0;i<4;i++)
	//	{
	//		printf("Card %d on hand = %d\n",i+1,h[i+1]);
	//
	//		printf("Card %d on hand Color = %d\n",i+1,hc[i+1]);
	//	}
	getch();

	system("cls");
}
}
