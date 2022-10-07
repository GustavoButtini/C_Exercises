#include <stdio.h>
#include <locale.h>
//Exercise list by Robson Linhares, Link: https://pessoal.dainf.ct.utfpr.edu.br/jeansimao/Fundamentos1/LinguagemC/Prof_Linhares_Exercicios_2016_1.pdf

// Exercise 1 - Check time on Second & convert to Hours.

/*
int Exercise1(){
	//Part A
	int seg,min,hour = 0;
	printf("Type an time in seconds to be converted: \n");
	scanf("%d", &seg);
	//PartB
	while (seg >=60){
		if(seg >= 60){
			min +=1;
			seg = seg - 60;	
			if(min >= 60){
				hour += 1;
				min = min - 60;
			}
		}
	}
	printf("The typed time is: %dh:%dm:%ds.",hour,min,seg);
	
}
*/

//Exercise 2 - Recive 3 values and make avarage total.

/*

int Exercise2(){
	int val1,val2,val3 = 0;
	float avaragetotal = 0;
	printf("\nType the value of the 3 numbers:");
	scanf("\n%d",&val1);
	scanf("\n%d",&val2);
	scanf("\n%d",&val3);
	avaragetotal = (val1+val2+val3)/3;
	printf("The avarage total is: %.2f", avaragetotal);
}


*/

//Exercise 3 - Parabolic trajetory calcultae (Can´t do it)


//Exercise 4 -Even or Odd

/*

int Exercise4(){
	int number = 0;
	printf("Type the number that´s you wanna to see with is Even or Odd \n");
	scanf("%d", &number);
	if((number % 2) == 1){
		printf("The digited number is Odd");
	}else{
		printf("The digited number is Even");
	}
}

*/

//Exercise5 - Check if the tyoed numbers can be an triangle, and what is the type of the same

/*


int Exercise5(){
	int num1, num2, num3 = 0;
	printf("Type the number to the number 1, 2 and 3\n");
	scanf("\n%d", &num1);
	scanf("\n%d", &num2);
	scanf("\n%d", &num3);
	if(num1 + num2  >= num3 && num2 + num3 >= num1 && num3 + num1 >= num2){
		//The triangle existis !
		if(num1 == num2 && num2 == num3){
			printf("This triangle is Equilateral");
		}else if(num1 == num2 && num2 != num3 || num1 == num3 && num1 != num2 || num2 == num3 && num3 != num1 ){
			printf("The triangle is Isosceles");
		}else if(num1 != num2 && num2 != num3){
			printf("The triangle is Scalene");
		}
	}else{
		printf("The triangle doesn´t exist !");
	}
}
	
*/

//Exercise 6 - Take 3 numbers and show the bigger the smaller and the intermediate. (On the Bigger-Smaller.c archive !)


//Exercise 7 - Put the numbers and a operator.

/*

int Exercise7(){
	float num1,num2,res = 0;
	char op;
	int i = 0;
	printf("Type 2 numbers and a operator\n");
	scanf("\n%f", &num1);
	scanf("\n%f", &num2);
	scanf("\n%c", &op);
	switch(op){
		case '+':
			printf("The result is: %.2f",(num1 + num2));
			break;
		case '-':
			res = (num1 - num2);
			printf("The result is: %.2f", res);	
			break;
		case '*':
			res = (num1 * num2);
			printf("The result is: %.2f", res);
			break;
		case '/':
			res = (num1 / num2);
			printf("The result is: %.2f", res);
			break;
		default:
			printf("Operator not found");	
		
	}
}

*/

// Exercise 8 - Check if the student has passed on the lession.

