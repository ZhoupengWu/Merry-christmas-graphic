#include <winbgim.h>
#include <iostream> 
using namespace std; 

int main(int argc, char *argv[]) {
initwindow(1700, 1050);
int maxX=getmaxx();
int maxY=getmaxy();

for(int x=0;x<=maxX;x++){ 
    line(x,0,x,maxY);
	setcolor(COLOR(255,0,0));
}

setcolor(COLOR(0,0,0));


/* BUON */

delay(2000);
line(300,100,300,400);
arc(300,175,270,90,75);
arc(300,325,270,90,75);

delay(600);
arc(600,250,180,0,150);
line(450,249,450,100);		
line(749,248,749,100);

delay(600);    
circle(985,250,150);

delay(600);	    
line(1200,100,1200,400);	
line(1200,100,1350,400);	
line(1350,400,1350,100);		


/* NATALE */

delay(600);
line(100,600,100,900);
line(100,600,250,900);
line(250,900,250,600);

delay(600);	
line(300,750,500,750);
arc(400,700,0,181,100);
line(300,700,300,900);
line(500,700,500,900);

delay(600);
line(550,600,750,600);
line(650,600,650,900);

delay(600);
line(800,750,1000,750);
arc(900,700,0,181,100);
line(800,700,800,900);
line(1000,700,1000,900);

delay(600);
line(1050,600,1050,900);
line(1050,900,1250,900);

delay(600);
line(1300,600,1300,900);
line(1300,600,1500,600);
line(1300,750,1500,750);
line(1300,900,1500,900);

while(!kbhit()) delay(1);
}