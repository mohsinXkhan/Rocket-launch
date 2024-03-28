#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <dos.h>

int main() {
    char ch;
    int gdriver = DETECT, gmode, errorcode;

    initgraph(&gdriver, &gmode, "C:\\Turboc3\\BGI");
    int screenWidth = getmaxx();
    int screenHeight = getmaxy();

    setcolor(WHITE);
    settextstyle(2, 0, 9);
    outtextxy(130, 100, "Rocket Launch Animation");
	settextstyle(2, 0, 8);
    outtextxy(200, 150, "By: Mohsin Khan");
    outtextxy(200, 200, "By: Taqi Khan");
    outtextxy(200, 250, "By: Yuvraj Kadam");

    settextstyle(3, 0, 1);
    outtextxy(190, 350, "Press 'Y' to start.");

     ch = getch();
    if (ch == 'y' || ch == 'Y')
    { 
	setbkcolor(BLACK);
	cleardevice();
	setcolor(4);
	settextstyle(8, 0, 8);
	for (int i = 10; i > 0; i--)
	{
	    char result[50];
	int textWidth1 = textwidth("T - 9");
	int textHeight1 = textheight("T - 9");
	int centerX1 = (screenWidth - textWidth1) / 2;
	int centerY1 = (screenHeight - textHeight1) / 2;
	    sprintf(result, "T - %d", i);
	    outtextxy(centerX1, centerY1, result);
	    delay(1000);
	    cleardevice();
	}
	}

	settextstyle(0, 0, 6);
	int textWidth2 = textwidth("LIFT-OFF!");
	int textHeight2 = textheight("LIFT-OFF!");
	int centerX2 = (screenWidth - textWidth2) / 2;
	int centerY2 = (screenHeight - textHeight2) / 2;
	setbkcolor(BLACK);
	outtextxy(centerX2, centerY2, "LIFT-OFF!");
	delay(1000);

	cleardevice();
      
	////******************LAUNCH***************
	//int page=0;
    for (int i = 1; i <= 300; i++)
        {
            //setactivepage(page);
            //setvisualpage(1 - page);
            //rocket body
            setcolor(15);
            setfillstyle(1, 15);
            line(280, 130 - i, 320, 130 - i);
            line(320, 130 - i, 320, 300 - i);
            line(320, 300 - i, 280, 300 - i);
            line(280, 300 - i, 280, 130 - i);
            floodfill(281, 131 - i, 15);
            //booster 1
            setcolor(8);
            setfillstyle(1, 8);
            line(250, 190 - i, 280, 190 - i);
	    line(280, 190 - i, 280, 300 - i);
	    line(280, 300 - i, 250, 300 - i);
	    line(250, 300 - i, 250, 190 - i);
	    floodfill(251, 191 - i, 8);
	    //booster 2
	    line(320, 190 - i, 350, 190 - i);
	    line(350, 190 - i, 350, 300 - i);
	    line(350, 300 - i, 320, 300 - i);
	    line(320, 300 - i, 320, 190 - i);
	    floodfill(321, 191 - i, 8);
	    // body cone
	    setcolor(9);
	    setfillstyle(6, 9);
	    sector(300, 70 - i, 250, 290, 65, 65);
	    // booster 1 cone
	    sector(265, 150 - i, 250, 290, 45, 45);
	    // booster 2 cone
	    sector(335, 150 - i, 250, 290, 45, 45);
	    //ISRO
	    setcolor(BLUE);
	    settextstyle(1, 0, 1);
	    outtextxy(295, 180 - i, "I");
	    outtextxy(292, 210 - i, "S");
	    outtextxy(290, 240 - i, "R");
	    outtextxy(290, 270 - i, "O");
	    // moon
	    setcolor(15);
	    setfillstyle(1, 15);
	    circle(550, 50, 20);
	    floodfill(550, 50, 15);
	    //body flames
	    setcolor(14);
	    setfillstyle(1, 14);
	    circle(300, 323 - i, 33);
	    floodfill(300, 323 - i, 14);
	    circle(300, 360 - i, 25);
	    floodfill(300, 360 - i, 14);
	    circle(300, 390 - i, 15);
	    floodfill(300, 390 - i, 14);
	    //booster 1 flames
	    circle(265, 310 - i, 20);
	    floodfill(265, 310 - i, 14);
	    circle(265, 335 - i, 12);
	    floodfill(265, 335 - i, 14);
	    circle(265, 350 - i, 8);
	    floodfill(265, 350 - i, 14);
	    //booster 2 flames
	    circle(335, 310 - i, 20);
	    floodfill(335, 310 - i, 14);
	    circle(335, 335 - i, 12);
	    floodfill(335, 335 - i, 14);
	    circle(335, 350 - i, 8);
	    floodfill(335, 350 - i, 14);
	    //ground
	    setcolor(2);
	    setfillstyle(1, 2);
	    line(0, 400 + i, 800, 400 + i);
	    line(800, 400 + i, 800, 800 + i);
	    line(800, 800 + i, 0, 800 + i);
	    line(0, 800 + i, 0, 400 + i);
	    floodfill(1, 401 + i, 2);
	    //rocket support
	    setcolor(4);
	    setfillstyle(1, 4);
	    line(210, 200 + i, 225, 200 + i);
	    line(225, 200 + i, 225, 400 + i);
	    line(225, 400 + i, 210, 400 + i);
	    line(210, 400 + i, 210, 200 + i);
	    floodfill(211, 201 + i, 4);
		
	    cleardevice();
        delay(10);
        //page=1-page;
        } 
		
		////*******************DEPLOY******************
        setbkcolor(BLACK);
        cleardevice();
        for (int j = 0; j < 300; j++)
        {
            setfillstyle(1, 15);
            bar(280, 130, 320, 300); //rocket body
            setfillstyle(1, 8);
            if (j < 50)
            {
                bar(250 - j, 190 + j, 280 - j, 300 + j); //booster 1
                bar(320 + j, 190 + j, 350 + j, 300 + j); //booster 2
                setcolor(9);
                setfillstyle(6, 9);
                //booster 1 cone
                sector(265 - j, 150 + j, 250, 290, 45, 45);
                //booster 2 cone
                sector(335 + j, 150 + j, 250, 290, 45, 45);
                //booster 1 flames
                setcolor(14);
                setfillstyle(1, 14);
                circle(265 - j, 310 + j, 20);
                floodfill(265 - j, 310 + j, 14);
                circle(265 - j, 335 + j, 12);
                floodfill(265 - j, 335 + j, 14);
                //booster 2 flames
                circle(335 + j, 310 + j, 20);
                floodfill(335 + j, 310 + j, 14);
                circle(335 + j, 335 + j, 12);
                floodfill(335 + j, 335 + j, 14);
            }
            else if (j >= 50 && j < 100)
            {
                j = j - 50;
                bar(200 - (j / 2), 240 + j, 230 - (j / 2), 350 + j); //booster 1
                bar(370 + (j / 2), 240 + j, 400 + (j / 2), 350 + j); //booster 2
                setcolor(9);
                setfillstyle(6, 9);
                //booster 1 cone
                sector(215 - (j / 2), 200 + j, 250, 290, 45, 45);
                //booster 2 cone
                sector(385 + (j / 2), 200 + j, 250, 290, 45, 45);
                setcolor(14);
                //booster 1 flames
                setfillstyle(1, 14);
                circle(215 - (j / 2), 360 + j, 20);
                floodfill(215 - (j / 2), 360 + j, 14);
                //booster 2 flames
                circle(385 + (j / 2), 360 + j, 20);
                floodfill(385 + (j / 2), 360 + j, 14);
                j = j + 50;
            }
            else
            {
                j = j - 100;
                bar(175, 290 + j, 205, 400 + j); //booster 1
                bar(395, 290 + j, 425, 400 + j); //booster 2
                setcolor(9);
                setfillstyle(6, 9);
                //booster 1 cone
                sector(190, 250 + j, 250, 290, 45, 45);
                //booster 2 cone
                sector(410, 250 + j, 250, 290, 45, 45);
                j = j + 100;
            }
            // body cone
            setcolor(9);
            setfillstyle(6, 9);
            sector(300, 70, 250, 290, 65, 65);
            setcolor(14);
            setfillstyle(1, 14);
            circle(300, 360, 25);
            floodfill(300, 360, 14);
            circle(300, 390, 15);
            floodfill(300, 390, 14);
            //ISRO
            setcolor(BLUE);
            settextstyle(1, 0, 1);
            outtextxy(295, 180, "I");
            outtextxy(292, 210, "S");
            outtextxy(290, 240, "R");
            outtextxy(290, 270, "O");
            setcolor(14);
            setfillstyle(1, 14);
            circle(300, 323, 33);
            floodfill(300, 323, 14);
            //stars
            setcolor(WHITE);
            setfillstyle(1, 15);
            circle(600, 400 + j, 2);
            floodfill(600, 400 + j, 15);
            circle(100, 200 + j, 2);
            floodfill(100, 200 + j, 15);
            circle(200, 600 + j, 2);
            floodfill(200, 600 + j, 15);
            circle(400, 100 + j, 2);
            floodfill(400, 100 + j, 15);
            circle(700, 300 + j, 2);
            floodfill(700, 300 + j, 15);
            circle(100, j, 2);
            floodfill(100, j, 15);
            circle(200, -100 + j, 2);
            floodfill(200, -100 + j, 15);
            circle(750, 100 + j, 2);
            floodfill(750, 100 + j, 15);
            circle(450, -200 + j, 2);
            floodfill(450, -200 + j, 15);
            delay(20);
            cleardevice();
        }

        //********************IN SPACE************************
	for (int k = 0; k < 200; k++)
        {
            setcolor(BLUE);
            circle(200 - k, 400 + k, 135 - (k / 2));
            setfillstyle(1, 1);
            floodfill(200 - k, 400 + k, 1);
            int arr1[] = {320, 250, 440, 130, 460, 150, 340, 270, 320, 250}; //body
            setfillstyle(1, 15);
            fillpoly(4, arr1);
            setcolor(9);
            setfillstyle(6, 9);
            sector(480, 110, 205, 245, 45, 45); //body cone
            //body flames
            setcolor(14);
            setfillstyle(1, 14);
            circle(330, 260, 18);
            floodfill(330, 260, 14);
            circle(312, 278, 10);
            floodfill(312, 278, 14);
            circle(302, 288, 5);
            floodfill(302, 288, 14);
            //stars
            setcolor(15);
            setfillstyle(1, 15);
            circle(650 - k, 50 + k, 3);
            floodfill(650 - k, 50 + k, 15);
            circle(400 - k, 100 + k, 2);
            floodfill(400 - k, 100 + k, 15);
            circle(500 - k, 300 + k, 1);
            floodfill(500 - k, 300 + k, 15);
            circle(100 - k, 100 + k, 4);
            floodfill(100 - k, 100 + k, 15);
            circle(700 - k, 500 + k, 2);
            floodfill(700 - k, 500 + k, 15);
            circle(200 - k, 700 + k, 2);
            floodfill(200 - k, 700 + k, 15);
            circle(400 - k, 650 + k, 1);
            floodfill(400 - k, 650 + k, 15);
            circle(900 - k, 200 + k, 3);
            floodfill(900 - k, 200 + k, 15);
            circle(900 - k, 550 + k, 3);
            floodfill(900 - k, 550 + k, 15);
            circle(800 - k, 300 + k, 2);
            floodfill(800 - k, 300 + k, 15);
            circle(400 - k, -100 + k, 1);
            floodfill(400 - k, -100 + k, 15);
            circle(600 - k, 600 + k, 2);
            floodfill(600 - k, 600 + k, 15);
            //moon
            circle(800 - k, -150 + k, 20);
            floodfill(800 - k, -150 + k, 15);
            delay(30);
            cleardevice();
        }

        //******************LANDING*****************
        setbkcolor(BLACK);
        cleardevice();
        for (int m = 0; m < 240; m++)
        {
	    if (m < 200)
            {
                setfillstyle(1, 15);
                bar(280, 130 + m, 320, 300 + m);
                setcolor(9);
                setfillstyle(6, 9);
		sector(300, 70 + m, 250, 290, 65, 65);
                setcolor(14);
                setfillstyle(1, 14);
                circle(300, 310 + m, 30 - (m / 10));
                floodfill(300, 310 + m, 14);
                setcolor(BLUE);
                settextstyle(1, 0, 1);
                outtextxy(295, 150 + m, "I");
                outtextxy(292, 180 + m, "S");
                outtextxy(290, 210 + m, "R");
                outtextxy(290, 240 + m, "O");
            }
            else
            {
                setcolor(9);
                setfillstyle(6, 9);
                sector(300, 270, 250, 290, 65, 65);
                setfillstyle(1, 15);
                bar(280, 330, 320, 500);
                setcolor(BLUE);
                settextstyle(1, 0, 1);
                outtextxy(295, 350, "I");
                outtextxy(292, 380, "S");
                outtextxy(290, 410, "R");
                outtextxy(290, 440, "O");
                setcolor(2);
                settextstyle(0, 0, 4);
                outtextxy(100, 200, "MISSION SUCCESS!");
                delay(100);
	    }
            delay(20);
            cleardevice();
        }
  
    
	 
    closegraph();
    return 0;
}
