/*============================================================*/
//
//   Author: Annamitz Rapliza, Marian Nicole Nieto, Stanley Tarce
//   Date Modified: October 20, 2015
//   Description:  EC72- Final Project
//
/*============================================================*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX_BUFFER 1000


typedef struct{
  char name[MAX_BUFFER];
  char fullname[MAX_BUFFER];
  double height;
  double weight;
  int age;
  int years;
  char sports[MAX_BUFFER];
  char country[MAX_BUFFER];
  char birthday[MAX_BUFFER];
}athlete;


void removeAthlete(athlete top[]);
void computeBMI(athlete top[]);
void computeBFP(athlete top[]);



int main(){

  athlete top[20];
  int i;
  int a,b,c,d,e,age1,year1;
  int choice1,choice2,choice3,choice4,choice5;
  char temp[MAX_BUFFER];
  char temp1[MAX_BUFFER];
  char temp2[MAX_BUFFER];
  char temp3[MAX_BUFFER];
  char temp4[MAX_BUFFER];
  char temp5[MAX_BUFFER];
  char temp6[MAX_BUFFER];
  char temp7[MAX_BUFFER];
  char temp8[MAX_BUFFER];
  char temp9[MAX_BUFFER];
  char temp10[MAX_BUFFER];
   char temp11[MAX_BUFFER];
  double height1,weight1;
  char search[128];
  int computemenu;


  //Null Setter
  for(a=0;a<20;a++){
    strcpy(top[a].name,"\0");
    strcpy(top[a].sports,"\0");
    strcpy(top[a].country,"\0");
    strcpy(top[a].fullname,"\0");
    strcpy(top[a].birthday,"\0");
    top[a].height='\0';
    top[a].weight='\0';
    top[a].age='\0';
    top[a].years='\0';
  }

  /*=============Data==========*/

  //Name and Fullname
  strcpy(top[0].fullname,"Emmanuel 'Manny' Dapidran Pacquiao");
  strcpy(top[0].name,"Manny 'Pacman' Pacquiao");
  strcpy(top[1].fullname,"Mark Stanley Martiñez Tarce");
  strcpy(top[1].name,"Stanley Tarce");



  //Sport
  strcpy(top[0].sports,"Boxing");
  strcpy(top[1].sports,"Basketball");


  //country
  strcpy(top[0].country,"Philippines");
  strcpy(top[1].country,"Philippines");

  //years in profession
  top[0].years=20;
  top[1].years=10;


  //height
  top[0].height=166.00;
  top[1].height=190.00;

  //Weight
  top[0].weight=65.00;
    top[1].weight=65.00;

  //Age
  top[0].age=36;
  top[1].age=19;

  //Birthday
  strcpy(top[0].birthday,"December 17, 1978");
  strcpy(top[1].birthday,"September 18, 1996");


  //Program


  do{
  puts("\n\n==================Welcome to the Health Profiler================");
  puts("\n\n");
  puts("1- List of Athletes and their Profiles");
  puts("2-Search Athlete's profile");
  puts("3-Edit Athlete's Profile");
  puts("4-Add Athlete");
  puts("5-Delete Athlete");
  puts("6-Evaluate athlete information");
  puts("7-Clear Screen");
  puts("99-EXIT");
  printf("\n\nChoice>>");
  scanf("%d",&choice1);
  switch(choice1){
  case 1:
    puts("\n\n===============ATHLETES AND THEIR PROFILES=============\n\n");
     for(a=0;a<10;a++){
       if(strlen(top[a].name)>0){
	 printf("\n[%d]\n\nName:%s\n",a,top[a].name);
	 printf("Full name:%s\n",top[a].fullname);
	 printf("Sports:%s\n",top[a].sports);
	 printf("Country:%s\n",top[a].country);
	 printf("Birthday:%s\n",top[a].birthday);
	 printf("Age:%d years old\n",top[a].age);
	 printf("Years in Profession:%d years\n",top[a].years);
	 printf("Height:%.2lf cm\n",top[a].height);
	 printf("Weight:%.2lf kg\n",top[a].weight);
       }
     }
     break;

  case 2:
    puts("\n\n=================Search Tool====================\n\n");
    puts("\nNote: Search Orders will come out in order!\n");
    puts("1-Name");
    puts("2-Full Name");
    puts("3-Sports");
    puts("4-Country");
    puts("5-Birthday");
    puts("6-Age");
    puts("7-Years");
    puts("8-Height");
    puts("9-Weight");
    printf("\n\nPlease Enter choices\n");
    puts("1 - Search Menu");
    puts("2 - Exit Search menu");


    printf("\n\nChoice>>\n\n");
    scanf("%d",&choice2);
    switch(choice2){
        while(1){
    case 1:
	  printf("\nPlease enter the keyword of the name\n");
	  gets(search);
	  gets(search);
	  printf("\nResults");
	  for(i=0;i<20;i++)
	    {
	      sprintf(temp,"%d",top[i].name);
	      if(strstr(top[i].name,search))
		{
		  printf("\nEntry Number: %d\n", i);
		  printf("\nName: %s\n", top[i].name);
		  printf("\nFull Name: %s\n", top[i].fullname);
		  printf("\nWith sport playing %s\n", top[i].sports);
		  printf("\nLiving in %s\n", top[i].country);
		  printf("\nBirthdate  is %s\n", top[i].birthday);
		  printf("\nAge is %d\n", top[i].age);
		  printf("\nPlaying this sport since %d years\n",top[i].years);
        printf("\nWith Height of %.2lf cm\n",top[i].height);
        printf("\nWIth Weight of %.2lf kg\n",top[i].weight);
		}
	    }
	    break;
        case 2:
        break;
	    default: break;
        }
    }



    break;

  case 3:
    puts("\n\n=================Edit Profile===============\n\n");

    //Shows list
      for(a=0;a<10;a++){
       if(strlen(top[a].name)>0){
         printf("\n\nEntry [%d]\n\n",a);
	 printf("Name:%s\n",top[a].name);
	 printf("Full name:%s\n",top[a].fullname);
	 printf("Sports:%s\n",top[a].sports);
	 printf("Country:%s\n",top[a].country);
	 printf("Birthday:%s\n",top[a].birthday);
	 printf("Age:%d years old\n",top[a].age);
	 printf("Years in Profession:%d years\n",top[a].years);
	 printf("Height:%.2lf cm\n",top[a].height);
	 printf("Weight:%.2lf kg\n",top[a].weight);
       }
     }

      //Edit

      puts("\n\n\n\nEnter entry # to edit>>");
      scanf("%d",&choice3);
      if(top[choice3].age>0)
	{
	  do{
	   puts("\n\n\n=================SELECTION MENU===============");
	  puts("\n\n1-Name");
	  puts("2-Full Name");
	  puts("3-Sports");
	  puts("4-Country");
	  puts("5-Birthday");
	  puts("6-Age");
	  puts("7-Years in Profession");
	  puts("8-Height");
	  puts("9-Weight");
	  puts("99-EXIT");
	  printf("\n\nChoice>>");
	  scanf("%d",&choice4);
	  switch(choice4){
	  case 1:
	  printf("\n\nEnter NEW name:");
	  fflush(stdin);
	  fgets(temp,256,stdin);
	  fgets(temp,256,stdin);
	  strcpy(top[choice3].name,temp);

          break;

	  case 2:
	  printf("\n\nEnter NEW full name:");
	  fflush(stdin);
	  fgets(temp1,256,stdin);
	  fgets(temp1,256,stdin);
	  strcpy(top[choice3].fullname,temp1);
          break;

	  case 3:
	  printf("\n\nEnter NEW sports:");
	  fflush(stdin);
	  fgets(temp2,256,stdin);
	  fgets(temp2,256,stdin);
	  strcpy(top[choice3].sports,temp2);
          break;

	  case 4:
	  printf("\n\nEnter NEW country:");
	  fflush(stdin);
	  fgets(temp3,256,stdin);
	  fgets(temp3,256,stdin);
	  strcpy(top[choice3].country,temp3);
          break;

	  case 5:
	  printf("\n\nEnter NEW birthday:");
	  fflush(stdin);
	  fgets(temp4,256,stdin);
	  fgets(temp4,256,stdin);
	  strcpy(top[choice3].birthday,temp2);
	  break;

	  case 6:
	    printf("\n\nEnter NEW age:");
	    scanf("%d",&age1);
	    top[choice3].age=age1;
	    break;

	  case 7:
	    printf("\n\nEnter NEW number of years in profession:");
	    scanf("%d",&year1);
	    top[choice3].years=year1;
	    break;

	  case 8:
	    printf("\n\nEnter NEW Height(in cm):");
	    scanf("%lf",&height1);
	    top[choice3].height=height1;
	    break;

	  case 9:
	    printf("\n\nEnter NEW Weight(in kg):");
	    scanf("%lf",&weight1);
	    top[choice3].weight=weight1;
	    break;

	  case 10:
	    choice4=99;
	    break;

	  case 99:
	    break;

	  default:
	    puts("\nINVALID\n");
	    choice4=99;
	     break;

	  }
	  }while(choice4!=99);

  	}
      else
	{
	  puts("\n\nINVALID CHOICE.\n\n");
	}




      break;


  case 4:
    puts("\n\n=================ADD Athlete=============\n\n");
    puts("Enter entry # to occupy:");
    scanf("%d",&choice5);
    if (top[choice5].age==0){

        printf("\n\nEnter Name:");
	  fflush(stdin);
	  fgets(temp7,256,stdin);
	  strcpy(top[choice5].name,temp7);
         printf("Enter Full name:");
	  fflush(stdin);
	  fgets(temp8,256,stdin);
          strcpy(top[choice5].fullname,temp8);
          printf("Enter sports:");
	  fflush(stdin);
	  fgets(temp9,256,stdin);
	  strcpy(top[choice5].sports,temp9);
	  printf("Enter country:");
	  fflush(stdin);
	  fgets(temp10,256,stdin);
	  strcpy(top[choice5].country,temp10);
          printf("Enter birthday:");
	  fflush(stdin);
	  fgets(temp11,256,stdin);
	  strcpy(top[choice5].birthday,temp11);
           printf("Enter age:");
	   scanf("%d",&top[choice5].age);
	   printf("Enter years in profession:");
	   scanf("%d",&top[choice5].years);
	    printf("Enter height(in cm):");
	   scanf("%lf",&top[choice5].height);
	    printf("Enter weight (in kg):");
	   scanf("%lf",&top[choice5].weight);
    }
    else {
      puts("\n\nA PROFILE IS ALREADY OCCUPYING THE ENTRY\n\n");
    }

    break;

  case 5:
    puts("\n\n=================DELETE ATHLETE================\n\n");
     for(a=0;a<10;a++){
       if(strlen(top[a].name)>0){
	 printf("\n[%d]\n\nName:%s\n",a,top[a].name);
	 printf("Full name:%s\n",top[a].fullname);
	 printf("Sports:%s\n",top[a].sports);
	 printf("Country:%s\n",top[a].country);
	 printf("Birthday:%s\n",top[a].birthday);
	 printf("Age:%d years old\n",top[a].age);
	 printf("Years in Profession:%d years\n",top[a].years);
	 printf("Height:%.2lf cm\n",top[a].height);
	 printf("Weight:%.2lf kg\n",top[a].weight);
       }
     }

     removeAthlete(top);
    break;
  case 6:
    puts("\n\n=================COMPUTATION================\n\n");
    puts(" Please enter computation menu");
    puts(" 1 - Compute Body Mass Index");
    puts(" 2 - Compute Body Fat Percentage");
    puts(" 3 - Exit");
    scanf("%d", &computemenu);
         switch(computemenu){
         case 1:
     for(a=0;a<10;a++){
       if(strlen(top[a].name)>0){
	 printf("\n[%d]\n\nName:%s\n",a,top[a].name);
	 printf("Full name:%s\n",top[a].fullname);
	 printf("Sports:%s\n",top[a].sports);
	 printf("Country:%s\n",top[a].country);
	 printf("Birthday:%s\n",top[a].birthday);
	 printf("Age:%d years old\n",top[a].age);
	 printf("Years in Profession:%d years\n",top[a].years);
	 printf("Height:%.2lf cm\n",top[a].height);
	 printf("Weight:%.2lf kg\n",top[a].weight);
       }
     }
     computeBMI(top);
     break;
         case 2:
            for(a=0;a<10;a++){
       if(strlen(top[a].name)>0){
	 printf("\n[%d]\n\nName:%s\n",a,top[a].name);
	 printf("Full name:%s\n",top[a].fullname);
	 printf("Sports:%s\n",top[a].sports);
	 printf("Country:%s\n",top[a].country);
	 printf("Birthday:%s\n",top[a].birthday);
	 printf("Age:%d years old\n",top[a].age);
	 printf("Years in Profession:%d years\n",top[a].years);
	 printf("Height:%.2lf cm\n",top[a].height);
	 printf("Weight:%.2lf kg\n",top[a].weight);
       }
     }
     computeBFP(top);
     break;
         case 3:
            break;
     default: 
     break;
         }
         
default: break;
  }
  }while(choice1!=99);
  return EXIT_SUCCESS;
}
void removeAthlete(athlete top[]){
      int i, remove;

puts("\n\nInput the entry # of athlete to remove>>");
 scanf("%d", &remove);
for(i = remove; i<20; i++){
  strcpy(top[i].name, top[i+1].name);
  strcpy(top[i].fullname, top[i+1].fullname);
  strcpy(top[i].sports, top[i+1].sports);
  strcpy(top[i].country, top[i+1].country);
  strcpy(top[i].birthday, top[i+1].birthday);
  top[i].age=top[i+1].age;
  top[i].years=top[i+1].years;
  top[i].height=top[i+1].height;
  top[i].weight=top[i+1].weight;
 }
}