/*

int Exercise8() {
	int vl1, vl2, vl3  = 0;
	float medium = 0;
	printf("Type the first grade\n");
	scanf("%d", &vl1);
	if(vl1 >= 0 && vl1 <=100){
		printf("Type the second grade\n");
		scanf("%d", &vl2);
		if(vl1 >= 0 && vl1 <=100){
			medium = (vl1 + vl2) / 2;
			//Grade > 70
			if(medium >= 70){
				printf("The student is aproved, congrats !");
			}
			//Grade > 49 and < 70
			else if(medium >= 49){
				printf("The student need to make a exam, type the grade of the exam \n");
				scanf("%d", &vl3);
				medium = medium + vl3;
			if(medium >= 100){
				printf("The student is aproved, congrats");
			}else{
				printf("The student is reproved.");
			}
		
			// Grade < 49
			}else{
				printf("The student is reproved !");
			}
		//Value 2 wrong !			
		}else{
			printf("Value wrong, bigger than 100 or smaller than 0 !, Retry Again !");	
		}

	//value 1 wrong
	}else{
		printf("Value wrong, bigger than 100 or smaller than 0 !, Retry Again !");
	}

}


*/

//Exercise 9 - Show an extense number in the type of the number
/*

int Exercise9(){
	int c_number = 0;
	printf("Digite o numero que será exibido por extenso. \n");
	scanf("%d", &c_number);
	switch (c_number){
		case 0:
			printf("ZERO");
		break;

		case 1:
			printf("UM");
		break;

		case 2:
			printf("DOIS");
		break;
		case 3:
			printf("TRES");
		break;

		case 4:
			printf("QUARTO");
		break;

		case 5:
			printf("CINCO");
		break;
		
		case 6:
			printf("SEIS");
		break;

		case 7:
			printf("SETE");
		break;

		case 8:
			printf("OITO");
		break;
		
		case 9:
			printf("NOVE");
		break;

		case 10:
			printf("DEZ");
		break;0

		case 11:
			printf("ONZE");
		break;
		
		case 12:
			printf("DOZE");
		break;

		case 13:
			printf("TREZE");
		break;

		case 14:
			printf("QUATORZE");
		break;
		
		case 15:
			printf("QUINZE");
		break;

		case 16:
			printf("DEZESSEIS");
		break;

		case 17:
			printf("DEZESSETE");
		break;
		
		case 18:
			printf("DEZOITO");
		break;

		case 19:
			printf("DEZENOVE");
		break;

		case 20:
			printf("VINTE");
		break;
	}
}


*/

//Exercise 10 - Analyze the spped of an car to determinate the infractions that he´s commited
/*

int Exercise10(){
	int way_spd, car_spd, infraction = 0;
	printf("Type the speed of the guide !\n");
	scanf("%d", &way_spd);
	printf("Type the speed of the car !\n");
	scanf("%d", &car_spd);
	infraction = (car_spd - way_spd) * 5;
	printf("The infraction value is: %d", infraction);
		
}

*/

//Exercise 11 - Calculate the days of an month and a Year
/*

int Exercise11(){
	int month,year, bissext_yr, days = 0;
	printf("Type the year !\n");
	scanf("%d", &year);
	printf("Type the month !\n");
	scanf("%d", &month);
	if(year != 0){
		if(month != 0){
			bissext_yr = year%4;
			month = month + (year * 12);
			days = (month * 30);
			switch(bissext_yr){
				case 0:
					days++;
				break;
				default:

				break;
			}
			
		}else{
			printf("The month cannot be 0, try again !");
		}
	}else{
		if(month != 0){
			month = month + (year * 12);
			days = days + (month * 30);
			switch(bissext_yr){
				case 0:
					days++;
				break;
				default:
					printf("Ano normal");
				break;
			}
			
		}else{
			printf("The month cannot be 0, try again !");
		}
	}
	printf("The date on days is: %d",days);
}


*/

