/**
 * data_storage - this function stores health data,test data, 
 * and treatment data.
 * regi_ster - registers a pat and doctors
 * assign_no - assigned an identifier to use for login.
 * login - login to the system
 */
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

   struct pat{
          char fname[60];
          char phone[15];
          char email[100];
          char home_address[70];
          char disease[30];
          char age[3];
          char password[200];
          char blood_type[4];
          char blood_group[4];
          char compliant[200];
     };
int login(){
     FILE *fp;
     int choice;
     char fname[20],password[200],filename[20];
     struct pat pat1;
     char cont = 'y';
     printf("Enter your first name\t\t");
     scanf("%s",&fname);
     printf("Enter your password\t\t");
     scanf("%s",&password);
     strcpy(filename,fname);
     fp = fopen(strcat(filename, ".txt"), "r");
     if (fp == NULL)
     {
          printf("YOU ARE NOT REGISTERED WITH THIS UNIT");
          printf("REGISTER AN ACCOUNT");
          getch();
          regi_ster();
     }
     else
     {
          fread(&pat1, sizeof(struct pat),1, fp);
          fclose(fp);
          if (!strcmp(password,pat1.password))
          {
               while(cont == 'y')
               {
                    system("cls");
                    printf("************** %s *********************\nYOU ARE WELCOME TO Hx",pat1.fname);
                    printf("WHO ARE YOU?\n\n");
                    printf("1.RESIDENTIAL DOCTOR\n");
                    printf("2.VISITING DOCTOR\n");
                    printf("3.NURSE\n");
                    printf("4.PATIENT\n");
                    printf("5.MEMBER OF BOARD OF DIRECTORS\n");
                    printf("\n\n select : ");
                    scanf("%d",&choice);

                    switch (choice)
                    {
                    case 1:
                         int r_doctor_dashboard();
                         break;
                    case 2:
                         int v_doctor_dashboard();
                         break;
                    case 3:
                         int nurse_dashboard();
                         break;
                    case 4:
                         int pat_dashboard();
                         break;
                    case 5:
                         int m_board_dashboard();
                         break;
                    
                    default:
                         break;
                    }
               }
          }
          else
          {
               system("cls");
               _beep(500,900);
               printf("incorrect password\n");
               printf("try checking your password again");
               getch();
               printf("Re-Enter your password? [y/n]\n");
               scanf("%c",&cont);
               if(cont == 'y')
               {
                    login();
               }
               else
               {
                    welcome_page();
               }
          }
     }

}
int welcome_page()
{
     int choice;
     printf("YOUR ARE WELCOME TO Hx HOSPITALITY\n");
     printf("what do you want to with us today******\n");
     printf("1.REGISTRATION\n");
     printf("2.LOGIN\n");
     printf("3.LOGOUT\n");
     scanf("%d",&choice);
     switch (choice)
     {
     case 1:
          regi_ster();
          break;
     case 2:
          login();
          break;
     case 3:
          EXIT_FAILURE;
          system("cls");
          break;
     
     default:
          break;
     }

}
int regi_ster()
{
  
     char choice;
     FILE *fp;
     char cont = 'y';
     char filename[20];
     struct pat pat1;
     system("cls");
     printf(".....welcome to where your health is our priority....\n");
     printf("proceed with your registeration\n");
     printf("\n\n");
     printf("enter your full name\t\t");
     scanf("%s",&pat1.fname);
     printf("Enter your E-mail\t\t");
     scanf("%s",&pat1.email);
     printf("Enter your phone\t\t");
     scanf("%s",&pat1.phone);
     printf("Enter your password\t\t");
     scanf("%s",&pat1.password);
     printf("Enter your Age\t\t\t");
     scanf("%s",&pat1.age);
     printf("Enter your blood-group\t\t");
     scanf("%s",&pat1.blood_group);
     printf("Enter your blood-type\t\t");
     scanf("%s",&pat1.blood_type);
     printf("Enter your disease\t\t");
     scanf("%s",&pat1.disease);
     printf("in less than 200 words\nplease tell us more about your situation\n");
     scanf("%s",&pat1.compliant);
     strcpy(filename,pat1.fname);
     fp = fopen(strcat(filename,".txt"),"w");
     fwrite(&pat1,sizeof(struct pat), 1, fp);
     fclose(fp);
     if (fwrite != 0)
     {
          system("cls");
          printf("your account registration is successful\n\nremember to save your password securely\n");

          printf("in case you have forgotten your password\n this is your password:*****%s****\n",pat1.password);
          getch();
          printf("do you want to login [0/1]");
          scanf("%d",&choice);
          if (choice == 1)
          {
               login();
          }

     }
     else
     {
          printf("something went wrong dear\ntry again in a moment...");
     }
     fclose(fp);
     getch();
     system("cls");
     welcome_page();
}
int data_storage()
{
     return (0);
}

/***************************************************************\
 * *************PRACTICE MANAGEMENT FUNCTIONS******************\
 * schedule_1 - this takes care of pat treatment scheduling 
 * schedule_2 - takes care of scheduling doctors and nurses
 *              shift
 * bill_init - this iniate a proper amount to be paid by
 *              a pat
 * record_init - this takes pat data and amount to be paid
 *               and send it MEDICAL RECORD;
 * record_init1 - this takes care of doctors and nurses
 *                 attendance.
 * 
*/

int schedule_1(char* pat_name,char d_urgency)
{

}

int schedule_2(char* doc_name,char unit)
{

}

int* bill_init(char* pat_name,char disease, char admitted,int no_days)
{

}
int record_init(char* pat_name,int amount)
{

}
int record_init1()
{

}
/********************************************************************************************************************************/

/****************************************************************************MASTER PAT INDEX*******************************/

/**
 * merge_rec - collect all pat data from different database  and separate into different disease category
 */

int merge_rec()
{

}

/**************PAT AND THE SYSTEM**************************/
/**
 * PAT ADMISSION
 * PAT DISCHARGE
 * PAT APPOINTMENT
 * 

/**
 * COMING SOON .........
 */
