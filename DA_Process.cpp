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
	//f mean Flush Check
	//np mean some patten has success
	
	//wait card number and color
	printf("DA Process Core v0.1\n");
	printf("\n");
	
		printf("* Color Red = 1\n");
		printf("* Color Blue = 2\n");
		printf("* Color Green = 3\n");
	
	printf("\n");
	printf("Enter Card Unit [0-4] = ");
	scanf("%d",&p);
	
	int a[5],ac[5],h[5],hc[5];
	
	printf("\n");
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
	
	//Loop Resive Data Card on hand
	for(i=0;i<4;i++)
	{
		printf("Enter Number of Card %d = ",i+1);
		scanf("%d",&h[i+1]);
		
		printf("Enter Card %d Color = ",i+1);
		scanf("%d",&hc[i+1]);
		printf("\n");
	}
	
	
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
	
	
	
	
	
	//4 Card patten
	if(p==4)
	{
		printf("\n---------- 4 Card Patten ----------\n\n");
		//Royal Straight Flush
		
		//RSF 1
		
		for(i=0;i<4;i++)
		{
			if	(
					(f==1)
					&&
					(
						(
							(a[1]==11)&&(a[2]==12)&&(a[3]==13)&&(a[4]==1)
						)
						&&
						(h[i+1]==10)
						&&
						(hc[i+1]==ac[1])
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
					(f==1)
					&&
					(
						(
							(a[1]==10)&&(a[2]==12)&&(a[3]==13)&&(a[4]==1)
						)
						&&
						(h[i+1]==11)
						&&
						(hc[i+1]==ac[1])
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
					(f==1)
					&&
					(
						(
							(a[1]==10)&&(a[2]==11)&&(a[3]==13)&&(a[4]==1)
						)
						&&
						(h[i+1]==12)
						&&
						(hc[i+1]==ac[1])
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
					(f==1)
					&&
					(
						(
							(a[1]==10)&&(a[2]==11)&&(a[3]==12)&&(a[4]==1)
						)
						&&
						(h[i+1]==13)
						&&
						(hc[i+1]==ac[1])
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
					(f==1)
					&&
					(
						(
							(a[1]==10)&&(a[2]==11)&&(a[3]==12)&&(a[4]==13)
						)
						&&
						(h[i+1]==1)
						&&
						(hc[i+1]==ac[1])
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
						(f==1)
						&&
						(
							(
								(a[1]==7)&&(a[2]==7)&&(a[3]==7)&&(a[4]==7)
							)
							&&
							(h[i+1]==7)
							&&
							(hc[i+1]==ac[1])
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
							(a[1]==7)&&(a[2]==7)&&(a[3]==7)&&(a[4]==7)
						)
						&&
						(h[i+1]==7)
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
						(f==1)
						&&
						(
							(
								(a[1]==a[2])&&(a[2]==a[3])&&(a[3]==a[4])
							)
							&&
							(h[i+1]==a[1])
							&&
							(hc[i+1]==ac[1])
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
							(a[1]==a[2])&&(a[2]==a[3])&&(a[3]==a[4])
						)
						&&
						(h[i+1]==a[1])
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
						(f==1)
						&&
						(
							(
								(a[1]==a[2])&&(a[3]==a[4])
							)
							&&
							(
								(h[i+1]==a[1])||(h[i+1]==a[3])
							)
							&&
							(hc[i+1]==ac[1])
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
						(f==1)
						&&
						(
							(
								(a[1]==a[2])&&(a[2]==a[3])
							)
							&&
							(h[i+1]==a[4])
							&&
							(hc[i+1]==ac[1])
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
						(f==1)
						&&
						(
							(
								(a[2]==a[3])&&(a[3]==a[4])
							)
							&&
							(h[i+1]==a[1])
							&&
							(hc[i+1]==ac[1])
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
						(f==1)
						&&
						(
							(
								(a[1]==(a[2]-1))&&(a[2]==(a[3]-1))&&(a[3]==(a[4]-1))
							)
							&&
							(
								(h[i+1]==(a[1]-1))||(h[i+1]==(a[4]+1))
							)
							&&
							(hc[i+1]==ac[1])
						)
					)
				{
					printf("Select Card %d is Straight Flush\n",i+1);
					np=1;
				}
			}
				
				
			//STF 2 10 11 12 13
			for(i=0;i<4;i++)
			{
				if	(
						(f==1)
						&&
						(
							(
								(a[1]==10)&&(a[2]==11)&&(a[3]==12)&&(a[3]==13)
							)
							&&
							(h[i+1]==1)
							&&
							(hc[i+1]==ac[1])
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
							(a[1]==a[2])&&(a[1]==a[3])&&(a[3]==a[4])
						)
						&&
						(h[i+1]==a[1])
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
							(a[1]==a[2])&&(a[3]==a[4])
						)
						&&
						(
							(h[i+1]==a[1])||h[i+1]==a[3]
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
							(a[1]==a[2])&&(a[2]==a[3])
						)
						&&
						(h[i+1]==a[4])
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
							(a[2]==a[3])&&(a[3]==a[2])
						)
						&&
						(h[i+1]==a[1])
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
						(a[1]==a[2]-1)&&(a[2]==a[3]-1)&&(a[3]==a[4]-1)
					)
					&&
					((h[i+1]==(a[1]-1))||(h[i+1]==(a[1]))||(h[i+1]==(a[1]+1))||(h[i+1]==(a[1]+2))||(h[i+1]==(a[1]+3))||(h[i+1]==(a[1]+4)))
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
								(a[1]==(a[2]-1))&&(a[2]==(a[3]-1))
							)
							&&
							((h[i+1]==(a[1]-1))||(h[i+1]==(a[1]+3)))
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
								(a[2]==(a[3]-1))&&(a[3]==(a[4]-1))
							)
							&&
							((h[i+1]==(a[2]-1))||(h[i+1]==(a[2]+3)))
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
								(a[1]==(a[2]-1))&&(a[2]==(a[3]-2))
							)
							&&
							(h[i+1]==a[2]+1)
						)
					{
						printf("Select Card %d is Straight\n",i+1);
						np=1;
					}
				}
				
				
				//ST 5
				
				
				for(i=0;i<4;i++)
				{
					if	(
							(
								(a[2]==(a[3]-1))&&(a[3]==(a[4]-2))
							)
							&&
							(h[i+1]==(a[3]+1))
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
								(a[1]==(a[2]-2))&&(a[2]==(a[3]-1))
							)
							&&
							(h[i+1]==(a[1]+1))
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
								(a[2]==(a[3]-2))&&(a[3]==(a[4]-1))
							)
							&&
							(h[i+1]==(a[2]+1))
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
			if	(f==1)
			{	
				for(i=0;i<4;i++)
				{
					if	(hc[i+1]==ac[1])
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
							(a[1]==7)&&(a[2]==7)
						)
						&&
						(h[i+1]==7)
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
							(a[2]==7)&&(a[3]==7)
						)
						&&
						(h[i+1]==7)
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
							(a[3]==7)&&(a[4]==7)
						)
						&&
						(h[i+1]==7)
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
						(a[1]==a[2])
						&&
						(h[i+1]==a[1])
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
							(a[2]==a[3])
						)
						&&
						(h[i+1]==a[2])
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
							(a[3]==a[4])
						)
						&&
						(h[i+1]==a[3])
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
						(a[1]==a[2])
						&&
						(
							(h[i+1]==a[3])||(h[i+1]==a[4])
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
						(a[2]==a[3])
						&&
						(
							(h[i+1]==a[1])||(h[i+1]==a[4])
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
						(a[3]==a[4])
						&&
						(
							(h[i+1]==a[1])||(h[i+1]==a[2])
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
						(h[i+1]==a[1])
						||
						(h[i+1]==a[2])
						||
						(h[i+1]==a[3])
						||
						(h[i+1]==a[4])
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
						(a[1]==(a[2]-1))
						&&
						(h[i+1]==a[1])
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
							(a[2]==(a[3]-1))
						)
						&&
						(h[i+1]==a[2])
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
							(a[3]==(a[4]-1))
						)
						&&
						(h[i+1]==a[3])
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
						(a[1]==(a[2]-2))
						&&
						(h[i+1]==(a[1]+1))
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
						(a[2]==(a[3]-2))
						&&
						(h[i+1]==(a[2]+1))
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
						(a[3]==(a[4]-2))
						&&
						(h[i+1]==(a[3]+1))
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
							(a[4]==1)&&(a[1]==2)
						)
						&&
						(h[i+1]==3)
					)
				{
					printf("Select Card %d is Mini Straight\n",i+1);
					np=1;
				}
			}
		}
		
		//Random Card
		r = rand() % 4 + 1;
		printf("Select Card %d is Random\n",r);
		
		printf("----------------------------------------------------------\n");
		printf("\n");
		
	}//end 4 card patten
	
		
	//3 Card patten
	else if(p==3)
	{
		printf("\n---------- 3 Card Patten ----------\n\n");
		
		//Straight++
		//STF 1
		for(i=0;i<4;i++)
		{
			if	(
					(f==1)
					&&
					(
						(
							(a[1]==(a[2]-1))&&(a[2]==(a[3]-1)) // 2 3 4
						)
						&&
						(
							(h[i+1]==(a[1]-1))||(h[i+1]==(a[3]+1)) // 1 | 5
						)
						&&
						(hc[i+1]==ac[1])
					)
				)
			{
				printf("Select Card %d \n",i+1);
				np=1;
			}
		}
		
		
		//ST 1
		if(np!=1)
		{
			for(i=0;i<4;i++)
			{
				if	(
						
						(
							(a[1]==(a[2]-1))&&(a[2]==(a[3]-1)) // 2 3 4
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
		}
		
		//np !=1
		if(np!=1)
		{
			
			//STF 2
			if(np!=1)
			{
				for(i=0;i<4;i++)
				{
					if	(
							(f==1)
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
			
			
			//STF 3	
			if(np!=1)
			{
				for(i=0;i<4;i++)
				{
					if	(
							(f==1)
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
				
			
			//STF 4	
			if(np!=1)
			{	
				for	(i=0;i<4;i++)
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
			
			//STF 5
			if(np!=1)
			{	
				for(i=0;i<4;i++)
				{
					if	(
							(f==1)
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
				
			//STF 6	
			if(np!=1)
			{	
				for(i=0;i<4;i++)
				{
					if	(
							(f==1)
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
		
		
		//Four Card++ Flush Chance
		if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	(
						(f==1)
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
		
		
		
		//Four Card++ Chance
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
		
		//Straight Chance
		//ST?F
		if(np!=1)
		{
			for(i=0;i<4;i++)
			{
				if	(
						(f==1)
						&&
						(
							(a[1]==(a[2]-1)) // 2 3 ?
						)
						&&
						(
							(h[i+1]==(a[1]-1)) // 1 | 4
							||
							(h[i+2]==(a[2]+1))
						&&
						(hc[i+1]==ac[1])
						)
					)
				{
					printf("Select Card %d \n",i+1);
					np=1;
				}
			}
		}
		
		
		//ST
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
		
		
		//ST?F1
		if(np!=1)
		{
			for(i=0;i<4;i++)
			{
				if	(
						(f==1)
						&&
						(
							(a[2]==(a[3]-1)) // ? 2 3
						)
						&&
						(
							(h[i+1]==(a[1]-1)) // 1 | 4
							||
							(h[i+2]==(a[2]+1))
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
		
		
		//ST1
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
		
		
		
		
		//ST?F 2
		if(np!=1)
		{
			for(i=0;i<4;i++)
			{
				if	(
						(f==1)
						&&
						(
							(a[1]==(a[2]-1)) // 8 9 ?
						)
						&&
						(
							(h[i+1]==(a[1]-2)) // 7 | 11
							||
							(h[i+2]==(a[2]+2))
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
		
		
		//ST 2
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
							(h[i+1]==(a[1]-2)) // 7 | 11
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
		
			
		
		//ST?F 2
		if(np!=1)
		{
			for(i=0;i<4;i++)
			{
				if	(
						(f==1)
						&&
						(
							(a[2]==(a[3]-1)) // ? 8 9
						)
						&&
						(
							(h[i+1]==(a[1]-2)) // 7 | 11
							||
							(h[i+2]==(a[2]+2))
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
		
		
		//ST 2
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
							(h[i+1]==(a[1]-2)) // 7 | 11
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
		
		
		//Three Card++ Chance
		
		//TC1 F
		if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	(
						
						(f==1)
						&&
						(
							(a[1]==a[2]) // 1 1 ?
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
		
		//TC1
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
		
		
		//TC2 F
		if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	(
						
						(f==1)
						&&
						(
							(a[2]==a[3]) // ? 1 1
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
		
		//TC2
		if(np!=1)
		{	
			for(i=0;i<4;i++)
			{
				if	(
						(
							(a[2]==a[3]) // ? 1 1
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
		
		//Two Pair Chance
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
		
		
		
		
		
		//
		
		
	
	
	
	}//end 2 card patten
	
	
		
	
	
		
	//1 Card patten
	else if(p==1)
	{
		printf("\n---------- 1 Card Patten ----------\n\n");
	
	
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
		
		
		//RSF C
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
		
		
		//ST F
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
		
		//P F
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
		

		
		
		//ST F2
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
		
		
		
		
		//P
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
		
		
		
		
		//ST 1
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
		
		
		//ST 2
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
		
		
		//ST F3
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
		
		
		//ST 3
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
		
		
		//F
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