//Exercise 12 - Make the more eficient cash machine possible, givin the least quantity of cedules
/*

int Exercise12(){
	int Value , BN100 ,BN50 , BN25 , BN10 , BN5 , BN2 = 0;
	printf("Type the value of the deposit\n");
	scanf("%d", &Value);
	
	while (Value > 0 && Value !=1){
		if(Value >= 100){
			BN100 ++;
			Value = Value - 100;
		}else if(Value >=50){
			BN50 ++;
			Value -= 50;
		}else if(Value >= 25){
			BN25 ++;
			Value -= 25;
		}else if(Value >= 10){
			BN10 ++;
			Value -= 10;
		}else if(Value >= 5){
			BN5 ++;
			Value -=5;
		}else{
			BN2 ++;
			Value -=2;
		}
	}
	if(Value == 1){
		printf("Value not redoundant, cannot take 1 dolar bill The Banknotes that will be retired are: \n%d - 100R$  \n%d - 50R$  \n%d - 25R$  \n%d - 10R$ \n%d - 5R$ \n%d - 2R$",BN100 ,BN50, BN25, BN10 ,BN5 ,BN2 );
	}else{
		printf("The Banknotes that will be retired are: \n%d - 100R$  \n%d - 50R$  \n%d - 25R$  \n%d - 10R$ \n%d - 5R$ \n%d - 2R$",BN100 ,BN50, BN25, BN10 ,BN5 ,BN2 );
	}

}



*/


// Exercise13 - Insert the time worked and the value for hour, betweem 40 hours and 60 hours, give an 50% bonus per hour, abose 60 hours, an 100% bonus.


/*

void Exercise13(){
	int hrs_worked = 0;
	int money_phr, final_csh = 0;
	printf("Enter the quantity of hours worked \n");
	scanf("%d", &hrs_worked);
	printf("Enter the cash per hours worked \n");
	scanf("%d", &money_phr);
	if(hrs_worked < 40){
		final_csh = hrs_worked * money_phr;
	}else if(hrs_worked >= 40 && hrs_worked < 60){
		money_phr = money_phr + (money_phr/2);
		final_csh = hrs_worked * money_phr;
		printf("Your will gain an 50 bonus on your salary nice job ! "); 
	}else{
		final_csh = hrs_worked * (money_phr + money_phr);
		printf("Your will gain an 100 bonus on your salary great job ! ");
	}
	printf("Your salary is: %d", final_csh);
	
}

*/

//Exercise 14 - Give points based on if 
/*
- The player miss every thing (0 points) 
- Get right the goals of any of 2 teams (5 points, 3 for the fisrt team and 2 to the second team) 
- Get right only the winner (10 points)
- Get one team goals right and the winner (15 points, team 1 3 goals to take this)
- Get everything right (20 points)
*/


/*
void Exercise14(){
	int g_1, g_2, points = 0;
	printf("Enter the first team goals ! \n");
	scanf("%d", &g_1);
	printf("Enter the second team goals ! \n");
	scanf("%d", &g_2);
	if(g_1 > g_2){
		switch (g_1){
			case 3:
				if(g_2 == 2){
					points = 20;
				}else{
					points = 15;
				}
			break;
			default:
				points = 10;
			break;
		}	
	}else{
		switch (g_2){
			case 2:
				points = 5;
			break;
		}
		switch  (g_1){
			case 3:
				points = 5;
			break;
		}
	}
	printf("Your scored points is: %d", points);
}

*/

//Exercise 15 - Calculate the impost based on this table
/*
- Bellow 1.637,11 = No impost
- Between 1.637,11 - 2453,50 =  7,5% - 122,78 
- Between 2.453,50 - 3.271,38 = 15% - 306,80
- Between 3.271,38 - 4.087,65 = 22,5% - 552,15
- Above 4.087,65 = 27,5% - 756,53
*/
/*

void Exercise15(){
	float salary,impost = 0;
	printf("Enter your salary \n");
	scanf("%f", &salary);
	if(salary < 1637.11){
		impost = 0;
	}else if (salary >= 1637.11 && salary < 2453.50){
		impost = ((salary*7.5)/ 100) - 122.78;
	}else if (salary >= 2453.50 && salary < 3271.38){
		impost = ((salary*15)/ 100) - 306.80;
	}else if (salary >= 3271.38 && salary < 4087.65){
		impost = ((salary*22.5)/100) - 552.15;
	}else{
		impost = ((salary*27.5)/100) - 756.53;
	}
	printf("The value of the impost is %.2f", impost);
}


*/

