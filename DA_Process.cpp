#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<stdlib.h>
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
	
		printf("* Color Red = 1\n");
		printf("* Color Blue = 2\n");
		printf("* Color Green = 3\n");
	
	printf("\n");
	printf("Enter Card Unit [0-4] = ");
	scanf("%d",&p);
	
	//����� a ���¶֧���촷��ŧ����
	//����� ac ���¶֧�բͧ���촷��ŧ����
	//����� h ���¶֧���촺����
	//����� hc ���¶֧�բͧ���촺����
	int a[5],ac[5],h[5],hc[5];
	
	printf("\n");
	//����Ѻ��������зӫ�Ӣͧ���촷��ŧ����
	//Loop Resive Data
	for(i=0;i<p;i++)
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
	
	//����ͺ��� Flush �ͧ���촷��ŧ���� (�ٻẺ 4 �)
	//Flush Check 4 Card patten
	if(p==4)
	{
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
		if	(
				(ac[1]==ac[2])
			)
		{
			f=1;
		}
	}


		
	printf("----------------------------------------------------------\n");
	
	
	
	
	//��äӹǹ���ٻẺ���� 4 �
	//4 Card patten
	if(p==4)
	{
		//�ʴ��ٻẺ��äӹǹ
		printf("\n---------- 4 Card Patten ----------\n\n");
		
		
		//Royal Straight Flush
		//RSF 1
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
				printf("Select Card %d is Royal Straight Flush\n",i+1);
				np=1;
			}
		}
		
		//RSF 2
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
				printf("Select Card %d is Royal Straight Flush\n",i+1);
				np=1;
			}
		}
		
		//RSF 3
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
				printf("Select Card %d is Royal Straight Flush\n",i+1);
				np=1;
			}
		}
		
		//RSF 4
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
				printf("Select Card %d is Royal Straight Flush\n",i+1);
				np=1;
			}
		}
		
		//RSF 5
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
				printf("Select Card %d is Royal Straight Flush\n",i+1);
				np=1;
			}
		}
		
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
					printf("Select Card %d is Lucky Seven Flush\n",i+1);
					np=1;
				}
			}
		}
		
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
					printf("Select Card %d is Lucky Seven \n",i+1);
					np=1;
				}
			}
		}
		
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
					printf("Select Card %d is Five Flush\n",i+1);
					np=1;
				}
			}
		}
		
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
					printf("Select Card %d is Five Card\n",i+1);
					np=1;
				}
			}
		}
		
		//House Flush
		if(np!=1)
		{
			//HF 1
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
					printf("Select Card %d is House Flush\n",i+1);
					np=1;
				}
			}
		
		
			//HF 2 
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
					printf("Select Card %d is House Flush\n",i+1);
					np=1;
				}
			}
		
		
			//HF 3
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
					printf("Select Card %d is House Flush\n",i+1);
					np=1;
				}
			}
		}
		
		
		//Straight Flush
		if(np!=1)
		{
			//STF 1
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
					printf("Select Card %d is Straight Flush\n",i+1);
					np=1;
				}
			}
				
			
			//STF 2
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
					printf("Select Card %d is Straight Flush\n",i+1);
					np=1;
				}
			}
			
			//STF 3
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
					printf("Select Card %d is Straight Flush\n",i+1);
					np=1;
				}
			}
			
			//STF 4
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
					printf("Select Card %d is Straight Flush\n",i+1);
					np=1;
				}
			}
			
		}
		
		//Four Card
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
					printf("Select Card %d is Four Card\n",i+1);
					np=1;
				}
			}	
		}
		
		//Four Card 2
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
					printf("Select Card %d is Four Card\n",i+1);
					np=1;
				}
			}	
		}
			
		//Full House
		if(np!=1)
		{
			//FH 1
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
					printf("Select Card %d is Full House\n",i+1);
					np=1;
				}
			}
		
		
			//FH 2
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
					printf("Select Card %d is Full House\n",i+1);
					np=1;
				}
			}
			
			
			//FH 3
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
					printf("Select Card %d is Full House\n",i+1);
					np=1;
				}
			}
		}
		
		int st=0;
		
		//Straight
		if(np!=1)
		{
			//ST 1
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
					printf("Select Card %d is Straight\n",i+1);
					st=1;
					np=1;
				}
			}
			
			//ST !=1
			if(st!=1)
			{
			
				//ST 2
					
			
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
						printf("Select Card %d is Straight\n",i+1);
						np=1;
					}
				}
				
				
				//ST 3
					
			
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
						printf("Select Card %d is Straight\n",i+1);
						np=1;
					}
				}
				
				
			
				//ST 4	
		
				
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
						printf("Select Card %d is Straight\n",i+1);
						np=1;
					}
				}
				
				
				//ST 5
		
				
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
						printf("Select Card %d is Straight\n",i+1);
						np=1;
					}
				}
				
				
				
				//ST 6
				
				
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
						printf("Select Card %d is Straight\n",i+1);
						np=1;
					}
				}
				
				
				
				//ST 7
				
				
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
						printf("Select Card %d is Straight\n",i+1);
						np=1;
					}
				}	
			}
		}
		
		//Flush
		if(np!=1)
		{
			if	(f==1) //����� Flush
			{	
				for(i=0;i<4;i++)
				{
					if	(hc[i+1]==ac[1]) //�ա��촺���� �����ǡѺ���촷��ŧ����
					{
						printf("Select Card %d is Flush\n",i+1);
						np=1;
					}
				}	
			}
		}
		
		//Three Seven
		if(np!=1)
		{
			//TS 1
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
					printf("Select Card %d is Three Seven\n",i+1);
					np=1;
				}
			}
			
			//TS 2
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
					printf("Select Card %d is Three Seven\n",i+1);
					np=1;
				}
			}	
			
			//TS 3
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
					printf("Select Card %d is Three Seven\n",i+1);
					np=1;
				}
			}
		}
			
		//Three Card
		if(np!=1)
		{
			//TC 1
			for(i=0;i<4;i++)
			{
				if	(
						(a[1]==a[2]) //�����촫�ӡѹ 2 � (���˹觷�� 1,2)
						&&
						(h[i+1]==a[1]) //�ա��촺�����Ţ���ǡѺ���촷����
					)
				{
					printf("Select Card %d is Three Card\n",i+1);
					np=1;
				}
			}
			
			
			//TC 2
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
					printf("Select Card %d is Three Card\n",i+1);
					np=1;
				}
			}
			
			
			
			//TC 3
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
					printf("Select Card %d is Three Card\n",i+1);
					np=1;
				}
			}	
		}
		
		//Two Pair
		if(np!=1)
		{
			//TP 1
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
					printf("Select Card %d is Two Pair\n",i+1);
					np=1;
				}
			}
			
			//TP 2
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
					printf("Select Card %d is Two Pair\n",i+1);
					np=1;
				}
			}
			
			
			//TP 3
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
					printf("Select Card %d is Two Pair\n",i+1);
					np=1;
				}
			}
		}
		
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
					printf("Select Card %d is One Pair\n",i+1);
					np=1;
				}
			}
		}
		
		//Mini Straight
		if(np!=1)
		{
			//MS 1
			for(i=0;i<4;i++)
			{
				if	(
						(a[1]==(a[2]-1)) // 5 6 ? ?
						&&
						((h[i+1]==a[1]-1)||(h[i+1]==a[1]+1)) // 4|7
					)
				{
					printf("Select Card %d is Mini Straight\n",i+1);
					np=1;
				}
			}
			
			
			//MS 2
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
					printf("Select Card %d is Mini Straight\n",i+1);
					np=1;
				}
			}
			
			//MS 3
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
					printf("Select Card %d is Mini Straight\n",i+1);
					np=1;
				}
			}	
			
			//MS 4
			for(i=0;i<4;i++)
			{
				if	(
						(a[1]==(a[2]-2)) // 4 6 ? ?
						&&
						(h[i+1]==(a[1]+1)) // 5
					)
				{
					printf("Select Card %d is Mini Straight\n",i+1);
					np=1;
				}
			}
			
			//MS 5
			for(i=0;i<4;i++)
			{
				if	(
						(a[2]==(a[3]-2)) // ? 4 6 ?
						&&
						(h[i+1]==(a[2]+1)) // 5
					)
				{
					printf("Select Card %d is Mini Straight\n",i+1);
					np=1;
				}
			}
			
			//MS 6
			for(i=0;i<4;i++)
			{
				if	(
						(a[3]==(a[4]-2)) // ? ? 4 6
						&&
						(h[i+1]==(a[3]+1)) // 5
					)
				{
					printf("Select Card %d is Mini Straight\n",i+1);
					np=1;
				}
			}
			
			
			//MS 7
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
					printf("Select Card %d is Mini Straight\n",i+1);
					np=1;
				}
			}
		}
		
		//��������
		//Random Card
		r = rand() % 4 + 1;
		printf("Select Card %d is Random\n",r);
		
		printf("----------------------------------------------------------\n");
		printf("\n");
		
	}//end 4 card patten
	
	
	//��äӹǹ���ٻẺ���� 4 �
	//3 Card patten
	else if(p==3)
	{
		printf("\n---------- 3 Card Patten ----------\n\n");
		
		//�����͡�� Straight Flush
		//Straight++
		//STF 1
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
				printf("Select Card %d \n",i+1);
				np=1;
			}
		}
		
		//��� Straight 1
		//ST 1
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
					printf("Select Card %d \n",i+1);
					np=1;
				}
			}
		
			//�����͡�� Straight Flush 2
			//STF 2
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
						printf("Select Card %d \n",i+1);
						np=1;
					}
				}
			}	
					
			
			//��� Straight 2
			//ST 2
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
						printf("Select Card %d \n",i+1);
						np=1;
					}
				}
			}	
			
			//�����͡�� Straight Flush 3
			//STF 3	
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
						printf("Select Card %d \n",i+1);
						np=1;
					}
				}
			}	
			
			//��� Straight 3
			//ST 3	
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
						printf("Select Card %d \n",i+1);
						np=1;
					}
				}
			}	
				
			//�����͡�� Straight Flush 4
			//STF 4	
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
						printf("Select Card %d \n",i+1);
						np=1;
					}
				}
			}	
			
			//��� Straight 4
			//ST 4	
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
						printf("Select Card %d \n",i+1);
						np=1;
					}
				}
			}	
			
			//�����͡�� Straight Flush 5
			//STF 5
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
						printf("Select Card %d \n",i+1);
						np=1;
					}
				}
			}	
			
			//��� Straight 5
			//ST 5
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
						printf("Select Card %d \n",i+1);
						np=1;
					}
				}
			}	
			
			//�����͡�� Straight Flush 6
			//STF 6	
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
						printf("Select Card %d \n",i+1);
						np=1;
					}
				}
			}	
			
			//��� Straight 6
			//ST 6	
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
					printf("Select Card %d \n",i+1);
					np=1;
				}
			}
		}	
		
		
		//�����͡�� Straight 1
		//��� Mini Straight
		//Straight Chance 1
		//MS
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
					printf("Select Card %d \n",i+1);
					np=1;
				}
			}
		}
		
		
		//�����͡�� Straight 2
		//��� Mini Straight
		//Straight Chance 2
		//MS
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
					printf("Select Card %d \n",i+1);
					np=1;
				}
			}
		}	
		
		//��������
		//Random Card
		r = rand() % 4 + 1;
		printf("Select Card %d is Random\n",r);
		
		printf("----------------------------------------------------------\n");
		printf("\n");
	
	
	}//end 3 card patten
	
	
	
	
	
	
		
	//2 Card patten
	else if(p==2)
	{
		printf("\n---------- 2 Card Patten ----------\n\n");
		
		printf("\n---------- No DataBase ----------\n\n");
		
		
		
		
		
		//
		
		
	
	
	
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
					printf("Select Card %d \n",i+1);
					np=1;
				}
			}
		}	
		
		//�����͡�� ST ���Ţ����͹�ѹ +|- 2
		//Straight Chance +|- 2
		if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	(
						(a[i+1]==(h[i+1]+2))||(a[i+1]==(h[i+1]-2))
					)
				{
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
					printf("Select Card %d \n",i+1);
					np=1;
				}
			}
		}	
		
		//�����͡�� ST ���Ţ����͹�ѹ +|- 3
		//Straight Chance +|- 3
		if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	(
						(a[i+1]==(h[i+1]+3))||(a[i+1]==(h[i+1]-32))
					)
				{
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
					printf("Select Card %d \n",i+1);
					np=1;
				}
			}
		}	
		
		//��������
		//Random Card
		r = rand() % 4 + 1;
		printf("Select Card %d is Random\n",r);
		
		printf("----------------------------------------------------------\n");
		printf("\n");
		
		
	
	}//end 1 card patten
	
	
	
	
	
	//0 Card patten
	else if(p==0)
	{
		printf("\n---------- 0 Card Patten ----------\n\n");
	
	
		//��������
		//Random Card
		r = rand() % 4 + 1;
		printf("Select Card %d is Random\n",r);
		
		printf("----------------------------------------------------------\n");
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
