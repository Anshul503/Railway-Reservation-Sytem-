#include <stdio.h>
#include <stdlib.h>
#include "conio2.h"
#include "rlyres.h"
int main()
{

  int choice;

add_trains();

while(1)

{

choice=enterchoice();
if(choice==9)

{

exit(0);
}
switch(choice)

{

case 1:
clrscr();
view_trains();
clrscr();
break;

case 2:

//book_ticket();
//Passenger  *ptr;
//int ticket_no;

//ptr=get_passenger_details();

clrscr();

Passenger  *ptr;
//int ticket_no;

ptr=get_passenger_details();

if(ptr!=NULL)

{
int ticket_no;

ticket_no=book_ticket(*ptr);

if(ticket_no==-1)

{

textcolor(LIGHTRED);

printf("Booking Failed!");

}

else

{

textcolor(LIGHTGREEN);

printf("Ticket Successfully Booked\nYour ticket no is %d",ticket_no);

}

textcolor(WHITE);

printf("\nPress any key to go back to the main screen");

getch();

clrscr();
}

break;

case 3:

//view_ticket();

clrscr();
int ticket_no;
ticket_no=accept_ticket_no();

if(ticket_no!=0)

view_ticket(ticket_no);

textcolor(WHITE);

printf("\nPress any key to go back to the main screen");

getch();

clrscr();

break;

case 4:

//get_ticket_no();


clrscr();
char *pmob_no;
pmob_no=accept_mob_no();
int pticket_no;

if(pmob_no!=NULL)

{

pticket_no=get_ticket_no(pmob_no);

view_all_tickets(pmob_no,pticket_no);

}

clrscr();


break;

case 5:

clrscr();
view_all_bookings();
clrscr();
break;

case 6:
clrscr();
view_booking();

clrscr();
char *ptrain_no;

ptrain_no=accept_train_no();

if(ptrain_no!=NULL)

view_booking(ptrain_no);

clrscr();

   break;

   case 7:

//cancel_ticket();

clrscr();
int result;


ticket_no=accept_ticket_no();

if(ticket_no!=0)

{

result=cancel_ticket(ticket_no);

if(result==0)

{

textcolor(LIGHTRED);

printf("Sorry! No tickets booked against ticket no %d",ticket_no);

}

else if(result==1)

{

textcolor(LIGHTGREEN);

printf("Ticket no %d successfully cancelled!",ticket_no);

}

textcolor(WHITE);

printf("\n\nPress any key to go back to the main screen");

}

getch();

clrscr();

break;


case 8:

//cancel_train(char *);
  // break;


   clrscr();
int res;
char  *train_no;

//ticket_no=cancel_train();

//if(ticket_no!=0)

//{

train_no=accept_train_no();

if(train_no!=0)
{


res=cancel_train(train_no);

if(res==0)

{

textcolor(LIGHTRED);

printf("Sorry!,their are no trains against train no. %d",train_no);

}


else if(res==1)

{

textcolor(LIGHTGREEN);

printf("Train no %d successfully cancelled!",train_no);

}

textcolor(WHITE);

printf("\n\nPress any key to go back to the main screen");

}

getch();

clrscr();

break;



}

}



}