void computeBMI(athlete top[])
{
    double bmi;
    int i, computeno;
    puts("\n\nInput the entry # of athlete to compute BMI>>");
 scanf("%d", &computeno);
    for(i=computeno; i<20; i++){
        bmi = ((top[i].weight)/((top[i].height)*(top[i].height)))* 10000;
        printf(" BMI is %.1lf", bmi);
        return;
    }

}
void computeBFP(athlete top[])
{
    double bfp, bmi;
    int i, computeno;
    int gender;
    puts("\n\nInput the entry # of athlete to compute BFP>>");
    scanf("%d", &computeno);
    for(i=computeno; i<20; i++){
        printf("Are you a male or female?\n");
        printf("1 if male");
        printf(" 2 if female");
        printf(" Choice:");
        scanf("%d", &gender);
        if(gender == 1)
        {
        bmi = ((top[i].weight)/((top[i].height)*(top[i].height)))* 10000;
        bfp = (1.20*bmi) + (0.23*top[i].age) - (10.8*0) - 5.4;
        printf(" BFP is %.1lf PERCENT", bfp);
        if((bfp>=2)&&(bfp<=5))
        {
            printf("\nYou're essentially fat!!");
        }
           else if((bfp>=6)&&(bfp<=13))

        {
            printf("\nYour're an athlete!");
        }
            else if((bfp>=14)&&(bfp<=17))
        {
            printf("\nYour're Fit!");
        }
            else if((bfp>=18)&&(bfp<=24))
        {
            printf("\nYour're at Average!!");
        }
        else if(bfp>=25)
        {
            printf("\nYour're Obesed!!");
        }
        }
        else if(gender == 2)
        {
            bmi = ((top[i].weight)/((top[i].height)*(top[i].height)))* 10000;
        bfp = (1.20*bmi) + (0.23*top[i].age) - (10.8*0) - 5.4;
        printf(" BFP is %.1lf%", bfp);
        if((bfp>=10)&&(bfp<=13))
        {
            printf("\nYou're essentially fat!!");
        }
           else if((bfp>=14)&&(bfp<=20))
        {
            printf("\nYour're an athlete!");
        }
            else if((bfp>=21)&&(bfp<=24))
        {
            printf("\nYour're Fit!");
        }
            else if((bfp>=25)&&(bfp<=31))
        {
            printf("\nYour're at Average!!");
        }
        else if(bfp>=32)
        {
            printf("\nYour're Obesed!!");
        }
        }
        else{
            printf("Error!");
        }
    return;
}
}
       

