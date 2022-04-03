#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>


struct library
{
char bk_name[30];
char publisher[30];
char Author_Name[40];
int Total_Pages;
char Type_of_Book[50];
float price;
 int Book_ID[20];
};

void printMessageCenter (const char* message)
{
    int len =0;
    int pos = 0;
    //calculate how many space need to print
    len = (78 - strlen(message))/2;
    printf("\t\t\t");
    for(pos =0 ; pos < len ; pos++)
    {
        //print space
        printf(" ");
    }
    //print message
    printf("%s",message);
}
void headMessage(const char *message)
{
    system("cls");
    printf("\t\t\t###########################################################################");
    printf("\n\t\t\t############                                                   ############");
    printf("\n\t\t\t############      Library management System                    ############");
    printf("\n\t\t\t############                                                   ############");
    printf("\n\t\t\t###########################################################################");
    printf("\n\t\t\t---------------------------------------------------------------------------\n");

    printf("\n\t\t\t----------------------------------------------------------------------------");
}



void welcomeMessage()
{
    headMessage("www.aticleworld.com");
    printf("\n\n\n\n\n");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t        =                 WELCOME                   =");
    printf("\n\t\t\t        =                   TO                      =");
    printf("\n\t\t\t        =                 LIBRARY                   =");
    printf("\n\t\t\t        =               MANAGEMENT                  =");
    printf("\n\t\t\t        =                 SYSTEM                    =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\n\n\t\t\t Enter any key to continue.....");
    getch();
}
struct library l[100];
   char pb_nm[30],bk_nm[30];
   char Author_Name[40];
   int i,j, keepcount;
   int i=0;
   int j=0;
   int keepcount = 0;


void Add_Book_Info()
{
    
	printf ("Enter book name = ");
	scanf ("%s",l[i].bk_name);

    
	printf ("Enter Book_ID = ");
	scanf ("%d",l[i].Book_ID);


	
	printf ("Enter Author name = ");
	scanf ("%s",l[i].Author_Name);
	
	
	printf ("Enter publisher name = ");
	scanf ("%s",l[i].publisher);
    

	printf ("Enter price = ");
	scanf ("%f",&l[i].price);   
	keepcount++;

}

void display_Book ()
{
printf("Display All Books Available\n");
	for(i=0;i<keepcount;i++)
	{
	printf ("\n book name = %s",l[i].bk_name);

    printf ("\n Book ID = %d",l[i].Book_ID);
	
	printf ("\t author name = %s",l[i].Author_Name);


	printf ("\t  price = %f",l[i].price);

	}

}

void Highest_price()
{
printf ("Highest Price Book : ");
float temp = 0;
	for (i=0;i<keepcount;i++)
	{
	    if(temp < l[i].price)
	        temp = l[i].price;
	}
	printf("%f", temp);
}

void publisher()
{

printf ("List of Publishers : ");
	for (i=0;i<keepcount;i++)
	{
	    printf ("\n %s ",l[i].publisher);
	}
}



void menu ()
{

while(j!=5)
{
printf("\n\t\t 1. Add book information\n");
printf("\t\t 2. Display All Books Available \n");
printf("\t\t 3. Display Highest Price Book\n");
printf("\t\t 4. Display list of Publishers\n");
printf("\t\t 5. Exit");

printf ("\n\nEnter one of the above : ");
scanf("%d",&j);

switch (j)
{
/* Add book */
case 1:  
   Add_Book_Info();
   break;
case 2:
   display_Book ();
	break;

case 3:
  Highest_price();
	
	break;



case 4:
   publisher();
	break;


case 5:
	exit (0); 
}

}
}



int main()
{

welcomeMessage();    
menu ();


return 0;
}