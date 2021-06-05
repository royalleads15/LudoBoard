#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{

  int gd=0,gm,i,j=0;
  initgraph(&gd,&gm,"");
  if(j==0)
  {
	gotoxy(600,360);
	printf("ADITYA DUBEY");
	j++;
  }
  setcolor(BLUE);
  rectangle(10,250,160,360);  //BLUE RECTANGLE
  setfillstyle(SOLID_FILL,BLUE);
  floodfill(15,256,BLUE);
  setcolor(YELLOW);
  rectangle(10,60,160,170);   //YELLOW
  setfillstyle(SOLID_FILL,YELLOW);
  floodfill(15,65,YELLOW);
  setcolor(RED);
  rectangle(250,60,400,170); //RED
  setfillstyle(SOLID_FILL,RED);
  floodfill(255,66,RED);
  setcolor(GREEN);
  rectangle(250,360,400,250); //GREEN
  setfillstyle(SOLID_FILL,GREEN);
  floodfill(255,260,GREEN);


  setcolor(RED);
  line(190,60,190,170);   //RED HOME LINE
  line(218,60,218,170);
  setcolor(BLUE);
  line(190,250,190,360); //BLUE HOME LINE
  line(218,250,218,360);
  setcolor(WHITE);
  line(160,360,250,360); //BLUE AND GREEN BRACKETS TOUCH FROM OUTSIDE
  line(10,171,10,250);   //BLUE AND YELLLOW .......................
  line(160,60,250,60);   //YELLOW AND RED.......................
  line(400,170,400,250); //RED AND GREEN............
  setcolor(YELLOW);
  line(10,198,160,198); //YELLOW HOME LINE
  line(10,224,160,224);
  setcolor(GREEN) ;
  line(250,198,400,198); //  GREEN HOME LINE
  line(250,224,400,224);
  setcolor(WHITE);
  line(160,250,250,250);  //BLUE AND GREEN BRACKETS TOUCH FROM INSIDE
  line(160,170,250,170); //YELLOW AND RED..............
  line(160,170,160,250);//BLUE AND YELLOW...............
  line(250,170,250,250);//RED AND GREEN..............
  line(160,170,250,250);//DIAGONAL LINE BLUE TO RED
  line(160,250,250,170);//.............GREEN TO YELLOW
  for(i=340;i>=260;i-=18)
    {
    rectangle(160,i,250,i);   //HOME LINE
    setcolor(WHITE);
    }
  for(i=135;i>=10;i-=26)
    rectangle(i,250,i,170);//HOME LINE OF LEFT SIDE
  for(i=154;i>=60;i-=19)
    rectangle(160,i,250,i);   //UPPER HOME LINE
  for(i=376;i>=270;i-=25)
    rectangle(i,170,i,250);
  setcolor(BLACK);
  setfillstyle(SOLID_FILL,BLACK);              //BLUE BRACKET
  circle(45,284,14);                               //....
  circle(45,327,14);                                     //..
  circle(105,284,14);                                        //...
  circle(105,327,14);
  for(i=48;i<=150;i+=63)   //YELLOW BRACKET
  {   circle(i,95,14);
      circle(i,137,14);
  }
  for(i=290;i<=400;i+=63)        //RED BRACKET
  {
   circle(i,90,14);
   circle(i,133,14);
  }
  for(i=297;i<=400;i+=63)       //GREEN BRACKET
  {
   circle(i,287,14);
   circle(i,328,14);
  }
  getch();
  closegraph();
}