//Exercise 16 - Quest the quantity of the faces of an polygon, and their length, and use switch case to make an calculus of the area of the polygon

/*

void Exercise16(){
	int polygon_faces,l_1, l_2, l_3, l_4, l_5, l_6 = 0;
	float area = 0;
	printf("Enter the quantity of faces of the polygon \n");
	scanf("%d", &polygon_faces);
	switch (polygon_faces){
		case 3:
			
			printf("Type the length of the 3 faces of the triangle: \n");
			scanf("%d", &l_1);
			scanf("\n %d", &l_2);
			scanf("\n %d", &l_3);
			area = l_1 * l_2 * l_3 * 1.73/4;
			printf("The area of the triangle is: %.2f", area);
		break;
		case 4:
			printf("Type the length of the 4 faces of the square: \n");
			scanf("%d", &l_1);
			scanf("\n %d", &l_2);
			scanf("\n %d", &l_3);
			scanf("\n %d", &l_4);
			if(l_1 == l_2 && l_2 == l_3 && l_3 == l_4 && l_4 == l_1){
				area = l_1 * l_2;
				printf("The area of the Square is %.2f", area);
			}else{
				printf("This is not a square");
			}
		break;
		case 6:
			printf("Type the length of the 6 faces of the hexagon: \n");
			scanf("%d", &l_1);
			scanf("\n %d", &l_2);
			scanf("\n %d", &l_3);
			scanf("\n %d", &l_4);
			scanf("\n %d", &l_5);
			scanf("\n %d", &l_6);
			area = 6 * (l_1*l_2*l_3) * (l_4*l_5*l_6) * 1.73/4;
			printf("The area of the Hexgon is: %.2f", area);
		break;
		
		default:
			printf("Polygon not insert on the program !");
		break;
	}
}

*/

//Exercise 17 - Show all numbers that this sentence is real : xxyy -> xx + yy -> xy * xy = xxyy
 /*
 
 void Exercise17(){
	int num = 1000;
	while (num <= 9999){
		if(num == (((num/100)+(num%100))*((num/100) + (num%100))))
			printf("%d : %d+%d = %d, %d^2 = %d \n", num, num/100, num%100, (num/100) + (num%100),(num/100) + (num%100), num);
		num++;
	}
}
 
 */

// Exercise 18, write the fifteen firsts numbers of Fibonnaci 

/*

void Exercise18(){
	int prox, b = 0;
	int a = 1;
	for(int i; i <= 15; i++){
		prox = a + b;
		b = a;
		a = prox;
		printf("\n%d number: %d\n", i,a);
	}
}

*/

int main(void){
	setlocale(LC_ALL, "Portuguese");
	//Start exercise 1 delete here --> //Exercise1();
	//Start exercise 2 delete here --> //Exercise2();
	//Start exercise 3 delete here --> //Exercise3();
	//Start exercise 4 delete here --> //Exercise4();
	//Start exercise 5 delete here --> //Exercise5();
	//Start exercise 7 delete here --> //Exercise7();
	//Start exercise 8 delete here --> //Exercise8();
	//Start exercise 9 delete here --> //Exercise9();
	//Start exercise 10 delete here --> //Exercise10();	
	//Start exercise 11 delete here --> //Exercise11();
	//Start exercise 12 delete here --> //Exercise12();
	//Start exercise 13 delete here --> //Exercise13();
	//Start exercise 14 delete here --> //Exercise14();
	//Start exercise 15 delete here --> //Exercise15();
	//Start exercise 16 delete here --> //Exercise16();
	//Start exercise 17 delete here --> //Exercise17();
	//Start exercise 18 delete here --> //Exercise18();
	Exercise19();
}
