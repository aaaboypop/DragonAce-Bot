#include <conio.h>
#include <stdio.h>
#include <Windows.h>
#include <winuser.h>
#include <iostream>
#include <stdlib.h>
#define textcolor(txt,back) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), back*16+txt)
#define resetcolor() SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15)
#define showr if(i==0){AAA = "1";}else if(i==1){AAA = "2";}else if(i==2){AAA = "3";}else if(i==3){AAA = "4";} HWND hwnd = GetDesktopWindow(); toClipboard(hwnd, AAA);
int i,eloop=0,r,p,a[5],ac[5],h[5],hc[5];

void toClipboard(HWND hwnd, const std::string &s);

int main()
{

using namespace std;
string AAA;

	printf("DA Process Core v0.1\n");
	printf("\n");
	
		printf("CodePattern = P A1 AC1 A2 AC2 A3 AC3 A4 AC4 H1 HC1 H2 HC2 H3 HC3 H4 HC4\n");
		printf("P = Pattern\nA = Number of Card in Stage\nAC = Color of Card in Stage\nH = Number of Card in Hand\nHC = Color of Card in Hand\n");
		textcolor(12,0 );
		printf("* Color Red = 1\n"); // 1 ธาตุไฟ
		textcolor(11,0 );
		printf("* Color Blue = 2\n"); // 2 ธาตุน้ำ
		textcolor(10,0 );
		printf("* Color Green = 3\n"); // 3 ธาตุป่า
		resetcolor();
		
	printf("\n");
	
while(eloop<1)
{
	int f=0,np=0;
	//ตัวแปร f หมายถึงสีเหมือนกัน (Flush)
	//f mean Flush Check.
	
	//ตัวแปร np หมายถึงค้นหารูปแบบนั้นๆ ได้สำเร็จแล้ว
	//np mean some patten has success.
	
	//รอการป้อนรูปแบบการ์ด
	//wait to type card patten.
	
	/*
	printf("DA Process Core v0.1\n");
	printf("\n");
	
		printf("CodePattern = P A AC1 A2 AC2 A3 AC3 A4 AC4 H1 HC1 H2 HC2 H3 HC3 H4 HC4\n");
		printf("P = Pattern [0=First <-> 4=Last]\nA = Number of Card in Stage [00 - 13]\nAC = Color of Card in Stage [1-3]\nH = Number of Card in Hand [00-13]\nHC = Color of Card in Hand [1-3]\n");
		textcolor(12,0 );
		printf("* Color Red = 1\n"); // 1 ธาตุไฟ
		textcolor(11,0 );
		printf("* Color Blue = 2\n"); // 2 ธาตุน้ำ
		textcolor(10,0 );
		printf("* Color Green = 3\n"); // 3 ธาตุป่า
		resetcolor();
		*/
		
	printf("\n");
	printf("EnterCode = ");
	
		//ตัวแปร a หมายถึงการ์ดที่ลงแล้ว
	//ตัวแปร ac หมายถึงสีของการ์ดที่ลงแล้ว
	//ตัวแปร h หมายถึงการ์ดบนมือ
	//ตัวแปร hc หมายถึงสีของการ์ดบนมือ
	//สร้างตัวแปรประเภทอาเรย์ชื่อ a, ac, h, hc จำนวน 5 (0-4) 
	long double e;
	scanf("%1d%2d%1d%2d%1d%2d%1d%2d%1d%2d%1d%2d%1d%2d%1d%2d%1d",&p,&a[1],&ac[1],&a[2],&ac[2],&a[3],&ac[3],&a[4],&ac[4],&h[1],&hc[1],&h[2],&hc[2],&h[3],&hc[3],&h[4],&hc[4]);
	
	/*
	scanf("%d",&p); //เก็บรูปแบบการ์ดไว้ในตัวแปร p
	if(p!=0&&p!=1&&p!=2&&p!=3&&p!=4)
	{
	printf("\n\nError\n\n");
	continue;
	}
	
	printf("\n");
	//การรับข้อมูลและทำซ้ำของการ์ดที่ลงแล้ว
	//Loop Resive Data
	for(i=0;i<p;i++) //ทำซ้ำตามจำนวนค่า p ที่ใส่ (รูปแบบการ์ด หรือจำนวนการ์ดที่ลงแล้ว)
	{
		printf("Enter Number of Card %d = ",i+1);
		scanf("%d",&a[i+1]);
		if(a[i+1]<1||a[i+1]>13)
		{printf("\n\nError\n\n"); break;}
		
		printf("Enter Card %d Color = ",i+1);
		scanf("%d",&ac[i+1]);
		if(ac[i+1]<1||ac[i+1]>3)
		{printf("\n\nError\n\n"); break;}
		printf("\n");
	}
	
		printf("\n");
		printf("\n");
		printf("Enter Card on hand\n");
	
	//การรับข้อมูลและทำซ้ำของการ์ดบนมือ
	//Loop Resive Data Card on hand
	for(i=0;i<4;i++)
	{
		printf("Enter Number of Card %d = ",i+1);
		scanf("%d",&h[i+1]);
		if(h[i+1]<1||h[i+1]>13)
		{printf("\n\nError\n\n"); break;}
		
		printf("Enter Card %d Color = ",i+1);
		scanf("%d",&hc[i+1]);
		if(hc[i+1]<1||hc[i+1]>3)
		{printf("\n\nError\n\n"); break;}
		printf("\n");
	}
	*/
	

	//ตรวจสอบการ Flush ของการ์ดที่ลงแล้ว (รูปแบบ 4 ใบ)
	//Flush Check 4 Card patten
	if(p==4)
	{
		//ถ้าสีของการ์ดใบที่ 1 = 2 และ 2 = 3 และ 3 = 4 (ถ้าการ์ดทุกใบที่ลงแล้วมีสีเดียวกัน)
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
	
	//ตัวสอบการ Flush ของการ์ดที่ลงแล้ว (รูปแบบ 3 ใบ)
	//Flush Check 3 Card patten
	else if(p==3)
	{
		//ถ้าสีของการ์ดใบที่ 1 = 2 และ 2 = 3 (ถ้าการ์ดทุกใบที่ลงแล้วมีสีเดียวกัน)
		if	(
				(ac[1]==ac[2])
				&&
				(ac[2]==ac[3])
			)
		{
			f=1;
		}
	}
	
	//ตัวสอบการ Flush ของการ์ดที่ลงแล้ว (รูปแบบ 2 ใบ)
	//Flush Check 2 Card patten
	else if(p==2)
	{
		//ถ้าสีของการ์ดใบที่ 1 = 2 (ถ้าการ์ดทุกใบที่ลงแล้วมีสีเดียวกัน)
		if	(
				(ac[1]==ac[2])
			)
		{
			f=1;
		}
	}
	
	else
	{
		f=0;
	}
		
	
	
	
	
	
	//การคำนวนหารูปแบบการ์ด 4 ใบ
	//4 Card patten
	if(p==4)
	{
		//แสดงรูปแบบการคำนวน
		printf("\n---------- 4 Card Patten ----------\n\n");
		
		//การ Royal Straight Flush
		//Royal Straight Flush (1)
		for(i=0;i<4;i++)
		{
			if	(
					(f==1) //พบการ Flush
					&&
					(
						(
							(a[1]==11)&&(a[2]==12)&&(a[3]==13)&&(a[4]==1) //พบ J Q K A
						)
						&&
						(h[i+1]==10) //การ์ดบนมือคือ 10
						&&
						(hc[i+1]==ac[1]) //การ์ดบนมือ สีเดียวกับการ์ดที่ลงแล้ว
					)
				)
			{
				showr
				printf("Select Card %d is Royal Straight Flush\n",i+1);
				np=1; break;
			}
		}
		
		//Royal Straight Flush (2)
		for(i=0;i<4;i++)
		{
			if	(
					(f==1) //พบการ Flush
					&&
					(
						(
							(a[1]==10)&&(a[2]==12)&&(a[3]==13)&&(a[4]==1) //พบ 10 Q K A
						)
						&&
						(h[i+1]==11) //การ์ดบนมือคือ J
						&&
						(hc[i+1]==ac[1]) //การ์ดบนมือ สีเดียวกับการ์ดที่ลงแล้ว
					)
				)
			{
				showr
				printf("Select Card %d is Royal Straight Flush\n",i+1);
				np=1; break;
			}
		}
		
		//Royal Straight Flush (3)
		for(i=0;i<4;i++)
		{
			if	(
					(f==1) //พบการ Flush
					&&
					(
						(
							(a[1]==10)&&(a[2]==11)&&(a[3]==13)&&(a[4]==1) //พบ 10 J K A
						)
						&&
						(h[i+1]==12) //การ์ดบนมือคือ Q
						&&
						(hc[i+1]==ac[1]) //การ์ดบนมือ สีเดียวกับการ์ดที่ลงแล้ว
					)
				)
			{
				showr
				printf("Select Card %d is Royal Straight Flush\n",i+1);
				np=1; break;
			}
		}
		
		//Royal Straight Flush (4)
		for(i=0;i<4;i++)
		{
			if	(
					(f==1) //พบการ Flush
					&&
					(
						(
							(a[1]==10)&&(a[2]==11)&&(a[3]==12)&&(a[4]==1) //พบ 10 J Q A
						)
						&&
						(h[i+1]==13) //การ์ดบนมือคือ K
						&&
						(hc[i+1]==ac[1]) //การ์ดบนมือ สีเดียวกับการ์ดที่ลงแล้ว
					)
				)
			{
				showr
				printf("Select Card %d is Royal Straight Flush\n",i+1);
				np=1; break;
			}
		}
		
		//Royal Straight Flush (5)
		for(i=0;i<4;i++)
		{
			if	(
					(f==1) //พบการ Flush
					&&
					(
						(
							(a[1]==10)&&(a[2]==11)&&(a[3]==12)&&(a[4]==13) //พบ 10 J Q K
						)
						&&
						(h[i+1]==1) //การ์ดบนมือคือ A
						&&
						(hc[i+1]==ac[1]) //การ์ดบนมือ สีเดียวกับการ์ดที่ลงแล้ว
					)
				)
			{
				showr
				printf("Select Card %d is Royal Straight Flush\n",i+1);
				np=1; break;
			}
		}
		
		//การ Lucky Seven Flush
		//Lucky Seven Flush
		if(np!=1)
		{
			for(i=0;i<4;i++)
			{
				if	(
						(f==1) //พบการ Flush
						&&
						(
							(
								(a[1]==7)&&(a[2]==7)&&(a[3]==7)&&(a[4]==7) //พบ 7 7 7 7
							)
							&&
							(h[i+1]==7) //การ์ดบนมือคือ 7
							&&
							(hc[i+1]==ac[1]) //การ์ดบนมือ สีเดียวกับการ์ดที่ลงแล้ว
						)
					)
				{
					showr
					printf("Select Card %d is Lucky Seven Flush\n",i+1);
					np=1; break;
				}
			}
		}
		
		//การ Lucky Seven
		//Lucky Seven
		if(np!=1)
		{
			for(i=0;i<4;i++)
			{
				if	(
						(
							(a[1]==7)&&(a[2]==7)&&(a[3]==7)&&(a[4]==7) //พบ 7 7 7 7
						)
						&&
						(h[i+1]==7)//การ์ดบนมือคือ 7
					)
				{
					showr
					printf("Select Card %d is Lucky Seven \n",i+1);
					np=1; break;
				}
			}
		}
		
		//การ Five Flush
		//Five Flush
		if(np!=1)
		{
			for(i=0;i<4;i++)
			{
				if	(
						(f==1) //พบการ Flush
						&&
						(
							(
								(a[1]==a[2])&&(a[2]==a[3])&&(a[3]==a[4]) //พบ การ์ดซ้ำ 4 ใบ
							)
							&&
							(h[i+1]==a[1]) //การ์ดบนมือเลขเดียวกับการ์ดที่ลงแล้ว
							&&
							(hc[i+1]==ac[1])  //การ์ดบนมือ สีเดียวกับการ์ดที่ลงแล้ว
						)
					)
				{
					showr
					printf("Select Card %d is Five Flush\n",i+1);
					np=1; break;
				}
			}
		}
		
		//การ Five Card
		//Five Card
		if(np!=1)
		{
			for(i=0;i<4;i++)
			{
				if	(
						(
							(a[1]==a[2])&&(a[2]==a[3])&&(a[3]==a[4]) //พบ การ์ดซ้ำ 4 ใบ
						)
						&&
						(h[i+1]==a[1]) //การ์ดบนมือเลขเดียวกับการ์ดที่ลงแล้ว
					)
				{
					showr
					printf("Select Card %d is Five Card\n",i+1);
					np=1; break;
				}
			}
		}
		
		//การ House Flush
		//House Flush
		if(np!=1)
		{
			//House Flush (1)
			for(i=0;i<4;i++)
			{
				if	(
						(f==1) //พบการ Flush
						&&
						(
							(
								(a[1]==a[2])&&(a[3]==a[4]) //พบ การ์ดซ้ำ 2 ใบ จำนวน 2 คู่
							)
							&&
							(
								(h[i+1]==a[1])||(h[i+1]==a[3]) //การ์ดบนมือเลขเดียวกับการ์ดที่ซ้ำกันคู่ใดคู่หนึ่ง
							)
							&&
							(hc[i+1]==ac[1]) //การ์ดบนมือ สีเดียวกับการ์ดที่ลงแล้ว
						)
					)
				{
					showr
					printf("Select Card %d is House Flush\n",i+1);
					np=1; break;
				}
			}
		
		
			//House Flush (2)
			for(i=0;i<4;i++)
			{
				if	(
						(f==1) //พบการ Flush
						&&
						(
							(
								(a[1]==a[2])&&(a[2]==a[3]) //พบ การ์ดซ้ำ 4 ใบ (ลำดับการ์ดที่ 1,2,3)
							)
							&&
							(h[i+1]==a[4]) //การ์ดบนมือเลขเดียวกับการ์ดที่ลงแล้ว(ลำดับที่4)
							&&
							(hc[i+1]==ac[1]) //การ์ดบนมือ สีเดียวกับการ์ดที่ลงแล้ว
						)
					)
				{
					showr
					printf("Select Card %d is House Flush\n",i+1);
					np=1; break;
				}
			}
		
		
			//House Flush(3)
			for(i=0;i<4;i++)
			{
				if	(
						(f==1) //พบการ Flush
						&&
						(
							(
								(a[2]==a[3])&&(a[3]==a[4]) //พบ การ์ดซ้ำ 4 ใบ (ลำดับการ์ดที่ 2,3,4)
							)
							&&
							(h[i+1]==a[1]) //การ์ดบนมือเลขเดียวกับการ์ดที่ลงแล้ว(ลำดับที่1)
							&&
							(hc[i+1]==ac[1]) //การ์ดบนมือ สีเดียวกับการ์ดที่ลงแล้ว
						)
					)
				{
					showr
					printf("Select Card %d is House Flush\n",i+1);
					np=1; break;
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
						(f==1) //พบการ Flush
						&&
						(
							(
								(a[1]==(a[2]-1))&&(a[2]==(a[3]-1))&&(a[3]==(a[4]-1)) //พบ การ์ดเรียง 4 ใบ
							)
							&&
							(
								(h[i+1]==(a[1]-1))||(h[i+1]==(a[4]+1)) //การ์ดบนมือคือ เลขของการ์ดที่ลงแล้วมีจำนวนน้อยที่สุด -1 หรือ มีจำนวนมากที่สุด +1
							)
							&&
							(hc[i+1]==ac[1]) //การ์ดบนมือ สีเดียวกับการ์ดที่ลงแล้ว
						)
					)
				{
					showr
					printf("Select Card %d is Straight Flush\n",i+1);
					np=1; break;
				}
			}
				
			
			//Straight Flush(2)
			for(i=0;i<4;i++)
			{
				if	(
						(f==1) //พบการ Flush
						&&
						(
							(
								(a[1]==(a[2]-2))&&(a[2]==(a[3]-1))&&(a[3]==(a[4]-1)) // 4 6 7 8
							)
							&&
							(h[i+1]==a[1]+1) // 5
							&&
							(hc[i+1]==ac[1]) //การ์ดบนมือ สีเดียวกับการ์ดที่ลงแล้ว
						)
					)
				{
					showr
					printf("Select Card %d is Straight Flush\n",i+1);
					np=1; break;
				}
			}
			
			//Straight Flush (3)
			for(i=0;i<4;i++)
			{
				if	(
						(f==1) //พบการ Flush
						&&
						(
							(
								(a[1]==(a[2]-1))&&(a[2]==(a[3]-2))&&(a[3]==(a[4]-1)) // 4 5 7 8
							)
							&&
							(h[i+1]==1) // 6
							&&
							(hc[i+1]==ac[1]) //การ์ดบนมือ สีเดียวกับการ์ดที่ลงแล้ว
						)
					)
				{
					showr
					printf("Select Card %d is Straight Flush\n",i+1);
					np=1; break;
				}
			}
			
			//Straight Flush (4)
			for(i=0;i<4;i++)
			{
				if	(
						(f==1) //พบการ Flush
						&&
						(
							(
								(a[1]==(a[2]-1))&&(a[2]==(a[3]-1))&&(a[3]==(a[4]-2)) //4 5 6 8
							)
							&&
							(h[i+1]==1) // 7
							&&
							(hc[i+1]==ac[1]) //การ์ดบนมือ สีเดียวกับการ์ดที่ลงแล้ว
						)
					)
				{
					showr
					printf("Select Card %d is Straight Flush\n",i+1);
					np=1; break;
				}
			}
			
		}
		
		//การ Four Card
		//Four Card (1)
		if(np!=1)
		{
			for(i=0;i<4;i++)
			{
				if	(
						(
							(a[1]==a[2])&&(a[2]==a[3]) //พบ การ์ดซ้ำ 3 ใบ (ลำดับที่ 1,2,3)
						)
						&&
						(h[i+1]==a[1]) //การ์ดบนมือเลขเดียวกับการ์ดที่ลงแล้ว
					)
				{
					showr
					printf("Select Card %d is Four Card\n",i+1);
					np=1; break;
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
							(a[2]==a[3])&&(a[3]==a[4]) //พบ การ์ดซ้ำ 3 ใบ (ลำดับที่ 2,3,4)
						)
						&&
						(h[i+1]==a[1]) //การ์ดบนมือเลขเดียวกับการ์ดที่ลงแล้ว
					)
				{
					showr
					printf("Select Card %d is Four Card\n",i+1);
					np=1; break;
				}
			}	
		}
		
		//การ Full House
		//Full House
		if(np!=1)
		{
			//Full House (1)
			for(i=0;i<4;i++)
			{
				if	(
						(
							(a[1]==a[2])&&(a[3]==a[4]) //พบ การ์ดซ้ำ 2 ใบ จำนวน 2 คู่
						)
						&&
						(
							(h[i+1]==a[1])||(h[i+1]==a[3]) //การ์ดบนมือเลขเดียวกับการ์ดที่ซ้ำกันคู่ใดคู่หนึ่ง
						)
					)
				{
					showr
					printf("Select Card %d is Full House\n",i+1);
					np=1; break;
				}
			}
		
		
			//Full House (2)
			for(i=0;i<4;i++)
			{
				if	(
						(
							(a[1]==a[2])&&(a[2]==a[3]) //พบ การ์ดซ้ำ 4 ใบ (ลำดับการ์ดที่ 1,2,3)
						)
						&&
						(h[i+1]==a[4]) //การ์ดบนมือเลขเดียวกับการ์ดที่ลงแล้ว(ลำดับที่4)
					)
				{
					showr
					printf("Select Card %d is Full House\n",i+1);
					np=1; break;
				}
			}
			
			
			//Full House (3)
			for(i=0;i<4;i++)
			{
				if	(
						(
							(a[2]==a[3])&&(a[3]==a[4]) //พบ การ์ดซ้ำ 4 ใบ (ลำดับการ์ดที่ 2,3,4)
						)
						&&
						(h[i+1]==a[1]) //การ์ดบนมือเลขเดียวกับการ์ดที่ลงแล้ว(ลำดับที่1)
					)
				{
					showr
					printf("Select Card %d is Full House\n",i+1);
					np=1; break;
				}
			}
		}
		
		int st=0;
		
		//การ Straight
		//Straight
		if(np!=1)
		{
			//Straight (1)
			for(i=0;i<4;i++)
			{
			if	(
					(
						(a[1]==(a[2]-1))&&(a[2]==(a[3]-1))&&(a[3]==(a[4]-1)) //พบ การ์ดเรียง 4 ใบ
					)
					&&
					((h[i+1]==(a[1]-1))||(h[i+1]==(a[1]))||(h[i+1]==(a[1]+1))||(h[i+1]==(a[1]+2))||(h[i+1]==(a[1]+3))||(h[i+1]==(a[1]+4)))
					//การ์ดบนมือมีเลขเท่ากับการ์ดที่ลงไปแล้วใบใดใบหนึ่ง +|- 1
				)
				{
					showr
					printf("Select Card %d is Straight\n",i+1);
					st=1;
					np=1; break;
				}
			}
			
			
			if(st!=1)
			{
			
				//Straight (2)
					
			
				for(i=0;i<4;i++)
				{
					if	(
							(
								(a[1]==(a[2]-1))&&(a[2]==(a[3]-1)) //พบ การ์ดเรียง 3 ใบ (ลำดับการ์ดที่ 1,2,3)
							)
							&&
							((h[i+1]==(a[1]-1))||(h[i+1]==(a[3]+1))) //มีการ์ดบนมือ การ์ดที่ลงแล้ว น้อยที่สุด -1 หรือ มากที่สุด +1
						)
					{
						showr
						printf("Select Card %d is Straight\n",i+1);
						np=1; break;
					}
				}
				
				
				//Straight (3)
					
			
				for(i=0;i<4;i++)
				{
					if	(
							(
								(a[2]==(a[3]-1))&&(a[3]==(a[4]-1))  //พบ การ์ดเรียง 3 ใบ (ลำดับการ์ดที่ 2,3,4)
							)
							&&
							((h[i+1]==(a[2]-1))||(h[i+1]==(a[2]+3))) //มีการ์ดบนมือ การ์ดที่ลงแล้ว น้อยที่สุด -1 หรือ มากที่สุด +1 
						)
					{
						showr
						printf("Select Card %d is Straight\n",i+1);
						np=1; break;
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
						showr
						printf("Select Card %d is Straight\n",i+1);
						np=1; break;
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
						showr
						printf("Select Card %d is Straight\n",i+1);
						np=1; break;
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
						showr
						printf("Select Card %d is Straight\n",i+1);
						np=1; break;
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
						showr
						printf("Select Card %d is Straight\n",i+1);
						np=1; break;
					}
				}	
			}
		}
		
		//การ Flush
		//Flush
		if(np!=1)
		{
			if	(f==1) //พบการ Flush
			{	
				for(i=0;i<4;i++)
				{
					if	(hc[i+1]==ac[1]) //มีการ์ดบนมือ สีเดียวกับการ์ดที่ลงแล้ว
					{
						showr
						printf("Select Card %d is Flush\n",i+1);
						np=1; break;
					}
				}	
			}
		}
		
		//การ Three Seven
		//Three Seven
		if(np!=1)
		{
			//Three Seven (1)
			for(i=0;i<4;i++)
			{
				if	(
						(
							(a[1]==7)&&(a[2]==7) //พบการ์ด 7 7 (ตำแหน่งที่ 1,2)
						)
						&&
						(h[i+1]==7) // มีการ์ด 7
					)
				{
					showr
						printf("Select Card %d is Three Seven\n",i+1);
					np=1; break;
				}
			}
			
			//Three Seven (2)
			for(i=0;i<4;i++)
			{
				if	(
						(
							(a[2]==7)&&(a[3]==7) //พบการ์ด 7 7 (ตำแหน่งที่ 2,3)
						)
						&&
						(h[i+1]==7) // มีการ์ด 7
					)
				{	
					showr
						printf("Select Card %d is Three Seven\n",i+1);
					np=1; break;
				}
			}	
			
			//Three Seven (3)
			for(i=0;i<4;i++)
			{
				if	(
						(
							(a[3]==7)&&(a[4]==7)//พบการ์ด 7 7 (ตำแหน่งที่ 3,4)
						)
						&&
						(h[i+1]==7) // มีการ์ด 7
					)
				{
					showr
						printf("Select Card %d is Three Seven\n",i+1);
					np=1; break;
				}
			}
		}
		
		//การ Three Card
		//Three Card
		if(np!=1)
		{
			//Three Card (1)
			for(i=0;i<4;i++)
			{
				if	(
						(a[1]==a[2]) //พบการ์ดซ้ำกัน 2 ใบ (ตำแหน่งที่ 1,2)
						&&
						(h[i+1]==a[1]) //มีการ์ดบนมือเลขเดียวกับการ์ดที่ซ้ำ
					)
				{
					showr
					printf("Select Card %d is Three Card\n",i+1);
					np=1; break;
				}
			}
			
			
			//Three Card (2)
			for(i=0;i<4;i++)
			{
				if	(
						(
							(a[2]==a[3]) //พบการ์ดซ้ำกัน 2 ใบ (ตำแหน่งที่ 2,3)
						)
						&&
						(h[i+1]==a[2]) //มีการ์ดบนมือเลขเดียวกับการ์ดที่ซ้ำ
					)
				{
					showr
					printf("Select Card %d is Three Card\n",i+1);
					np=1; break;
				}
			}
			
			
			
			//Three Card (3)
			for(i=0;i<4;i++)
			{
				if	(
						(
							(a[3]==a[4]) //พบการ์ดซ้ำกัน 2 ใบ (ตำแหน่งที่ 3,4)
						)
						&&
						(h[i+1]==a[3]) //มีการ์ดบนมือเลขเดียวกับการ์ดที่ซ้ำ
					)
				{
					showr
					printf("Select Card %d is Three Card\n",i+1);
					np=1; break;
				}
			}	
		}
		
		//การ Two Pair
		//Two Pair
		if(np!=1)
		{
			//Two Pair (1)
			for(i=0;i<4;i++)
			{
				if	(
						(a[1]==a[2]) //พบการ์ดซ้ำกัน 2 ใบ (ตำแหน่งที่ 1,2)
						&&
						(
							(h[i+1]==a[3])||(h[i+1]==a[4]) //มีการ์ดบนมือเลขเดียวกับการ์ดที่ไม่ซ้ำ (ตำแหน่งที่ 3,4)
						)
					)
				{
					showr
					printf("Select Card %d is Two Pair\n",i+1);
					np=1; break;
				}
			}
			
			//Two Pair (2)
			for(i=0;i<4;i++)
			{
				if	(
						(a[2]==a[3]) //พบการ์ดซ้ำกัน 2 ใบ (ตำแหน่งที่ 2,3)
						&&
						(
							(h[i+1]==a[1])||(h[i+1]==a[4]) //มีการ์ดบนมือเลขเดียวกับการ์ดที่ไม่ซ้ำ (ตำแหน่งที่ 1,4)
						)
					)
				{
					showr
					printf("Select Card %d is Two Pair\n",i+1);
					np=1; break;
				}
			}
			
			
			//Two Pair (3)
			for(i=0;i<4;i++)
			{
				if	(
						(a[3]==a[4]) //พบการ์ดซ้ำกัน 2 ใบ (ตำแหน่งที่ 3,4)
						&&
						(
							(h[i+1]==a[1])||(h[i+1]==a[2]) //มีการ์ดบนมือเลขเดียวกับการ์ดที่ไม่ซ้ำ (ตำแหน่งที่ 1,2)
						)
					)
				{
					showr
					printf("Select Card %d is Two Pair\n",i+1);
					np=1; break;
				}
			}
		}
		
		//การ One Pair
		//One Pair
		if(np!=1)
		{
			for(i=0;i<4;i++)
			{
				if	(
						(h[i+1]==a[1]) //มีการ์ดบนมือเลขเดียวกับการ์ดที่ลงใบใดใบหนึ่ง (ตำแหน่งที่ 1)
						||
						(h[i+1]==a[2]) //มีการ์ดบนมือเลขเดียวกับการ์ดที่ลงใบใดใบหนึ่ง (ตำแหน่งที่ 2)
						||
						(h[i+1]==a[3]) //มีการ์ดบนมือเลขเดียวกับการ์ดที่ลงใบใดใบหนึ่ง (ตำแหน่งที่ 3)
						||
						(h[i+1]==a[4]) //มีการ์ดบนมือเลขเดียวกับการ์ดที่ลงใบใดใบหนึ่ง (ตำแหน่งที่ 4)
					)
				{
					showr
					printf("Select Card %d is One Pair\n",i+1);
					np=1; break;
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
						((h[i+1]==a[1]-1)||(h[i+1]==a[2]+1)) // 4|7
					)
				{
					showr
					printf("Select Card %d is Mini Straight\n",i+1);
					np=1; break;
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
						((h[i+1]==a[2]-1)||(h[i+1]==a[3]+1)) // 4|7
					)
				{
					showr
					printf("Select Card %d is Mini Straight\n",i+1);
					np=1; break;
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
						((h[i+1]==a[3]-1)||(h[i+1]==a[4]+1)) // 4|7
					)
				{
					showr
					printf("Select Card %d is Mini Straight\n",i+1);
					np=1; break;
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
					showr
					printf("Select Card %d is Mini Straight\n",i+1);
					np=1; break;
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
					showr
					printf("Select Card %d is Mini Straight\n",i+1);
					np=1; break;
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
					showr
					printf("Select Card %d is Mini Straight\n",i+1);
					np=1; break;
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
					showr
					printf("Select Card %d is Mini Straight\n",i+1);
					np=1; break;
				}
			}
		}
		
		
		//สุ่มการ์ด
		//Random Card
		if(np!=1)
		{
		r = rand() % 4 + 1;
		showr
		printf("Select Card %d is Random\n",r);
		}
		
		printf("\n");
		
	}//end 4 card patten
	
	
	//การคำนวนหารูปแบบการ์ด 4 ใบ
	//3 Card patten
	else if(p==3)
	{
		printf("\n---------- 3 Card Patten ----------\n\n");
		
		//เพิ่มโอกาส Straight Flush
		//Straight Flush Chance
		for(i=0;i<4;i++)
		{
			if	(
					(f==1) //พบการ Flush
					&&
					(
						(
							(a[1]==(a[2]-1))&&(a[2]==(a[3]-1)) // 2 3 4 , พบการ์ดเรียง 3 ใบ
						)
						&&
						(
							(h[i+1]==(a[1]-1))||(h[i+1]==(a[3]+1)) // 1 | 5
						)
						&&
						(hc[i+1]==ac[1]) //การ์ดบนมือ สีเดียวกับการ์ดที่ลงแล้ว
					)
				)
			{
				showr
				printf("Select Card %d \n",i+1);
				np=1; break;
			}
		}
		
		//เพิ่มโอกาส Straight 1
		//Straight Chance (1)
		if(np!=1)
		{
			for(i=0;i<4;i++)
			{
				if	(
						
						(
							(a[1]==(a[2]-1))&&(a[2]==(a[3]-1)) // 2 3 4 , พบการ์ดเรียง 3 ใบ
						)
						&&
						(
							(h[i+1]==(a[1]-1))||(h[i+1]==(a[3]+1)) // 1 | 5
						)
					)
				{
					showr
					printf("Select Card %d \n",i+1);
					np=1; break;
				}
			}
		
			//เพิ่มโอกาส Straight Flush 2
			//Straight Flush Chance (2)
			if(np!=1)
			{
				for(i=0;i<4;i++)
				{
					if	(
							(f==1) //พบการ Flush
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
						showr
						printf("Select Card %d \n",i+1);
						np=1; break;
					}
				}
			}	
					
			
			//การ Straight 2
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
						showr
						printf("Select Card %d \n",i+1);
						np=1; break;
					}
				}
			}	
			
			//เพิ่มโอกาส Straight Flush 3
			//Straight Flush Chance (4)
			if(np!=1)
			{
				for(i=0;i<4;i++)
				{
					if	(
							(f==1) //พบการ Flush
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
						showr
						printf("Select Card %d \n",i+1);
						np=1; break;
					}
				}
			}	
			
			//เพิ่มโอกาส Straight 3
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
						showr
						printf("Select Card %d \n",i+1);
						np=1; break;
					}
				}
			}	
				
			//เพิ่มโอกาส Straight Flush 4
			//Straight Flush Chance (4)
			if(np!=1)
			{	
				for	(i=0;i<4;i++) //พบการ Flush
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
						showr
						printf("Select Card %d \n",i+1);
						np=1; break;
					}
				}
			}	
			
			//เพิ่มโอกาส Straight 4
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
						showr
						printf("Select Card %d \n",i+1);
						np=1; break;
					}
				}
			}	
			
			//เพิ่มโอกาส Straight Flush 5
			//Straight Flush Chance (5)
			if(np!=1)
			{	
				for(i=0;i<4;i++)
				{
					if	(
							(f==1) //พบการ Flush
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
						showr
						printf("Select Card %d \n",i+1);
						np=1; break;
					}
				}
			}	
			
			//เพิ่มโอกาส Straight 5
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
						showr
						printf("Select Card %d \n",i+1);
						np=1; break;
					}
				}
			}	
			
			//เพิ่มโอกาส Straight Flush 6
			//Straight Flush Chance (6)
			if(np!=1)
			{	
				for(i=0;i<4;i++)
				{
					if	(
							(f==1) //พบการ Flush
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
						showr
						printf("Select Card %d \n",i+1);
						np=1; break;
					}
				}
			}	
			
			//เพิ่มโอกาส Straight 6
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
						showr
						printf("Select Card %d \n",i+1);
						np=1; break;
					}
				}
			}
		}
		
		//เพิ่มโอกาส Five Flush , Lucky Seven Flush
		//การ Four Card
		//Five Flush , Seven Flush Chance
		//Four Card
		if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	(
						(f==1) //พบการ Flush
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
					showr
					printf("Select Card %d \n",i+1);
					np=1; break;
				}
			}
		}	
		
		
		//เพิ่มโอกาส Five Card , Lucky Seven
		//การ Four Card
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
					showr
					printf("Select Card %d \n",i+1);
					np=1; break;
				}
			}
		}	
		
		
		//เพิ่มโอกาส Straight 1
		//การ Mini Straight
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
					showr
					printf("Select Card %d \n",i+1);
					np=1; break;
				}
			}
		}
		
		
		//เพิ่มโอกาส Straight 2
		//การ Mini Straight
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
					showr
					printf("Select Card %d \n",i+1);
					np=1; break;
				}
			}
		}
	
		//เพิ่มโอกาส Straight 3
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
					showr
					printf("Select Card %d \n",i+1);
					np=1; break;
				}
			}
		}
		
			
		//เพิ่มโอกาส Straight 4
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
					showr
					printf("Select Card %d \n",i+1);
					np=1; break;
				}
			}
		}
		
		
		//เพิ่มโอกาส Four Card , House Flush 1
		//การ Three Card
		//Four Card Chance , House Flush 1
		//Three Card	
		if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	(
						
						(f==1) //พบการ Flush
						&&
						(
							(a[1]==a[2]) // 1 1 ?
						)
						&&
						(
							(h[i+1]==a[1]) // 1
						)
						&&
						(hc[i+1]==ac[1]) //การ์ดบนมือมีสีเดียวกับการ์ดที่ลงแล้ว
					)
				{
					showr
					printf("Select Card %d \n",i+1);
					np=1; break;
				}
			}
		}	
		
		
		//เพิ่มโอกาส Four Card , Full House 1
		//การ Three Card
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
					showr
					printf("Select Card %d \n",i+1);
					np=1; break;
				}
			}
		}	
		
		
		//เพิ่มโอกาส Four Card , House Flush 2
		//การ Three Card
		//Four Card , House Flush Chance 2
		//Three Card
		if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	(
						
						(f==1) //พบการ Flush
						&&
						(
							(a[2]==a[3]) // ? 2 2
						)
						&&
						(
							(h[i+1]==a[1]) // 2
						)
						&&
						(hc[i+1]==ac[1]) //การ์ดบนมือมีสีเดียวกับการ์ดที่ลงแล้ว
					)
				{
					showr
					printf("Select Card %d \n",i+1);
					np=1; break;
				}
			}
		}	
		
		//เพิ่มโอกาส Four Card , Full House 2
		//การ Three Card
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
					showr
					printf("Select Card %d \n",i+1);
					np=1; break;
				}
			}
		}	
		
		//เพิ่มโอกาส Three Card
		//การ Two Pair
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
					showr
					printf("Select Card %d \n",i+1);
					np=1; break;
				}
			}
		}	
		
		//สุ่มการ์ด
		//Random Card
		if(np!=1)
		{
		r = rand() % 4 + 1;
		showr
		printf("Select Card %d is Random\n",r);
		}
		
		
		printf("\n");
	
	
	}//end 3 card patten
	
	
	
	
	
	
		
	//2 Card patten
		else if(p==2)
	{
		printf("\n---------- 2 Card Patten ----------\n\n");
		
		int z=0;
	
		//เลขซ้ำ error 0-4
		for(z=0;z<5;z++)
		{
			// เลขซ้ำ &Flush
			if(np!=1)
			{	
				for(i=0;i<4;i++)
				{
					if	(
							
							(f==1) //พบการ Flush
							&&
							(
								(a[1]==a[2])
							)
							&&
							(
								(h[i+1]==a[1]+z)||(h[i+1]==a[1]-z)
							)
							&&
							(hc[i+1]==ac[1])//การ์ดบนมือมีสีเดียวกับการ์ดที่ลงแล้ว
						)
					{
						showr
						printf("Select Card %d \n",i+1);
						np=1; break;
					}
				}
			}	
		}
		
		for(z=0;z<5;z++)
		{
			// เลขซ้ำ
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
						showr
						printf("Select Card %d \n",i+1);
						np=1; break;
					}
				}
			}	
		}
	
	
		//---------------------------------------------------------------------------------
	
	
	
		//เลขติด error 1-2
		for(z=1;z<3;z++)
		{
			// เลขติด &Flush
			if(np!=1)
			{	
				for(i=0;i<4;i++)
				{
					if	(
							
							(f==1) //พบการ Flush
							&&
							(
								(a[1]==a[2]-1)	||	((a[1]==13)&&(a[2]==1))	||	((a[1]==1)&&(a[2]==13))	
							)
							&&
							(
								(h[i+1]==a[2]+z)||(h[i+1]==a[1]-z)
							)
							&&
							(hc[i+1]==ac[1])//การ์ดบนมือมีสีเดียวกับการ์ดที่ลงแล้ว
						)
					{
						showr
						printf("Select Card %d \n",i+1);
						np=1; break;
					}
				}
			}	
		}
		
		
		for(z=1;z<3;z++)
		{
			// เลขติด
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
						showr
						printf("Select Card %d \n",i+1);
						np=1; break;
					}
				}
			}	
		}
	
	
		//เลขติด error 0
		if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	(
					
						(f==1) //พบการ Flush
						&&
						(
							(a[1]==a[2]-1)	||	((a[1]==13)&&(a[2]==1))	||	((a[1]==1)&&(a[2]==13))	
						)
						&&
						(
							(h[i+1]==a[1])||(h[i+1]==a[2])
						)
						&&
						(hc[i+1]==ac[1])//การ์ดบนมือมีสีเดียวกับการ์ดที่ลงแล้ว
					)
				{
					showr
					printf("Select Card %d \n",i+1);
					np=1; break;
				}
			}
		}	
		
		
		// เลขติด
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
					showr
					printf("Select Card %d \n",i+1);
					np=1; break;
				}
			}
		}	
	
	
	
		//เลขติด error 3-4
		for(z=3;z<5;z++)
		{
			// เลขติด &Flush
			if(np!=1)
			{	
				for(i=0;i<4;i++)
				{
					if	(
							
							(f==1) //พบการ Flush
							&&
							(
								(a[1]==a[2]-1)	||	((a[1]==13)&&(a[2]==1))	||	((a[1]==1)&&(a[2]==13))	
							)
							&&
							(
								(h[i+1]==a[2]+z)||(h[i+1]==a[1]-z)
							)
							&&
							(hc[i+1]==ac[1])//การ์ดบนมือมีสีเดียวกับการ์ดที่ลงแล้ว
						)
					{
						showr
						printf("Select Card %d \n",i+1);
						np=1; break;
					}
				}
			}	
		}
		
		
		for(z=3;z<5;z++)
		{
			// เลขติด
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
						showr
						printf("Select Card %d \n",i+1);
						np=1; break;
					}
				}
			}	
		}
	
		//----------------------------------------------------------------------------------------------------------
		// a[1]+2 เลขห่าง +2
		//*** 4 <---1---> 6
	
		// *** 4 [5] 6
		// เพิ่มโอกาสการได้การ์ดระหว่างเลข +Flush
		if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	(
						
						(f==1) //พบการ Flush
						&&
						(
							(a[1]==a[2]-2)	||	((a[1]==12)&&(a[2]==1))	||	((a[1]==1)&&(a[2]==12))	
						)
						&&
						(
							(h[i+1]==a[1]+1)
						)
						&&
						(hc[i+1]==ac[1])//การ์ดบนมือมีสีเดียวกับการ์ดที่ลงแล้ว
					)
				{
					showr
					printf("Select Card %d \n",i+1);
					np=1; break;
				}
			}
		}	
	
		
		// เพิ่มโอกาสการได้การ์ดระหว่างเลข
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
					showr
					printf("Select Card %d \n",i+1);
					np=1; break;
				}
			}
		}	
	
	
		// *** [3] 4 6 [7]
		// เพิ่มโอกาสการได้การ์ด Straight +1 +3
		for(z=1;z<2;z++)
		{
			// เพิ่มโอกาสการได้การ์ด Straight +Flush
			if(np!=1)
			{	
				for(i=0;i<4;i++)
				{
					if	(
							
							(f==1) //พบการ Flush
							&&
							(
								(a[1]==a[2]-2)	||	((a[1]==12)&&(a[2]==1))	||	((a[1]==1)&&(a[2]==12))	
							)
							&&
							(
								(h[i+1]==a[2]+z)	||	(h[i+1]==a[1]-z)
							)
							&&
							(hc[i+1]==ac[1])//การ์ดบนมือมีสีเดียวกับการ์ดที่ลงแล้ว
						)
					{
						showr
						printf("Select Card %d \n",i+1);
						np=1; break;
					}
				}
			}	
		}
		
		
		for(z=1;z<2;z++)
		{
			// เพิ่มโอกาสการได้การ์ด Straight 
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
					showr
					printf("Select Card %d \n",i+1);
					np=1; break;
					}
				}
			}	
		}
	
	
	
		// เพิ่มโอกาสการได้การ์ด Straight +0 +2
		// เพิ่มโอกาสการได้การ์ด FullHouse
		// *** [4] 4 6 [6]
		for(z=0;z<1;z++)
		{
			// เพิ่มโอกาสการได้การ์ด Straight +Flush
			if(np!=1)
			{	
			for(i=0;i<4;i++)
				{
					if	(
						
							(f==1) //พบการ Flush
							&&
							(
								(a[1]==a[2]-2)	||	((a[1]==12)&&(a[2]==1))	||	((a[1]==1)&&(a[2]==12))	
							)
							&&
							(
								(h[i+1]==a[2]+z)	||	(h[i+1]==a[1]-z)
							)
							&&
							(hc[i+1]==ac[1])//การ์ดบนมือมีสีเดียวกับการ์ดที่ลงแล้ว
						)
					{
						showr
						printf("Select Card %d \n",i+1);
						np=1; break;
					}
				}
			}	
		}
		
		
		for(z=0;z<1;z++)
		{
			// เพิ่มโอกาสการได้การ์ด Straight 
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
						showr
						printf("Select Card %d \n",i+1);
						np=1; break;
					}
				}
			}	
		}
	
	
		// เพิ่มโอกาสการได้การ์ด Straight -2 +4 // [3]  5  7  [9]
		for(z=2;z<3;z++)
		{
			// เพิ่มโอกาสการได้การ์ด +Flush
			if(np!=1)
			{	
				for(i=0;i<4;i++)
				{
					if	(
							
							(f==1) //พบการ Flush
							&&
							(
								(a[1]==a[2]-2)	||	((a[1]==12)&&(a[2]==1))	||	((a[1]==1)&&(a[2]==12))	
							)
							&&
							(
								(h[i+1]==a[2]+z)	||	(h[i+1]==a[1]-z)
							)
							&&
							(hc[i+1]==ac[1])//การ์ดบนมือมีสีเดียวกับการ์ดที่ลงแล้ว
						)
					{
						showr
						printf("Select Card %d \n",i+1);
						np=1; break;
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
						showr
						printf("Select Card %d \n",i+1);
						np=1; break;
					}
				}
			}	
		}
	
	
		//  ----------------------------------------------------------------------------------------
		// รูปแบบ a[1]==a[2]-3 --การ์ดห่าง2 *** 4 <---2---> 7
	
	
		// เพิ่มโอกาสการได้การ์ดระหว่าง *** 4 [?] 7
		for(z=1;z<2;z++)
		{
			// เพิ่มโอกาสการได้การ์ดระหว่าง *** 4 [?] 7
			if(np!=1)
			{	
				for(i=0;i<4;i++)
				{
					if	(
						
							(f==1) //พบการ Flush
							&&
							(
								(a[1]==a[2]-3)	||	((a[1]==11)&&(a[2]==1))	||	((a[1]==1)&&(a[2]==11))	
							)
							&&
							(
								(h[i+1]==a[1]+z)	||	(h[i+1]==a[2]-z)
							)
							&&
							(hc[i+1]==ac[1])//การ์ดบนมือมีสีเดียวกับการ์ดที่ลงแล้ว
						)
					{
						showr
						printf("Select Card %d \n",i+1);
						np=1; break;
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
						showr
						printf("Select Card %d \n",i+1);
						np=1; break;
					}
				}
			}	
		}
	
	
	
	
		// เพิ่มโอกาสการได้การ์ด Straight + - 1
		// [3] 4 7 [8]
		for(z=1;z<2;z++)
		{
			// เพิ่มโอกาสการได้การ์ด Straight + - 1
			if(np!=1)
			{	
				for(i=0;i<4;i++)
				{
					if	(
							
							(f==1) //พบการ Flush
							&&
							(
								(a[1]==a[2]-3)	||	((a[1]==11)&&(a[2]==1))	||	((a[1]==1)&&(a[2]==11))	
							)
							&&
							(
								(h[i+1]==a[1]-z)	||	(h[i+1]==a[2]+z)
							)
							&&
							(hc[i+1]==ac[1])//การ์ดบนมือมีสีเดียวกับการ์ดที่ลงแล้ว
						)
					{
						showr
						printf("Select Card %d \n",i+1);
						np=1; break;
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
						showr
						printf("Select Card %d \n",i+1);
						np=1; break;
					}
				}
			}	
		}
	
	
	
	

		// เพิ่มโอกาสการได้การ์ด Straight + - 0
		// +FullHouse
		// [4] 4 7 [7]
		for(z=0;z<1;z++)
		{
			if(np!=1)
			{	
				for(i=0;i<4;i++)
				{
					if	(
						
							(f==1) //พบการ Flush
							&&
							(
								(a[1]==a[2]-3)	||	((a[1]==11)&&(a[2]==1))	||	((a[1]==1)&&(a[2]==11))	
							)
							&&
							(
								(h[i+1]==a[1]-z)	||	(h[i+1]==a[2]+z)
							)
							&&
							(hc[i+1]==ac[1])//การ์ดบนมือมีสีเดียวกับการ์ดที่ลงแล้ว
						)
					{
						showr
						printf("Select Card %d \n",i+1);
						np=1; break;
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
						showr
						printf("Select Card %d \n",i+1);
						np=1; break;
					}
				}
			}	
		}
	
	
	
		// เพิ่มโอกาสการได้การ์ด Straight + - 2
		// [4] 6 7 [9]
		for(z=2;z<3;z++)
		{
			if(np!=1)
			{	
				for(i=0;i<4;i++)
				{
					if	(
						
							(f==1) //พบการ Flush
							&&
							(
								(a[1]==a[2]-3)	||	((a[1]==11)&&(a[2]==1))	||	((a[1]==1)&&(a[2]==11))	
							)
							&&
							(
								(h[i+1]==a[1]-z)	||	(h[i+1]==a[2]+z)
							)
							&&
							(hc[i+1]==ac[1])//การ์ดบนมือมีสีเดียวกับการ์ดที่ลงแล้ว
						)
					{
						showr
						printf("Select Card %d \n",i+1);
						np=1; break;
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
						showr
						printf("Select Card %d \n",i+1);
						np=1; break;
					}
				}
			}	
		}
	
	
		//---------------------------------------------------------------------------------------------------------
		//การ์ดห่าง3 ** 4 <---3---> 8
	
	
		// เพิ่มโอกาสการได้เลขระหว่างการ์ด
		// 4 [?] 8
		for(z=1;z<4;z++)
		{
			if(np!=1)
			{	
				for(i=0;i<4;i++)
				{
					if	(
						
							(f==1) //พบการ Flush
							&&
							(
								(a[1]==a[2]-4)	||	((a[1]==10)&&(a[2]==1))	||	((a[1]==1)&&(a[2]==10))	
							)
							&&
							(
								(h[i+1]==a[1]+z)
								)
							&&
							(hc[i+1]==ac[1])//การ์ดบนมือมีสีเดียวกับการ์ดที่ลงแล้ว
						)
					{
						showr
						printf("Select Card %d \n",i+1);
						np=1; break;
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
						showr
						printf("Select Card %d \n",i+1);
						np=1; break;
					}
				}
			}	
		}
	
	
	
		// เพิ่มโอกาสการได้การ์ด Straight
		// เพิ่มโอกาสการได้การ์ด FullHouse
		// เพิ่มโอกาสการได้การ์ดติด +/-1 (นอก)
		// 4 [4] 8 [8]
		// [3] 4 8 [9]
		for(z=0;z<2;z++)
		{
			if(np!=1)
			{	
				for(i=0;i<4;i++)
				{
					if	(
						
							(f==1) //พบการ Flush
							&&
							(
								(a[1]==a[2]-4)	||	((a[1]==10)&&(a[2]==1))	||	((a[1]==1)&&(a[2]==10))	
							)
							&&
							(
								(h[i+1]==a[1]-z)	||	(h[i+1]==a[2]+z)	
							)
							&&
							(hc[i+1]==ac[1])//การ์ดบนมือมีสีเดียวกับการ์ดที่ลงแล้ว
						)
					{
						showr
						printf("Select Card %d \n",i+1);
						np=1; break;
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
						showr
						printf("Select Card %d \n",i+1);
						np=1; break;
					}
				}
			}	
		}
		
		if(np!=1)
		{	
			//สุ่มการ์ด
			//Random Card
			r = rand() % 4 + 1;
			printf("Select Card %d is Random\n",r);
		
			
			printf("\n");
		}
	
	
	}//end 2 card patten
	
	
		
	
	
		
	//1 Card patten
	else if(p==1)
	{
		printf("\n---------- 1 Card Patten ----------\n\n");
	
		//เพิ่มโอกาส Royal Straight Flush เรท 10 J Q K A +|-1 (1)
		//Royal Straight Flush Chance
		if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	(
						(a[1]==10) // 10
						&&
						(h[i+1]==11) // 11
						&&
						(hc[i+1]==ac[1])
					)
				{
					showr
					printf("Select Card %d \n",i+1);
					np=1; break;
				}
			}
		}	
		
		//เพิ่มโอกาส Royal Straight Flush เรท 10 J Q K A +|-1 (2)
		if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	(	
						(
							(a[1]==1) // 1
						)
						&&
						(a[1]==13) // 13
						&&
						(hc[i+1]==ac[1])
					)
				{
					showr
					printf("Select Card %d \n",i+1);
					np=1; break;
				}
			}
		}	
		
		//เพิ่มโอกาส Royal Straight Flush เรท 10 J Q K A +|-1 (3)
		if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	(
						(
							(a[1]==11)||(a[1]==12)||(a[1]==13) // 11 | 12 | 13
						)
						&&
						(
							(a[1]==(a[1]+1))||(a[1]==(a[1]-1)) // a +|- 1
						)
						&&
						(hc[i+1]==ac[1])
					)
				{
					showr
					printf("Select Card %d \n",i+1);
					np=1; break;
				}
			}
		}	
		
		//เพิ่มโอกาส Straight Flush หาเลขและสี เหมือนกัน +|- 1
		//Straight Flush Chance +|- 1
		if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	(
						(
							(a[1]==(h[i+1]+1))||(a[1]==(h[i+1]-1))
						)
						&&
						(hc[i+1]==ac[i+1])
					)
				{
					showr
					printf("Select Card %d \n",i+1);
					np=1; break;
				}
			}
		}	
		
		//เพิ่มโอกาส จับคู่ หาเลขและสีที่เหมือนกัน
		//Pair+ Flush Chance
			if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	
					(
						(
							(a[1]==h[i+1])
						)
						&&
						(hc[i+1]==ac[i+1])
					)
				{
					showr
					printf("Select Card %d \n",i+1);
					np=1; break;
				}
			}
		}	
		

		
		//เพิ่มโอกาส Straight Flush หาเลขและสี เหมือนกัน +|- 2
		//Straight Flush +|- 2
		if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	(
						(
							(a[1]==(h[i+1]+2))||(a[1]==(h[i+1]-2))
						)
						&&
						(hc[i+1]==ac[i+1])
					)
				{
					showr
					printf("Select Card %d \n",i+1);
					np=1; break;
				}
			}
		}	
		
		
		//เพิ่มโอกาส จับคู่ หาเลขที่เหมือนกัน
		//Pair+ Chance
			if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	
					(
						(a[1]==h[i+1])
					)
				{
					showr
					printf("Select Card %d \n",i+1);
					np=1; break;
				}
			}
		}	
		
		
		
		//เพิ่มโอกาส Straight หาเลขเหมือนกัน +|- 1
		//Straight Chance +|- 1
		if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	(
						(a[1]==(h[i+1]+1))||(a[1]==(h[i+1]-1))
					)
				{
					showr
					printf("Select Card %d \n",i+1);
					np=1; break;
				}
			}
		}	
		
		//เพิ่มโอกาส Straight หาเลขเหมือนกัน +|- 2
		//Straight Chance +|- 2
		if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	(
						(a[1]==(h[i+1]+2))||(a[1]==(h[i+1]-2))
					)
				{
					showr
					printf("Select Card %d \n",i+1);
					np=1; break;
				}
			}
		}	
		
		//เพิ่มโอกาส Straight Flush หาเลขและสี เหมือนกัน +|- 3
		//Straight Flush Chance +|- 3
		if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	(
						(
							(a[1]==(h[i+1]+3))||(a[1]==(h[i+1]-3))
						)
						&&
						(hc[i+1]==ac[i+1])
					)
				{
					showr
					printf("Select Card %d \n",i+1);
					np=1; break;
				}
			}
		}	
		
		//เพิ่มโอกาส Straight หาเลขเหมือนกัน +|- 3
		//Straight Chance +|- 3
		if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	(
						(a[1]==(h[i+1]+3))||(a[1]==(h[i+1]-32))
					)
				{
					showr
					printf("Select Card %d \n",i+1);
					np=1; break;
				}
			}
		}	
		
		//เพิ่มโอกาส Flush หาสีที่เหมือนกัน
		//Flush Chance
		if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	(hc[i+1]==ac[1])
				{
					showr
					printf("Select Card %d \n",i+1);
					np=1; break;
				}
			}
		}	
		
		//สุ่มการ์ด
		//Random Card
		if(np!=1)
		{
		r = rand() % 4 + 1;
		showr
		printf("Select Card %d is Random\n",r);
		}
		
		
		printf("\n");
		
		
	
	}//end 1 card patten
	
	
	
	
	
	//0 Card patten
	else if(p==0)
	{
		printf("\n---------- 0 Card Patten ----------\n\n");
	
	
		//สุ่มการ์ด
		//Random Card
		r = rand() % 4 + 1;
		printf("Select Card %d is Random\n",r);
		
		
		printf("\n");
	
	}//end 0 card patten
	
	
	
	
	
	
	else
	{
		printf("Out of Rule \n\n p = %d",p);
	}
	//end not correct data
	
	//Reset Memory Data
	p=0,a[1]=0,ac[1]=0,a[2]=0,ac[2]=0,a[3]=0,ac[3]=0,a[4]=0,ac[4]=0,h[1]=0,hc[1]=0,h[2]=0,hc[2]=0,h[3]=0,hc[3]=0,h[4]=0,hc[4]=0;
	
	
	//แสดงข้อมูลที่บันทึกไว้
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

	//system("cls");
}
}

void toClipboard(HWND hwnd, const std::string &s){
	OpenClipboard(hwnd);
	EmptyClipboard();
	HGLOBAL hg=GlobalAlloc(GMEM_MOVEABLE,s.size()+1);
	if (!hg){
		CloseClipboard();
		return;
	}
	memcpy(GlobalLock(hg),s.c_str(),s.size()+1);
	GlobalUnlock(hg);
	SetClipboardData(CF_TEXT,hg);
	CloseClipboard();
	GlobalFree(hg);
}
