#include <bits/stdc++.h>
#include<GL/gl.h>
#include <GL/glut.h>
#include<windows.h>
#include<cstdio>


using namespace std;

//variables
int currentDisplay = 1;
float move_gate_1=0.0f;
float move_gate_2=0.0f;
float move_gate_3=0.0f;
float move_gate_4=0.0f;
float move_gate_5=0.0f;
float move_gate_6=0.0f;
float move_gate_7=0.0f;
float move_gate_8=0.0f;

float move_ship_x=0;
float move_ship_y=0;

float move_water_1=0;
float move_water_2=0;
float move_water_3=0;
float move_water_4=0;
float move_water_5=0;
float move_water_6=0;
float move_water_7=0;

bool up_1=false;
bool down_1=false;
bool up_2=false;
bool down_2=false;
bool up_3=false;
bool down_3=false;
bool up_4=false;
bool down_4=false;
bool up_5=false;
bool down_5=false;
bool up_6=false;
bool down_6=false;
bool up_7=false;
bool down_7=false;
bool up_8=false;
bool down_8=false;

bool canal_1=false;
bool canal_2=false;
bool canal_3=false;
bool canal_4=false;
bool canal_5=false;
bool canal_6=false;
bool canal_7=false;


// functions
void FIRST_GATE()
{

    // ***************************1ST***** GATE LEFT PART

    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);
    glVertex2d(-25,-4);
    glVertex2d(-24.75,-4);
    glVertex2d(-24.75,.50);
    glVertex2d(-25,.50);
    glEnd();

    //*****1ST GATE RIGHT PART******
    glBegin(GL_POLYGON);
    glColor3ub(229, 231, 233);
    glVertex2d(-24.75,-4);
    glVertex2d(-24.50,-4);
    glVertex2d(-24.50,.50);
    glVertex2d(-24.75,.50);
    glEnd();

    //******** STRIPE PART COLOR****




    glPushMatrix();
    glTranslatef(0,move_gate_1,0);


    glBegin(GL_POLYGON);
    glColor3ub(181, 151, 106);

    glVertex2d(-24.75,-1.75);
    glVertex2d(-24.50,-1.75);
    glVertex2d(-24.50,.50);
    glVertex2d(-24.75,.50);

    glEnd();



    // STRIPE LINE
    glBegin(GL_LINES);
    glColor3ub(0,0,0);





    glVertex2d(-24.50,-1.75);
    glVertex2d(-24.75,-1.75);

    glVertex2d(-24.50,-1.50);
    glVertex2d(-24.75,-1.50);

    glVertex2d(-24.50,-1.25);
    glVertex2d(-24.75,-1.25);

    glVertex2d(-24.50,-1);
    glVertex2d(-24.75,-1);

    glVertex2d(-24.50,-.75);
    glVertex2d(-24.75,-.75);

    glVertex2d(-24.50,-.50);
    glVertex2d(-24.75,-.50);

    glVertex2d(-24.50,-.25);
    glVertex2d(-24.75,-.25);

    glVertex2d(-24.50,-0);
    glVertex2d(-24.75,-0);

    glVertex2d(-24.50,0.25);
    glVertex2d(-24.75,0.25);

    glVertex2d(-24.50,0.50);
    glVertex2d(-24.75,0.50);
    glEnd();



    // STRIPE LINE BORDER


    glBegin(GL_LINES);
    glColor3ub(0,0,0);

    glVertex2d(-24.50,-1.75);
    glVertex2d(-24.50,.5);

    glVertex2d(-24.75,-1.75);
    glVertex2d(-24.75,.5);

    glEnd();

    glPopMatrix();



}

void upgate1_down(int value)
{
    if(down_1==true)
    {

         move_gate_1-=0.1;

    if(move_gate_1<-2.25)
    {
        move_gate_1=-2.25;
        down_1=false;

    }
    }



glutPostRedisplay();
glutTimerFunc(25, upgate1_down, 0);
}

void upgate1_up(int value)
{
    //move_gate_1 +=0.3;

    if(up_1==true)
    {
        move_gate_1+=0.1;

    if(move_gate_1>.25)
    {
        move_gate_1=.25;
        up_1=false;
    }

    }





    glutPostRedisplay();
glutTimerFunc(25, upgate1_up, 0);

}

void SECOND_GATE()
{

     //*******************************2ND***** GATE PART

    glBegin(GL_POLYGON);
    glColor3ub(102,51,0);

    glVertex2d(-21,-4);
    glVertex2d(-20.75,-4);
    glVertex2d(-20.75,+2);
    glVertex2d(-21,+2);

    glEnd();


    //***RIGHT GATE RIGHT PART***

    glBegin(GL_POLYGON);
    glColor3ub(215, 219, 221);

    glVertex2d(-20.75,-4);
    glVertex2d(-20.50,-4);
    glVertex2d(-20.50,2);
    glVertex2d(-20.75,2);

    glEnd();


    glPushMatrix();
    glTranslatef(0,move_gate_2,0);


    //STRIPE PART COLOR

    glBegin(GL_POLYGON);
    glColor3ub(181, 151, 106);

    glVertex2d(-20.75,-1);
    glVertex2d(-20.50,-1);
    glVertex2d(-20.50,2);
    glVertex2d(-20.75,2);

    glEnd();


    //STRIPE LINE

    glBegin(GL_LINES);
    glColor3ub(0,0,0);

    glVertex2d(-20.75,-1);
    glVertex2d(-20.50,-1);

    glVertex2d(-20.75,-.75);
    glVertex2d(-20.50,-.75);

    glVertex2d(-20.75,-.50);
    glVertex2d(-20.50,-.50);

    glVertex2d(-20.75,-.25);
    glVertex2d(-20.50,-.25);


    glVertex2d(-20.75,-0);
    glVertex2d(-20.50,-0);

    glVertex2d(-20.75,.25);
    glVertex2d(-20.50,.25);

    glVertex2d(-20.75,.50);
    glVertex2d(-20.50,.50);


    glVertex2d(-20.75,.75);
    glVertex2d(-20.50,.75);

    glVertex2d(-20.75,1);
    glVertex2d(-20.50,1);

    glVertex2d(-20.75,1.25);
    glVertex2d(-20.50,1.25);

    glVertex2d(-20.75,1.5);
    glVertex2d(-20.50,1.5);

    glVertex2d(-20.75,1.75);
    glVertex2d(-20.50,1.75);

    glVertex2d(-20.75,2);
    glVertex2d(-20.50,2);


    glEnd();


    //STRIPE LINE BORDER

    glBegin(GL_LINES);
    glColor3ub(0,0,0);

    glVertex2d(-20.75,-1);
    glVertex2d(-20.75,2);

    glVertex2d(-20.50,-1);
    glVertex2d(-20.50,2);

    glEnd();

    glPopMatrix();



}

void upgate2_down(int value)
{
    if(down_2==true)
    {

         move_gate_2-=0.1;

    if(move_gate_2<-3)
    {
        move_gate_2=-3;
        down_2=false;

    }
    }



glutPostRedisplay();
glutTimerFunc(25, upgate2_down, 0);
}

void upgate2_up(int value)
{
    if(up_2==true)
    {
        move_gate_2+=.1;
        if(move_gate_2>.1)
        {
            move_gate_2=.1;
            up_2=false;
        }
    }
    glutPostRedisplay();
glutTimerFunc(25, upgate2_up, 0);
}

void sewage_canal_1()
{
    glBegin(GL_POLYGON);
    glColor3ub(179, 182, 183);



    //*****************************LOWER FLOOR PART ********
    glVertex2d(-26,-4);
    glVertex2d(-26,-4.25);
    glVertex2d(-20.50,-4.25);
    glVertex2d(-20.50,-4);
    glEnd();

    //BOLD PART
    glBegin(GL_POLYGON);
    glColor3ub(98, 101, 103);
    glVertex2d(-25,-4);
    glVertex2d(-25,-4.25);
    glVertex2d(-24.50,-4.25);
    glVertex2d(-24.50,-4);
    glEnd();

    //BOLD PART
    glBegin(GL_POLYGON);
    glColor3ub(98, 101, 103);
    glVertex2d(-21,-4);
    glVertex2d(-21,-4.25);
    glVertex2d(-20.50,-4.25);
    glVertex2d(-20.50,-4);
    glEnd();




    //************************WATER PART******************

    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255 );

    glVertex2d(-24.50,-2);
    glVertex2d(-24.50,-4);
    glVertex2d(-21,-4);
    glVertex2d(-21,-2);

    glEnd();





    //************************ moving water*************************



    glPushMatrix();
    glTranslatef(0,move_water_1,0);
    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255);


    glVertex2d(-24.50,-2);
    glVertex2d(-24.50,-4);
    glVertex2d(-21,-4);
    glVertex2d(-21,-2);

    glEnd();
    glPopMatrix();

    //FIRST_GATE();
    //SECOND_GATE();

}

void canal1_up(int value)
{
    //move_gate_1 +=0.3;

    if(canal_1==true)
    {
        move_water_1+=0.1;
        move_ship_y +=.1;

    if(move_water_1>2)
    {
        move_water_1=2;
        canal_1=false;
    }

    }





    glutPostRedisplay();
glutTimerFunc(40, canal1_up, 0);

}

void THIRD_GATE()
{
     //******************3RD GATE LEFT PART

    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);

    glVertex2d(-16,-3);
    glVertex2d(-15.75,-3);
    glVertex2d(-15.75,5);
    glVertex2d(-16,5);

    glEnd();


    //******************3RD GATE RIGHT PART

    glBegin(GL_POLYGON);
    glColor3ub(229, 231, 233);

    glVertex2d(-15.75,-3);
    glVertex2d(-15.50,-3);
    glVertex2d(-15.50,3);
    glVertex2d(-15.75,3);

    glEnd();


    //******** STRIPE PART COLOR****

    glPushMatrix();
    glTranslatef(0,move_gate_3,0);

    glBegin(GL_POLYGON);
    glColor3ub(181, 151, 106);

    glVertex2d(-15.75,1.50);
    glVertex2d(-15.50,1.50);
    glVertex2d(-15.50,5);
    glVertex2d(-15.75,5);

    glEnd();

    //*************** STRIPE LINE
    glBegin(GL_LINES);
    glColor3ub(0,0,0);

    glVertex2d(-15.50,1.5);
    glVertex2d(-15.75,1.5);

    glVertex2d(-15.5,1.75);
    glVertex2d(-15.75,1.75);

    glVertex2d(-15.5,2);
    glVertex2d(-15.75,2);

    glVertex2d(-15.5,2.25);
    glVertex2d(-15.75,2.25);

    glVertex2d(-15.5,2.5);
    glVertex2d(-15.75,2.5);

    glVertex2d(-15.5,2.75);
    glVertex2d(-15.75,2.75);

    glVertex2d(-15.5,3);
    glVertex2d(-15.75,3);

    glVertex2d(-15.5,3.25);
    glVertex2d(-15.75,3.25);

    glVertex2d(-15.5,3.5);
    glVertex2d(-15.75,3.5);

    glVertex2d(-15.5,3.75);
    glVertex2d(-15.75,3.75);

    glVertex2d(-15.5,4);
    glVertex2d(-15.75,4);

    glVertex2d(-15.5,4.25);
    glVertex2d(-15.75,4.25);

    glVertex2d(-15.5,4.5);
    glVertex2d(-15.75,4.5);

    glVertex2d(-15.5,4.75);
    glVertex2d(-15.75,4.75);

    glVertex2d(-15.5,5);
    glVertex2d(-15.75,5);

    glEnd();


    //STRIPE LINE BORDER

    glBegin(GL_LINES);
    glColor3ub(0,0,0);

    glVertex2d(-15.75,1.5);
    glVertex2d(-15.75,5);

    glVertex2d(-15.5,1.5);
    glVertex2d(-15.5,5);

    glEnd();

    glPopMatrix();

}

void upgate3_down(int value)
{
    if(down_3==true)
    {

         move_gate_3-=0.1;

    if(move_gate_3<-4.5)
    {
        move_gate_3=-4.5;
        down_3=false;

    }
    }



glutPostRedisplay();
glutTimerFunc(25, upgate3_down, 0);

}

void upgate3_up(int value)
{
    if(up_3==true)
    {
        move_gate_3+=.1;
        if(move_gate_3>.1)
        {
            move_gate_3=.1;
            up_3=false;
        }
    }
    glutPostRedisplay();
glutTimerFunc(25, upgate3_up, 0);
}

void sewage_canal_2()
{

    //*******************%%&%&%&%&%&%&%&%&%&%&% 2ND SWEAGE GATE**********************


    // ***************LOWER FLOOR PART
    glBegin(GL_POLYGON);
    glColor3ub(179, 182, 183);
    glVertex2d(-20.50,-3.25);
    glVertex2d(-15.50,-3.25);
    glVertex2d(-15.50,-3);
    glVertex2d(-20.50,-3);
    glEnd();

    //****BOLD PART*********

    glBegin(GL_POLYGON);
    glColor3ub(98, 101, 103);

    glVertex2d(-16,-3.25);
    glVertex2d(-15.50,-3.25);
    glVertex2d(-15.50,-3);
    glVertex2d(-16,-3);

    glEnd();





    //************************WATER PART******************

    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255 );
    glVertex2d(-20.5,0);
    glVertex2d(-20.5,-3);
    glVertex2d(-16,-3);
    glVertex2d(-16,-0);

    glEnd();



    //**********************************MOVING WATER************************

    glPushMatrix();
    glTranslatef(0,move_water_2,0);
    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255);

    glVertex2d(-20.5,0);
    glVertex2d(-20.5,-3);
    glVertex2d(-16,-3);
    glVertex2d(-16,-0);

    glEnd();
    glPopMatrix();


   // THIRD_GATE();



}

void canal2_up(int value)
{
    //move_gate_1 +=0.3;

    if(canal_2==true)
    {
        move_water_2+=0.1;
        move_ship_y +=.1;

    if(move_water_2>2)
    {
        move_water_2=2;
        canal_2=false;
    }

    }

    glutPostRedisplay();
glutTimerFunc(40, canal2_up, 0);

}

void fourth_gate()
{
    //LEFT PART

    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);

    glVertex2d(-9,-2);
    glVertex2d(-8.75,-2);
    glVertex2d(-8.75,9);
    glVertex2d(-9,9);
    glEnd();


    //RIGHT PART

    glBegin(GL_POLYGON);
    glColor3ub(229, 231, 233);

    glVertex2d(-8.75,-2);
    glVertex2d(-8.50,-2);
    glVertex2d(-8.50,9);
    glVertex2d(-8.75,9);
    glEnd();

    //stripe part color

    glPushMatrix();
    glTranslatef(0,move_gate_4,0);


    glBegin(GL_POLYGON);
    glColor3ub(181, 151, 106);

    glVertex2d(-8.75,3.50);
    glVertex2d(-8.50,3.50);
    glVertex2d(-8.50,9);
    glVertex2d(-8.75,9);
    glEnd();

    //stripe line

    glBegin(GL_LINES);
    glColor3ub(0,0,0);

    glVertex2d(-8.75,3.50);
    glVertex2d(-8.50,3.50);

    glVertex2d(-8.75,3.75);
    glVertex2d(-8.50,3.75);

    glVertex2d(-8.75,4);
    glVertex2d(-8.50,4);

    glVertex2d(-8.750,4.25);
    glVertex2d(-8.50,4.25);

    glVertex2d(-8.750,4.5);
    glVertex2d(-8.50,4.5);

    glVertex2d(-8.750,4.75);
    glVertex2d(-8.50,4.75);

    glVertex2d(-8.750,5);
    glVertex2d(-8.50,5);

    glVertex2d(-8.750,5.25);
    glVertex2d(-8.50,5.25);

    glVertex2d(-8.750,5.5);
    glVertex2d(-8.50,5.5);

    glVertex2d(-8.750,5.75);
    glVertex2d(-8.50,5.75);

    glVertex2d(-8.750,6);
    glVertex2d(-8.50,6);

    glVertex2d(-8.750,6.25);
    glVertex2d(-8.50,6.25);

    glVertex2d(-8.750,6.5);
    glVertex2d(-8.50,6.5);

    glVertex2d(-8.750,6.75);
    glVertex2d(-8.50,6.75);

    glVertex2d(-8.750,7);
    glVertex2d(-8.50,7);

    glVertex2d(-8.750,7.25);
    glVertex2d(-8.50,7.25);

    glVertex2d(-8.750,7.5);
    glVertex2d(-8.50,7.5);

    glVertex2d(-8.750,7.75);
    glVertex2d(-8.50,7.75);

    glVertex2d(-8.750,8);
    glVertex2d(-8.50,8);

    glVertex2d(-8.750,8.25);
    glVertex2d(-8.50,8.25);

    glVertex2d(-8.750,8.5);
    glVertex2d(-8.50,8.5);

    glVertex2d(-8.750,8.75);
    glVertex2d(-8.50,8.75);

    glVertex2d(-8.750,9);
    glVertex2d(-8.5,9);
    glEnd();

    //STRIPE LINE BORDER

    glBegin(GL_LINES);
    glColor3ub(0,0,0);

    glVertex2d(-8.75,3.50);
    glVertex2d(-8.75,9);

    glVertex2d(-8.5,3.50);
    glVertex2d(-8.5,9);
    glEnd();

    glPopMatrix();

}

void upgate4_down(int value)
{
    if(down_4==true)
    {

         move_gate_4-=0.1;

    if(move_gate_4<-5.5)
    {
        move_gate_4=-5.5;
        down_4=false;

    }
    }



glutPostRedisplay();

glutTimerFunc(25, upgate4_down, 0);

}

void upgate4_up(int value)
{
    if(up_4==true)
    {
        move_gate_4+=.1;
        if(move_gate_4>.1)
        {
            move_gate_4=.1;
            up_4=false;
        }
    }
    glutPostRedisplay();
glutTimerFunc(25, upgate4_up, 0);
}

void sewage_canal_3()
{
    //lower part

    glBegin(GL_POLYGON);
   glColor3ub(179, 182, 183);

   glVertex2d(-15.50,-2);
   glVertex2d(-15.50,-2.25);
   glVertex2d(-9,-2.25);
   glVertex2d(-9,-2);
   glEnd();



   //BOLD PART
    glBegin(GL_POLYGON);
    glColor3ub(98, 101, 103);

    glVertex2d(-9,-2);
    glVertex2d(-9,-2.25);
    glVertex2d(-8.50,-2.25);
    glVertex2d(-8.50,-2);
    glEnd();



   //water part

   glBegin(GL_POLYGON);
   glColor3ub(83, 164, 255 );

    glVertex2d(-15.50,-2);
    glVertex2d(-9,-2);
    glVertex2d(-9,2);
    glVertex2d(-15.50,2);
    glEnd();


    //moving water part

    glPushMatrix();
    glTranslatef(0,move_water_3,0);
    glBegin(GL_POLYGON);
   glColor3ub(83, 164, 255 );

   glVertex2d(-15.50,-1);
   glVertex2d(-8.75,-1);
   glVertex2d(-8.75,2);
   glVertex2d(-15.5,2);
   glEnd();
   glPopMatrix();


}

void canal3_up(int value)
{
    //move_gate_1 +=0.3;

    if(canal_3==true)
    {
        move_water_3+=0.1;
        move_ship_y +=.1;

    if(move_water_3>2)
    {
        move_water_3=2;
        canal_3=false;
    }

    }

    glutPostRedisplay();
glutTimerFunc(40, canal3_up, 0);

}
void fifth_gate()
{

    glPushMatrix();
    glTranslatef(15,0,0);
    //LEFT PART

    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);

    glVertex2d(-9,-2);
    glVertex2d(-8.75,-2);
    glVertex2d(-8.75,9);
    glVertex2d(-9,9);
    glEnd();


    //RIGHT PART

    glBegin(GL_POLYGON);
    glColor3ub(229, 231, 233);

    glVertex2d(-8.75,-2);
    glVertex2d(-8.50,-2);
    glVertex2d(-8.50,9);
    glVertex2d(-8.75,9);
    glEnd();

    //stripe part color

    glPushMatrix();
    glTranslatef(0,move_gate_5,0);

    glBegin(GL_POLYGON);
    glColor3ub(181, 151, 106);

    glVertex2d(-8.75,3.50);
    glVertex2d(-8.50,3.50);
    glVertex2d(-8.50,9);
    glVertex2d(-8.75,9);
    glEnd();

    //stripe line

    glBegin(GL_LINES);

    glColor3ub(0,0,0);

    glVertex2d(-8.75,3.50);
    glVertex2d(-8.50,3.50);

    glVertex2d(-8.75,3.75);
    glVertex2d(-8.50,3.75);

    glVertex2d(-8.75,4);
    glVertex2d(-8.50,4);

    glVertex2d(-8.750,4.25);
    glVertex2d(-8.50,4.25);

    glVertex2d(-8.750,4.5);
    glVertex2d(-8.50,4.5);

    glVertex2d(-8.750,4.75);
    glVertex2d(-8.50,4.75);

    glVertex2d(-8.750,5);
    glVertex2d(-8.50,5);

    glVertex2d(-8.750,5.25);
    glVertex2d(-8.50,5.25);

    glVertex2d(-8.750,5.5);
    glVertex2d(-8.50,5.5);

    glVertex2d(-8.750,5.75);
    glVertex2d(-8.50,5.75);

    glVertex2d(-8.750,6);
    glVertex2d(-8.50,6);

    glVertex2d(-8.750,6.25);
    glVertex2d(-8.50,6.25);

    glVertex2d(-8.750,6.5);
    glVertex2d(-8.50,6.5);

    glVertex2d(-8.750,6.75);
    glVertex2d(-8.50,6.75);

    glVertex2d(-8.750,7);
    glVertex2d(-8.50,7);

    glVertex2d(-8.750,7.25);
    glVertex2d(-8.50,7.25);

    glVertex2d(-8.750,7.5);
    glVertex2d(-8.50,7.5);

    glVertex2d(-8.750,7.75);
    glVertex2d(-8.50,7.75);

    glVertex2d(-8.750,8);
    glVertex2d(-8.50,8);

    glVertex2d(-8.750,8.25);
    glVertex2d(-8.50,8.25);

    glVertex2d(-8.750,8.5);
    glVertex2d(-8.50,8.5);

    glVertex2d(-8.750,8.75);
    glVertex2d(-8.50,8.75);

    glVertex2d(-8.750,9);
    glVertex2d(-8.5,9);
    glEnd();

    //STRIPE LINE BORDER

    glBegin(GL_LINES);
    glColor3ub(0,0,0);

    glVertex2d(-8.75,3.50);
    glVertex2d(-8.75,9);

    glVertex2d(-8.5,3.50);
    glVertex2d(-8.5,9);
    glEnd();
    glPopMatrix();
    glPopMatrix();



}

void upgate5_down(int value)
{   if(down_5==true)
    {

         move_gate_5-=0.1;

    if(move_gate_5<-5.5)
    {
        move_gate_5=-5.5;
        down_5=false;

    }
    }



glutPostRedisplay();

glutTimerFunc(25, upgate5_down, 0);

}


void upgate5_up(int value)
{
      if(up_5==true)
    {
        move_gate_5+=.1;
        if(move_gate_5>.0)
        {
            move_gate_5=.0;
            up_5=false;
        }
    }
    glutPostRedisplay();
glutTimerFunc(25, upgate5_up, 0);
}

void sewage_canal_4()
{
    //fourth_gate();


    //lower part

   glBegin(GL_POLYGON);
   glColor3ub(179, 182, 183);

   glVertex2d(-8.75,-2.25);
   glVertex2d(-8.75,-5.25);
   glVertex2d(-8.5,-5.25);
   glVertex2d(-8.5,-2.25);
   glEnd();



   glBegin(GL_POLYGON);
   glColor3ub(179, 182, 183);

   glVertex2d(-8.75,-5.25);
   glVertex2d(6.25,-5.25);
   glVertex2d(6.25,-5);
   glVertex2d(-8.75,-5);
   glEnd();


   glBegin(GL_POLYGON);
   glColor3ub(179, 182, 183);

   glVertex2d(6,-5);
   glVertex2d(6.25,-5);
   glVertex2d(6.25,-2.25);
   glVertex2d(6,-2.25);
   glEnd();





    // lower water part

    // fifth_gate();




    // water part

    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255 );

    glVertex2d(-8.50,-2);
    glVertex2d(6,-2);
    glVertex2d(6,4);
    glVertex2d(-8.50,4);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255 );

    glVertex2d(-8.5,-5);
    glVertex2d(6,-5);
    glVertex2d(6,-2);
    glVertex2d(-8.5,-2);
    glEnd();



    //bold part

    glBegin(GL_POLYGON);
    glColor3ub(98, 101, 103);

    glVertex2d(6,-2);
    glVertex2d(6.0,-2.25);
    glVertex2d(6.50,-2.25);
    glVertex2d(6.50,-2);
    glEnd();

}

void sixth_gate()
{
    //left part
    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);

    glVertex2d(11,-2);
    glVertex2d(11.25,-2);
    glVertex2d(11.25,4);
    glVertex2d(11,4);
    glEnd();


     //RIGHT PART

    glBegin(GL_POLYGON);
    glColor3ub(229, 231, 233);

    glVertex2d(11.25,-2);
    glVertex2d(11.5,-2);
    glVertex2d(11.5,4);
    glVertex2d(11.25,4);
    glEnd();


    //stripe part color

    glPushMatrix();
    glTranslatef(0,move_gate_6,0);

    glBegin(GL_POLYGON);
    glColor3ub(181, 151, 106);

    glVertex2d(11.25,1);
    glVertex2d(11.5,1);
    glVertex2d(11.5,4);
    glVertex2d(11.25,4);
    glEnd();

    //stripe lines

    glBegin(GL_LINES);
    glColor3b(0,0,0);

    glVertex2d(11.25,1);
    glVertex2d(11.5,1);

    glVertex2d(11.25,1.25);
    glVertex2d(11.5,1.25);

    glVertex2d(11.25,1.5);
    glVertex2d(11.5,1.5);

    glVertex2d(11.25,1.75);
    glVertex2d(11.5,1.75);

    glVertex2d(11.25,2);
    glVertex2d(11.5,2);

    glVertex2d(11.25,2.25);
    glVertex2d(11.5,2.25);

    glVertex2d(11.25,2.5);
    glVertex2d(11.5,2.5);

    glVertex2d(11.25,2.75);
    glVertex2d(11.5,2.75);

    glVertex2d(11.25,3);
    glVertex2d(11.5,3);

    glVertex2d(11.25,3.25);
    glVertex2d(11.5,3.25);

    glVertex2d(11.25,3.5);
    glVertex2d(11.5,3.5);

    glVertex2d(11.25,3.75);
    glVertex2d(11.5,3.75);

    glVertex2d(11.25,4);
    glVertex2d(11.5,4);

    glEnd();


    //BORDER LINES

    glBegin(GL_LINES);
    glColor3b(0,0,0);

    glVertex2d(11.5,1);
    glVertex2d(11.5,4);

    glVertex2d(11.25,1);
    glVertex2d(11.25,4);

    glEnd();
    glPopMatrix();


}

void upgate6_down(int value)
{
    if(down_6==true)
    {

         move_gate_6-=0.1;

    if(move_gate_6<-2.95)
    {
        move_gate_6=-2.95;
        down_6=false;

    }
    }



glutPostRedisplay();

glutTimerFunc(25, upgate6_down, 0);

}


void upgate6_up(int value)
{
    if(up_6==true)
    {
        move_gate_6+=.1;
        if(move_gate_6>.0)
        {
            move_gate_6=.0;
            up_6=false;
        }
    }
    glutPostRedisplay();
glutTimerFunc(25, upgate6_up, 0);
}


void sewage_canal_5()
{

   // sixth_gate();


    //lower part

   glBegin(GL_POLYGON);
   glColor3ub(179, 182, 183);

    glVertex2d(6.50,-2);
    glVertex2d(6.50,-2.25);
    glVertex2d(11,-2.25);
    glVertex2d(11,-2);
    glEnd();

    //BOLD PART

    glBegin(GL_POLYGON);
    glColor3ub(98, 101, 103);

    glVertex2d(11,-2);
    glVertex2d(11,-2.25);
    glVertex2d(11.5,-2.25);
    glVertex2d(11.5,-2);

    glEnd();


    //WATER PART

    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255 );

    glVertex2d(6.50,-2);
    glVertex2d(11,-2);
    glVertex2d(11,2);
    glVertex2d(6.5,2);
    glEnd();

    //moving water
    glPushMatrix();
    glTranslatef(0,move_water_5,0);

    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255 );

    glVertex2d(6.5,2);
    glVertex2d(11,2);
    glVertex2d(11,4);
    glVertex2d(6.5,4);
    glEnd();
    glPopMatrix();

}

void canal5_up(int value)
{
    //move_gate_1 +=0.3;

    if(canal_5==true)
    {
        move_water_5 -=0.1;
        move_ship_y  -=.1;

    if(move_water_5<-2)
    {
        move_water_5=-2;
        canal_5=false;
    }

    }

    glutPostRedisplay();
glutTimerFunc(40, canal5_up, 0);

}


void seventh_gate()
{

    //left part
    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);

    glVertex2d(17,-4);
    glVertex2d(17.25,-4);

    glVertex2d(17.25,3);
    glVertex2d(17,3);
    glEnd();


    //right part

    glBegin(GL_POLYGON);
    glColor3ub(229, 231, 233);

    glVertex2d(17.25,-4);
    glVertex2d(17.5,-4);
    glVertex2d(17.5,3);
    glVertex2d(17.25,3);
    glEnd();


    glPushMatrix();
    glTranslatef(0,move_gate_7,0);
    //stripe part color

    glBegin(GL_POLYGON);
    glColor3ub(181, 151, 106);

    glVertex2d(17.25,-.50);
    glVertex2d(17.5,-.50);
    glVertex2d(17.5,3);
    glVertex2d(17.25,3);
    glEnd();


    //stripe line

    glBegin(GL_LINES);
    glColor3b(0,0,0);

    glVertex2d(17.25,-.50);
    glVertex2d(17.5,-.50);

    glVertex2d(17.25,-.25);
    glVertex2d(17.5,-.25);


    glVertex2d(17.25,0.0);
    glVertex2d(17.5,0.0);

    glVertex2d(17.25,.25);
    glVertex2d(17.5,.25);

    glVertex2d(17.25,0.50);
    glVertex2d(17.5,0.50);

    glVertex2d(17.25,0.75);
    glVertex2d(17.5,0.75);

    glVertex2d(17.25,1);
    glVertex2d(17.5,1);

    glVertex2d(17.25,1.25);
    glVertex2d(17.5,1.25);

    glVertex2d(17.25,1.5);
    glVertex2d(17.5,1.5);

    glVertex2d(17.25,1.75);
    glVertex2d(17.5,1.75);

    glVertex2d(17.25,2);
    glVertex2d(17.5,2);

    glVertex2d(17.25,2.25);
    glVertex2d(17.5,2.25);

    glVertex2d(17.25,2.5);
    glVertex2d(17.5,2.5);

    glVertex2d(17.25,2.75);
    glVertex2d(17.5,2.75);

    glVertex2d(17.25,3);
    glVertex2d(17.5,3);

    glEnd();

    //BORDER STRIPE LINES

    glBegin(GL_LINES);
    glColor3b(0,0,0);

    glVertex2d(17.5,-.5);
    glVertex2d(17.5,3);

    glEnd();

    glPopMatrix();


}

void upgate7_down(int value)
{
    if(down_7==true)
    {

         move_gate_7-=0.1;

    if(move_gate_7<-3.5)
    {
        move_gate_7=-3.5;
        down_7=false;

    }
    }



glutPostRedisplay();

glutTimerFunc(25, upgate7_down, 0);

}


void upgate7_up(int value)
{
    if(up_7==true)
    {
        move_gate_7+=.1;
        if(move_gate_7>.0)
        {
            move_gate_7=.0;
            up_7=false;
        }
    }
    glutPostRedisplay();
glutTimerFunc(25, upgate7_up, 0);
}
void sewage_canal_6()
{
   // seventh_gate();
    //lower part

   glBegin(GL_POLYGON);
   glColor3ub(179, 182, 183);

   glVertex2d(11.50,-2);
   glVertex2d(11.50,-2.25);
   glVertex2d(12.75,-2.25);
   glVertex2d(12.75,-2);
   glVertex2d(11.50,-2);

   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(179, 182, 183);

   glVertex2d(12.75,-2);
   glVertex2d(12.75,-4);
   glVertex2d(13,-4);
   glVertex2d(13,-2);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(179, 182, 183);

   glVertex2d(12.75,-4.25);
   glVertex2d(17,-4.25);
   glVertex2d(17,-4);
   glVertex2d(12.75,-4);

   glEnd();

   //bold part


    glBegin(GL_POLYGON);
    glColor3ub(98, 101, 103);

    glVertex2d(17,-4);
    glVertex2d(17,-4.25);
    glVertex2d(17.5,-4.25);
    glVertex2d(17.5,-4);

    glEnd();

    //WATER PART

    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255 );

    glVertex2d(11.5,-2);
    glVertex2d(17,-2);
    glVertex2d(17,0);
    glVertex2d(11.5,0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255 );
    glVertex2d(13,-2);
    glVertex2d(13,-4);
    glVertex2d(17,-4);
    glVertex2d(17,-2);
    glEnd();

    //moving water
    glPushMatrix();
    glTranslatef(0,move_water_6,0);

     glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255 );

    glVertex2d(11.5,0);
    glVertex2d(17,0);
    glVertex2d(17,2);
    glVertex2d(11.5,2);
    glEnd();
    glPopMatrix();

}

void canal6_up(int value)
{
    //move_gate_1 +=0.3;

    if(canal_6==true)
    {
        move_water_6 -=0.1;
        move_ship_y  -=.1;

    if(move_water_6<-2)
    {
        move_water_6=-2;
        canal_6=false;
    }

    }

    glutPostRedisplay();
glutTimerFunc(40, canal6_up, 0);

}


void eight_gate()
{
    //left part
    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);

    glVertex2d(23,-4);
    glVertex2d(23.25,-4);
    glVertex2d(23.25,2);
    glVertex2d(23,2);
    glEnd();


     //right part

    glBegin(GL_POLYGON);
    glColor3ub(229, 231, 233);

    glVertex2d(23.25,-4);
    glVertex2d(23.5,-4);
    glVertex2d(23.5,2);
    glVertex2d(23.25,2);
    glEnd();

    glPushMatrix();
    glTranslatef(0,move_gate_8,0);

    //stripe part color

    glBegin(GL_POLYGON);
    glColor3ub(181, 151, 106);

    glVertex2d(23.25,-1);
    glVertex2d(23.5,-1);
    glVertex2d(23.5,2);
    glVertex2d(23.25,2);
    glEnd();

    //stripe line
    glBegin(GL_LINES);
    glColor3b(0,0,0);

    glVertex2d(23.25,-1);
    glVertex2d(23.5,-1);

    glVertex2d(23.25,-.75);
    glVertex2d(23.5,-.75);

    glVertex2d(23.25,-.5);
    glVertex2d(23.5,-.5);

    glVertex2d(23.25,-.25);
    glVertex2d(23.5,-.25);

    glVertex2d(23.25,-0);
    glVertex2d(23.5,-0);

    glVertex2d(23.25,.25);
    glVertex2d(23.5,0.25);

    glVertex2d(23.25,0.5);
    glVertex2d(23.5,0.5);

    glVertex2d(23.25,0.75);
    glVertex2d(23.5,0.75);

    glVertex2d(23.25,1);
    glVertex2d(23.5,1);

    glVertex2d(23.25,1.25);
    glVertex2d(23.5,1.25);

    glVertex2d(23.25,1.5);
    glVertex2d(23.5,1.5);

    glVertex2d(23.25,1.75);
    glVertex2d(23.5,1.75);

    glVertex2d(23.25,2);
    glVertex2d(23.5,2);


    glEnd();


    //BORDER LINE

    glBegin(GL_LINES);
    glColor3b(0,0,0);

    glVertex2d(23.5,-1);
    glVertex2d(23.5,2);
    glEnd();
    glPopMatrix();


}

void upgate8_down(int value)
{
    if(down_8==true)
    {

         move_gate_8-=0.1;

    if(move_gate_8<-3)
    {
        move_gate_8=-3;
        down_8=false;

    }
    }



glutPostRedisplay();

glutTimerFunc(25, upgate8_down, 0);

}


void upgate8_up(int value)
{
    if(up_8==true)
    {
        move_gate_8+=.1;
        if(move_gate_8>.0)
        {
            move_gate_8=.0;
            up_8=false;
        }
    }
    glutPostRedisplay();
glutTimerFunc(25, upgate8_up, 0);
}
void sewage_canal_7()
{
   // eigth_gate();

    //lower part

   glBegin(GL_POLYGON);
   glColor3ub(179, 182, 183);

   glVertex2d(17.50,-4);
   glVertex2d(17.50,-4.25);
   glVertex2d(23,-4.25);
   glVertex2d(23,-4);

   glEnd();

   //bold part


    glBegin(GL_POLYGON);
    glColor3ub(98, 101, 103);

    glVertex2d(23,-4);
    glVertex2d(23,-4.25);
    glVertex2d(23.5,-4.25);
    glVertex2d(23.5,-4);

    glEnd();

    //WATER PART

    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255 );

    glVertex2d(17.5,-4);
    glVertex2d(23,-4);
    glVertex2d(23,-2);
    glVertex2d(17.5,-2);
    glEnd();

    //moving water part
    glPushMatrix();
    glTranslatef(0,move_water_7,0);

    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255 );

    glVertex2d(17.5,-2);
    glVertex2d(23,-2);
    glVertex2d(23,0);
    glVertex2d(17.5,0);
    glEnd();
    glPopMatrix();

}

void canal7_up(int value)
{
    //move_gate_1 +=0.3;

    if(canal_7==true)
    {
        move_water_7 -=0.1;
        move_ship_y  -=.1;

    if(move_water_7<-2)
    {
        move_water_7=-2;
        canal_7=false;
    }

    }

    glutPostRedisplay();
glutTimerFunc(40, canal7_up, 0);

}

void mountain_front()
{
    glPushMatrix();

    //mountain part
    glTranslatef(0,3,0);
    glScalef(32,18,0);
    glBegin(GL_TRIANGLE_FAN);

            glColor3ub(152, 217, 12);
            glVertex2f(-0.960f, 0.033f);
            glVertex2f(-0.905f, 0.231f);
            glVertex2f(-0.854f, 0.223f);
            glVertex2f(-0.836f, 0.168f);
            glVertex2f(-0.838f, -0.303f);
            glVertex2f(-1.000f, -0.303f);
            glVertex2f(-1.000f, 0.049f);
            glVertex2f(-1.000f, 0.053f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(34,112,0);

            glVertex2f(-0.960f, 0.033f);
            glVertex2f(-0.905f, 0.231f);
            glVertex2f(-0.854f, 0.223f);
            glVertex2f(-0.836f, 0.168f);
            glVertex2f(-0.838f, -0.303f);
            glVertex2f(-1.000f, -0.303f);
            glVertex2f(-1.000f, 0.049f);
            glVertex2f(-1.000f, 0.053f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(34,112,0);
            glVertex2f(-0.794f, 0.207f);
            glVertex2f(-0.703f, 0.413f);
            glVertex2f(-0.627f, 0.326f);
            glVertex2f(-0.629f, -0.311f);
            glVertex2f(-0.843f, -0.303f);
            glVertex2f(-0.843f, 0.168f);
            glVertex2f(-0.796f, 0.247f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(34,112,0);
            glVertex2f(-0.794f, 0.207f);
            glVertex2f(-0.703f, 0.413f);
            glVertex2f(-0.627f, 0.326f);
            glVertex2f(-0.629f, -0.311f);
            glVertex2f(-0.843f, -0.303f);
            glVertex2f(-0.843f, 0.168f);
            glVertex2f(-0.796f, 0.247f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(34,112,0);
            glVertex2f(-0.403f, 0.456f);
            glVertex2f(-0.389f, 0.468f);
            glVertex2f(-0.360f, 0.421f);
            glVertex2f(-0.338f, 0.432f);
            glVertex2f(-0.287f, 0.361f);
            glVertex2f(-0.269f, 0.306f);
            glVertex2f(-0.269f, -0.275f);
            glVertex2f(-0.636f, -0.307f);
            glVertex2f(-0.629f, 0.326f);
            glVertex2f(-0.565f, 0.413f);
            glVertex2f(-0.569f, 0.369f);
            glVertex2f(-0.452f, 0.543f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(34,112,0);
            glVertex2f(-0.403f, 0.456f);
            glVertex2f(-0.389f, 0.468f);
            glVertex2f(-0.360f, 0.421f);
            glVertex2f(-0.338f, 0.432f);
            glVertex2f(-0.287f, 0.361f);
            glVertex2f(-0.269f, 0.306f);
            glVertex2f(-0.269f, -0.275f);
            glVertex2f(-0.636f, -0.307f);
            glVertex2f(-0.629f, 0.326f);
            glVertex2f(-0.565f, 0.413f);
            glVertex2f(-0.569f, 0.369f);
            glVertex2f(-0.452f, 0.543f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(34,112,0);
            glVertex2f(-0.274f, -0.303f);
            glVertex2f(-0.643f, -0.303f);
            glVertex2f(-0.272f, -0.263f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(34,112,0);
            glVertex2f(-0.274f, -0.303f);
            glVertex2f(-0.643f, -0.303f);
            glVertex2f(-0.272f, -0.263f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(34,112,0);
            glVertex2f(-0.154f, 0.231f);
            glVertex2f(-0.132f, 0.258f);
            glVertex2f(0.000f, 0.187f);
            glVertex2f(0.017f, 0.152f);
            glVertex2f(0.017f, -0.326f);
            glVertex2f(-0.307f, -0.303f);
            glVertex2f(-0.269f, 0.302f);
            glVertex2f(-0.256f, 0.33f);
            glVertex2f(-0.176f, 0.278f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(34,112,0);
            glVertex2f(-0.154f, 0.231f);
            glVertex2f(-0.132f, 0.258f);
            glVertex2f(0.000f, 0.187f);
            glVertex2f(0.017f, 0.152f);
            glVertex2f(0.017f, -0.326f);
            glVertex2f(-0.307f, -0.303f);
            glVertex2f(-0.269f, 0.302f);
            glVertex2f(-0.256f, 0.33f);
            glVertex2f(-0.176f, 0.278f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(34,112,0);
            glVertex2f(0.077f, -0.224f);
            glVertex2f(0.017f, 0.148f);
            glVertex2f(0.224f, 0.239f);
            glVertex2f(0.388f, 0.112f);
            glVertex2f(0.393f, -0.362f);
            glVertex2f(0.008f, -0.323f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(34,112,0);
            glVertex2f(0.077f, -0.224f);
            glVertex2f(0.017f, 0.148f);
            glVertex2f(0.224f, 0.239f);
            glVertex2f(0.388f, 0.112f);
            glVertex2f(0.393f, -0.362f);
            glVertex2f(0.008f, -0.323f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(34,112,0);
            glVertex2f(0.022f, 0.14f);
            glVertex2f(0.006f, 0.14f);
            glVertex2f(0.035f, 0.148f);
            glVertex2f(0.095f, -0.291f);
            glVertex2f(-0.018f, -0.311f);
            glVertex2f(-0.009f, 0.144f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107, 207, 94);
            glVertex2f(0.022f, 0.14f);
            glVertex2f(0.006f, 0.14f);
            glVertex2f(0.035f, 0.148f);
            glVertex2f(0.095f, -0.291f);
            glVertex2f(-0.018f, -0.311f);
            glVertex2f(-0.009f, 0.144f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(23, 129, 8);
            glVertex2f(0.391f, 0.108f);
            glVertex2f(0.468f, 0.172f);
            glVertex2f(0.497f, 0.144f);
            glVertex2f(0.506f, -0.358f);
            glVertex2f(0.388f, -0.354f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(34,112,0);
            glVertex2f(0.391f, 0.108f);
            glVertex2f(0.468f, 0.172f);
            glVertex2f(0.497f, 0.144f);
            glVertex2f(0.506f, -0.358f);
            glVertex2f(0.388f, -0.354f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(23, 129, 8);
            glVertex2f(0.382f, 0.104f);
            glVertex2f(0.404f, 0.108f);
            glVertex2f(0.400f, 0.045f);
            glVertex2f(0.375f, 0.065f);
            glVertex2f(0.377f, 0.104f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(34,112,0);
            glVertex2f(0.382f, 0.104f);
            glVertex2f(0.404f, 0.108f);
            glVertex2f(0.400f, 0.045f);
            glVertex2f(0.375f, 0.065f);
            glVertex2f(0.377f, 0.104f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(34,112,0);
            glVertex2f(0.846f, 0.314f);
            glVertex2f(0.868f, 0.33f);
            glVertex2f(0.926f, 0.258f);
            glVertex2f(0.940f, 0.207f);
            glVertex2f(0.955f, 0.243f);
            glVertex2f(0.995f, 0.215f);
            glVertex2f(1.000f, -0.366f);
            glVertex2f(0.497f, -0.354f);
            glVertex2f(0.491f, 0.148f);
            glVertex2f(0.757f, 0.425f);
            glVertex2f(0.806f, 0.345f);
            glVertex2f(0.822f, 0.361f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(34,112,0);
            glVertex2f(0.846f, 0.314f);
            glVertex2f(0.868f, 0.33f);
            glVertex2f(0.926f, 0.258f);
            glVertex2f(0.940f, 0.207f);
            glVertex2f(0.955f, 0.243f);
            glVertex2f(0.995f, 0.215f);
            glVertex2f(1.000f, -0.366f);
            glVertex2f(0.497f, -0.354f);
            glVertex2f(0.491f, 0.148f);
            glVertex2f(0.757f, 0.425f);
            glVertex2f(0.806f, 0.345f);
            glVertex2f(0.822f, 0.361f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(34,112,0);
            glVertex2f(0.373f, 0.092f);
            glVertex2f(0.424f, 0.096f);
            glVertex2f(0.424f, -0.153f);
            glVertex2f(0.337f, -0.125f);
            glVertex2f(0.355f, 0.096f);
            glEnd();


            //********shadow part


             glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,221,95);
            glVertex2f(-0.836f, 0.128f);
            glVertex2f(-0.743f, 0.231f);
            glVertex2f(-0.780f, 0.164f);
            glVertex2f(-0.798f, 0.049f);
            glVertex2f(-0.918f, 0.033f);
            glVertex2f(-0.918f, 0.033f);
            glVertex2f(-0.909f, 0.195f);
            glVertex2f(-0.892f, 0.156f);
            glVertex2f(-0.876f, 0.211f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,221,95);
            glVertex2f(-0.672f, 0.203f);
            glVertex2f(-0.660f, 0.187f);
            glVertex2f(-0.709f, 0.124f);
            glVertex2f(-0.707f, 0.128f);
            glVertex2f(-0.740f, 0.152f);
            glVertex2f(-0.654f, 0.266f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,221,95);
            glVertex2f(-0.467f, 0.373f);
            glVertex2f(-0.467f, 0.353f);
            glVertex2f(-0.467f, 0.345f);
            glVertex2f(-0.467f, 0.342f);
            glVertex2f(-0.494f, 0.274f);
            glVertex2f(-0.494f, 0.27f);
            glVertex2f(-0.518f, 0.239f);
            glVertex2f(-0.532f, 0.219f);
            glVertex2f(-0.645f, 0.235f);
            glVertex2f(-0.645f, 0.231f);
            glVertex2f(-0.454f, 0.523f);
            glVertex2f(-0.454f, 0.472f);
            glVertex2f(-0.467f, 0.448f);
            glVertex2f(-0.467f, 0.448f);
            glVertex2f(-0.469f, 0.44f);
            glVertex2f(-0.469f, 0.44f);
            glVertex2f(-0.469f, 0.432f);
            glVertex2f(-0.469f, 0.428f);
            glVertex2f(-0.469f, 0.417f);
            glVertex2f(-0.469f, 0.405f);
            glVertex2f(-0.469f, 0.397f);
            glVertex2f(-0.467f, 0.393f);
            glVertex2f(-0.467f, 0.381f);
            glVertex2f(-0.467f, 0.381f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,221,95);
            glVertex2f(-0.392f, 0.16f);
            glVertex2f(-0.445f, 0.318f);
            glVertex2f(-0.449f, 0.247f);
            glVertex2f(-0.429f, 0.172f);
            glVertex2f(-0.458f, -0.066f);
            glVertex2f(-0.447f, -0.109f);
            glVertex2f(-0.438f, -0.105f);
            glVertex2f(-0.360f, -0.089f);
            glVertex2f(-0.292f, -0.022f);
            glVertex2f(-0.327f, 0.085f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,221,95);
            glVertex2f(-0.332f, 0.338f);
            glVertex2f(-0.289f, 0.298f);
            glVertex2f(-0.298f, 0.247f);
            glVertex2f(-0.369f, 0.255f);
            glVertex2f(-0.367f, 0.251f);
            glVertex2f(-0.389f, 0.334f);
            glVertex2f(-0.383f, 0.401f);
            glVertex2f(-0.387f, 0.432f);
            glVertex2f(-0.358f, 0.381f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,221,95);
            glVertex2f(-0.285f, 0.243f);
            glVertex2f(-0.263f, 0.306f);
            glVertex2f(-0.249f, 0.255f);
            glVertex2f(-0.294f, 0.179f);
            glVertex2f(-0.352f, 0.164f);
            glVertex2f(-0.352f, 0.164f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,221,95);
            glVertex2f(-0.143f, 0.168f);
            glVertex2f(-0.209f, 0.1f);
            glVertex2f(-0.209f, 0.104f);
            glVertex2f(-0.165f, 0.215f);
            glVertex2f(-0.134f, 0.239f);
            glVertex2f(-0.112f, 0.215f);
            glVertex2f(-0.112f, 0.168f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,221,95);
            glVertex2f(-0.176f, -0.018f);
            glVertex2f(-0.156f, 0.021f);
            glVertex2f(-0.152f, 0.112f);
            glVertex2f(-0.138f, 0.14f);
            glVertex2f(-0.134f, 0.092f);
            glVertex2f(-0.123f, 0.057f);
            glVertex2f(-0.123f, -0.006f);
            glVertex2f(-0.147f, -0.085f);
            glVertex2f(-0.145f, -0.105f);
            glVertex2f(-0.263f, -0.097f);
            glVertex2f(-0.267f, -0.097f);
            glVertex2f(-0.205f, -0.05f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,221,95);
            glVertex2f(0.040f, 0.128f);
            glVertex2f(0.155f, 0.175f);
            glVertex2f(0.180f, 0.116f);
            glVertex2f(0.257f, 0.136f);
            glVertex2f(0.291f, -0.042f);
            glVertex2f(0.128f, 0.017f);
            glVertex2f(0.082f, -0.117f);
            glVertex2f(-0.043f, -0.097f);
            glVertex2f(-0.040f, -0.097f);
            glVertex2f(-0.058f, -0.034f);
            glVertex2f(-0.036f, 0.037f);
            glVertex2f(-0.074f, 0.081f);
            glVertex2f(-0.060f, 0.12f);
            glVertex2f(-0.034f, 0.096f);
            glVertex2f(-0.083f, 0.215f);
            glVertex2f(0.008f, 0.164f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,221,95);
            glVertex2f(0.404f, 0.092f);
            glVertex2f(0.340f, 0.073f);
            glVertex2f(0.333f, 0.069f);
            glVertex2f(0.462f, 0.152f);
            glVertex2f(0.413f, 0.069f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,221,95);
            glVertex2f(0.673f, 0.243f);
            glVertex2f(0.573f, 0.16f);
            glVertex2f(0.568f, 0.16f);
            glVertex2f(0.633f, 0.239f);
            glVertex2f(0.635f, 0.266f);
            glVertex2f(0.753f, 0.413f);
            glVertex2f(0.755f, 0.365f);
            glVertex2f(0.737f, 0.33f);
            glVertex2f(0.737f, 0.302f);
            glVertex2f(0.744f, 0.286f);
            glVertex2f(0.742f, 0.239f);
            glVertex2f(0.715f, 0.183f);
            glVertex2f(0.677f, 0.148f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,221,95);
            glVertex2f(0.646f, -0.002f);
            glVertex2f(0.528f, -0.105f);
            glVertex2f(0.526f, -0.105f);
            glVertex2f(0.520f, -0.038f);
            glVertex2f(0.548f, -0.018f);
            glVertex2f(0.566f, 0.037f);
            glVertex2f(0.631f, 0.096f);
            glVertex2f(0.688f, 0.1f);
            glVertex2f(0.728f, 0.164f);
            glVertex2f(0.728f, 0.124f);
            glVertex2f(0.688f, 0.033f);
            glVertex2f(0.753f, 0.033f);
            glVertex2f(0.740f, 0.021f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,221,95);
            glVertex2f(0.815f, 0.089f);
            glVertex2f(0.886f, 0.013f);
            glVertex2f(0.920f, -0.074f);
            glVertex2f(0.840f, -0.125f);
            glVertex2f(0.844f, -0.121f);
            glVertex2f(0.777f, -0.018f);
            glVertex2f(0.771f, -0.042f);
            glVertex2f(0.751f, 0.021f);
            glVertex2f(0.780f, 0.108f);
            glVertex2f(0.760f, 0.172f);
            glVertex2f(0.764f, 0.239f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,221,95);
            glVertex2f(0.853f, 0.282f);
            glVertex2f(0.922f, 0.215f);
            glVertex2f(0.908f, 0.168f);
            glVertex2f(0.908f, 0.172f);
            glVertex2f(0.840f, 0.179f);
            glVertex2f(0.820f, 0.243f);
            glVertex2f(0.826f, 0.298f);
            glVertex2f(0.820f, 0.349f);
            glVertex2f(0.844f, 0.31f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,221,95);
            glVertex2f(0.915f, 0.156f);
            glVertex2f(0.948f, 0.227f);
            glVertex2f(0.960f, 0.179f);
            glVertex2f(0.915f, 0.108f);
            glVertex2f(0.857f, 0.096f);
            glVertex2f(0.857f, 0.092f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,221,95);
            glVertex2f(0.997f, 0.136f);
            glVertex2f(0.997f, 0.199f);
            glVertex2f(0.977f, 0.211f);
            glVertex2f(0.995f, 0.179f);
            glVertex2f(0.960f, 0.092f);
            glVertex2f(0.960f, 0.1f);
            glVertex2f(0.962f, 0.049f);
            glEnd();


            // GREEN SHADE

            glPushMatrix();
            glTranslatef(0,-0.06,0);


              glBegin(GL_TRIANGLE_FAN);
            glColor3ub(16,85,2);
            glVertex2f(-0.663f, 0.405f);
            glVertex2f(-0.658f, 0.393f);
            glVertex2f(-0.656f, 0.389f);
            glVertex2f(-0.647f, 0.373f);
            glVertex2f(-0.643f, 0.369f);
            glVertex2f(-0.640f, 0.369f);
            glVertex2f(-0.636f, 0.369f);
            glVertex2f(-0.629f, 0.369f);
            glVertex2f(-0.627f, 0.369f);
            glVertex2f(-0.627f, 0.369f);
            glVertex2f(-0.623f, 0.369f);
            glVertex2f(-0.618f, 0.369f);
            glVertex2f(-0.623f, 0.377f);
            glVertex2f(-0.625f, 0.377f);
            glVertex2f(-0.629f, 0.385f);
            glVertex2f(-0.634f, 0.393f);
            glVertex2f(-0.638f, 0.397f);
            glVertex2f(-0.640f, 0.405f);
            glVertex2f(-0.652f, 0.413f);
            glVertex2f(-0.656f, 0.417f);
            glVertex2f(-0.660f, 0.421f);
            glVertex2f(-0.665f, 0.421f);
            glVertex2f(-0.674f, 0.428f);
            glVertex2f(-0.678f, 0.44f);
            glVertex2f(-0.683f, 0.448f);
            glVertex2f(-0.687f, 0.456f);
            glVertex2f(-0.689f, 0.46f);
            glVertex2f(-0.694f, 0.464f);
            glVertex2f(-0.696f, 0.464f);
            glVertex2f(-0.698f, 0.464f);
            glVertex2f(-0.698f, 0.464f);
            glVertex2f(-0.700f, 0.46f);
            glVertex2f(-0.700f, 0.444f);
            glVertex2f(-0.700f, 0.444f);
            glVertex2f(-0.698f, 0.428f);
            glVertex2f(-0.698f, 0.425f);
            glVertex2f(-0.696f, 0.417f);
            glVertex2f(-0.692f, 0.417f);
            glVertex2f(-0.687f, 0.417f);
            glVertex2f(-0.683f, 0.413f);
            glVertex2f(-0.674f, 0.409f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(16,85,2);
            glVertex2f(-0.849f, 0.013f);
            glVertex2f(-0.803f, 0.033f);
            glVertex2f(-0.780f, 0.073f);
            glVertex2f(-0.752f, 0.112f);
            glVertex2f(-0.723f, 0.124f);
            glVertex2f(-0.732f, 0.053f);
            glVertex2f(-0.754f, 0.037f);
            glVertex2f(-0.812f, -0.018f);
            glVertex2f(-0.840f, -0.101f);
            glVertex2f(-0.863f, -0.125f);
            glVertex2f(-0.889f, -0.137f);
            glVertex2f(-0.912f, -0.153f);
            glVertex2f(-0.920f, -0.16f);
            glVertex2f(-0.925f, -0.16f);
            glVertex2f(-0.934f, -0.149f);
            glVertex2f(-0.927f, -0.141f);
            glVertex2f(-0.889f, -0.089f);
            glVertex2f(-0.885f, -0.05f);
            glVertex2f(-0.889f, -0.002f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(16,85,2);
            glVertex2f(-0.414f, 0.492f);
            glVertex2f(-0.405f, 0.48f);
            glVertex2f(-0.400f, 0.476f);
            glVertex2f(-0.394f, 0.472f);
            glVertex2f(-0.392f, 0.476f);
            glVertex2f(-0.392f, 0.48f);
            glVertex2f(-0.392f, 0.492f);
            glVertex2f(-0.394f, 0.5f);
            glVertex2f(-0.396f, 0.5f);
            glVertex2f(-0.398f, 0.504f);
            glVertex2f(-0.452f, 0.587f);
            glVertex2f(-0.445f, 0.559f);
            glVertex2f(-0.445f, 0.535f);
            glVertex2f(-0.436f, 0.515f);
            glVertex2f(-0.423f, 0.5f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(16,85,2);
            glVertex2f(0.582f, 0.258f);
            glVertex2f(0.595f, 0.27f);
            glVertex2f(0.611f, 0.29f);
            glVertex2f(0.624f, 0.302f);
            glVertex2f(0.631f, 0.326f);
            glVertex2f(0.635f, 0.338f);
            glVertex2f(0.635f, 0.338f);
            glVertex2f(0.508f, 0.199f);
            glVertex2f(0.520f, 0.199f);
            glVertex2f(0.531f, 0.199f);
            glVertex2f(0.542f, 0.203f);
            glVertex2f(0.551f, 0.223f);
            glVertex2f(0.566f, 0.243f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(16,85,2);
            glVertex2f(0.551f, 0.251f);
            glVertex2f(0.568f, 0.274f);
            glVertex2f(0.582f, 0.286f);
            glVertex2f(0.588f, 0.29f);
            glVertex2f(0.595f, 0.29f);
            glVertex2f(0.606f, 0.298f);
            glVertex2f(0.511f, 0.199f);
            glVertex2f(0.511f, 0.199f);
            glVertex2f(0.511f, 0.207f);
            glVertex2f(0.513f, 0.219f);
            glVertex2f(0.520f, 0.223f);
            glVertex2f(0.526f, 0.223f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(16,85,2);
            glVertex2f(0.975f, -0.042f);
            glVertex2f(0.988f, -0.038f);
            glVertex2f(0.991f, -0.038f);
            glVertex2f(0.993f, -0.034f);
            glVertex2f(0.993f, -0.03f);
            glVertex2f(0.993f, -0.014f);
            glVertex2f(0.993f, -0.006f);
            glVertex2f(0.995f, -0.006f);
            glVertex2f(1.000f, -0.006f);
            glVertex2f(0.895f, -0.204f);
            glVertex2f(0.895f, -0.204f);
            glVertex2f(0.928f, -0.153f);
            glVertex2f(0.951f, -0.105f);
            glVertex2f(0.951f, -0.062f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(16,85,2);
            glVertex2f(0.304f, 0.215f);
            glVertex2f(0.322f, 0.199f);
            glVertex2f(0.326f, 0.199f);
            glVertex2f(0.326f, 0.199f);
            glVertex2f(0.337f, 0.199f);
            glVertex2f(0.342f, 0.199f);
            glVertex2f(0.342f, 0.199f);
            glVertex2f(0.342f, 0.183f);
            glVertex2f(0.357f, 0.164f);
            glVertex2f(0.368f, 0.164f);
            glVertex2f(0.373f, 0.168f);
            glVertex2f(0.373f, 0.168f);
            glVertex2f(0.391f, 0.172f);
            glVertex2f(0.395f, 0.172f);
            glVertex2f(0.395f, 0.172f);
            glVertex2f(0.233f, 0.29f);
            glVertex2f(0.235f, 0.278f);
            glVertex2f(0.240f, 0.266f);
            glVertex2f(0.242f, 0.266f);
            glVertex2f(0.244f, 0.262f);
            glVertex2f(0.251f, 0.262f);
            glVertex2f(0.257f, 0.251f);
            glVertex2f(0.268f, 0.239f);
            glVertex2f(0.286f, 0.231f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(16,85,2);
            glVertex2f(0.473f, 0.045f);
            glVertex2f(0.473f, 0.092f);
            glVertex2f(0.482f, 0.112f);
            glVertex2f(0.500f, 0.112f);
            glVertex2f(0.500f, 0.112f);
            glVertex2f(0.491f, 0.096f);
            glVertex2f(0.491f, 0.057f);
            glVertex2f(0.480f, 0.033f);
            glVertex2f(0.466f, 0.013f);
            glVertex2f(0.464f, 0.013f);
            glVertex2f(0.455f, 0.013f);
            glVertex2f(0.448f, 0.013f);
            glVertex2f(0.448f, 0.009f);
            glVertex2f(0.442f, -0.014f);
            glVertex2f(0.435f, -0.03f);
            glVertex2f(0.435f, -0.03f);
            glVertex2f(0.435f, 0.009f);
            glVertex2f(0.435f, 0.021f);
            glVertex2f(0.444f, 0.021f);
            glVertex2f(0.446f, 0.021f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(16,85,2);
            glVertex2f(-0.600f, 0.152f);
            glVertex2f(-0.580f, 0.164f);
            glVertex2f(-0.576f, 0.183f);
            glVertex2f(-0.569f, 0.203f);
            glVertex2f(-0.563f, 0.258f);
            glVertex2f(-0.563f, 0.258f);
            glVertex2f(-0.558f, 0.239f);
            glVertex2f(-0.558f, 0.219f);
            glVertex2f(-0.567f, 0.179f);
            glVertex2f(-0.576f, 0.164f);
            glVertex2f(-0.585f, 0.152f);
            glVertex2f(-0.596f, 0.136f);
            glVertex2f(-0.614f, 0.1f);
            glVertex2f(-0.620f, 0.069f);
            glVertex2f(-0.620f, 0.061f);
            glVertex2f(-0.623f, 0.061f);
            glVertex2f(-0.625f, 0.073f);
            glVertex2f(-0.625f, 0.073f);
            glVertex2f(-0.620f, 0.092f);
            glVertex2f(-0.612f, 0.128f);
            glVertex2f(-0.612f, 0.152f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(16,85,2);
            glVertex2f(0.813f, 0.397f);
            glVertex2f(0.820f, 0.405f);
            glVertex2f(0.828f, 0.405f);
            glVertex2f(0.828f, 0.405f);
            glVertex2f(0.828f, 0.405f);
            glVertex2f(0.771f, 0.452f);
            glVertex2f(0.813f, 0.357f);
            glVertex2f(0.813f, 0.373f);
            glVertex2f(0.813f, 0.373f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(16,85,2);
            glVertex2f(0.784f, 0.46f);
            glVertex2f(0.773f, 0.472f);
            glVertex2f(0.768f, 0.472f);
            glVertex2f(0.768f, 0.468f);
            glVertex2f(0.773f, 0.448f);
            glVertex2f(0.773f, 0.444f);
            glVertex2f(0.802f, 0.425f);
            glVertex2f(0.802f, 0.425f);
            glVertex2f(0.797f, 0.436f);
            glVertex2f(0.791f, 0.452f);
            glEnd();
            glPopMatrix();
            glPopMatrix();
}
void ground()
{
    glPushMatrix();
    glTranslatef(-.5,2,0);
    glScalef(32,18,0);


    glBegin(GL_TRIANGLE_FAN);
            glColor3ub(204, 143, 43 );

            glVertex2f(-0.778f, -0.307f);
            glVertex2f(-0.747f, -0.299f);
            glVertex2f(-0.740f, -0.299f);
            glVertex2f(-0.725f, -0.299f);
            glVertex2f(-0.712f, -0.299f);


           // glColor3ub(145, 102, 32 );
            glVertex2f(-0.689f, -0.299f);
            glVertex2f(-0.674f, -0.299f);
            glVertex2f(-0.658f, -0.299f);
            glVertex2f(-0.652f, -0.299f);
            glVertex2f(-0.634f, -0.299f);
            glVertex2f(-0.634f, -0.299f);

           // glColor3ub(145, 102, 32 );
            glVertex2f(-0.634f, -0.299f);
            glVertex2f(-0.627f, -0.299f);
            glVertex2f(-0.627f, -0.299f);
            glVertex2f(-0.627f, -0.326f);
            glVertex2f(-0.627f, -0.374f);
            glVertex2f(-0.627f, -0.406f);
            glVertex2f(-0.629f, -0.998f);
            glVertex2f(-1.003f, -0.994f);
            glVertex2f(-0.998f, -0.453f);
            glVertex2f(-1.003f, -0.457f);
            glVertex2f(-0.960f, -0.469f);
            glVertex2f(-0.932f, -0.465f);

            //glColor3ub(145, 102, 32 );
            glVertex2f(-0.900f, -0.402f);
            glVertex2f(-0.892f, -0.378f);
            glVertex2f(-0.885f, -0.362f);
            glVertex2f(-0.874f, -0.35f);
            glVertex2f(-0.872f, -0.35f);
            glVertex2f(-0.865f, -0.342f);
            glVertex2f(-0.858f, -0.338f);
            glVertex2f(-0.854f, -0.338f);
            glVertex2f(-0.845f, -0.334f);
            glVertex2f(-0.838f, -0.33f);
            glVertex2f(-0.820f, -0.323f);

           // glColor3ub(145, 102, 32 );
            glVertex2f(-0.814f, -0.319f);
            glVertex2f(-0.805f, -0.319f);
            glVertex2f(-0.805f, -0.319f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(204, 143, 43 );
            glVertex2f(-0.660f, -0.303f);
            glVertex2f(-0.660f, -0.24f);
            glVertex2f(-0.454f, -0.243f);

           // glColor3ub(145, 102, 32 );
            glVertex2f(-0.449f, -0.998f);
            glVertex2f(-0.638f, -1.002f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(204, 143, 43  );
            glVertex2f(-0.523f, -0.267f);
            glVertex2f(-0.520f, -0.192f);

            //glColor3ub(145, 102, 32 );
            glVertex2f(0.386f, -0.176f);
            glVertex2f(0.391f, -1.002f);
            glVertex2f(-0.463f, -0.998f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(204, 143, 43 );
            glVertex2f(0.422f, -0.291f);
            glVertex2f(0.717f, -0.287f);

            //glColor3ub(145, 102, 32 );
            glVertex2f(0.717f, -1.002f);
            glVertex2f(0.377f, -1.002f);
            glVertex2f(0.382f, -0.2f);
            glVertex2f(0.420f, -0.2f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(204, 143, 43  );
            glVertex2f(0.824f, -0.398f);
            glVertex2f(0.895f, -0.433f);

           // glColor3ub(145, 102, 32 );
            glVertex2f(0.991f, -0.429f);
            glVertex2f(0.991f, -1.002f);
            glVertex2f(0.702f, -1.002f);
            glVertex2f(0.713f, -0.307f);
            glVertex2f(0.751f, -0.334f);
            glVertex2f(0.782f, -0.366f);
            glEnd();


            glPushMatrix();
            glTranslatef(.02,-.1,0);
              glBegin(GL_TRIANGLE_FAN);
            glColor3ub(204, 143, 43);
            glVertex2f(-0.998f, -1.002f);
            glVertex2f(-1.003f, -0.789f);
           //glColor3ub(145, 102, 32 );
            glVertex2f(1.000f, -0.789f);
            glVertex2f(1.002f, -1.002f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
           // glColor3ub(204, 143, 43);
            glVertex2f(0.953f, -0.326f);
            glVertex2f(0.951f, -0.323f);
            glVertex2f(1.002f, -0.323f);
            glVertex2f(1.002f, -0.805f);
            glVertex2f(0.971f, -0.797f);
            glEnd();

            glPopMatrix();
            glPopMatrix();
}

void mountain_back()

{


    glPushMatrix();
    glTranslated(0,3,0);
    glScalef(32,18,0);

     glBegin(GL_TRIANGLE_FAN);

            glColor3ub(188,199,200);
            glVertex2f(-0.878f, 0.29f);
            glVertex2f(-0.847f, 0.353f);
            glVertex2f(-0.780f, 0.389f);
            glVertex2f(-0.747f, 0.425f);
            glVertex2f(-0.712f, 0.389f);
            glVertex2f(-0.712f, 0.069f);
            glVertex2f(-1.000f, 0.053f);
            glVertex2f(-1.000f, 0.262f);
            glVertex2f(-1.003f, 0.258f);
            glVertex2f(-0.960f, 0.266f);
            glVertex2f(-0.923f, 0.298f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(188,199,200);
            glVertex2f(-0.056f, 0.361f);
            glVertex2f(-0.038f, 0.338f);
            glVertex2f(-0.007f, 0.381f);
            glVertex2f(0.051f, 0.302f);
            glVertex2f(0.077f, 0.318f);
            glVertex2f(0.140f, 0.247f);
            glVertex2f(0.153f, 0.266f);
            glVertex2f(0.180f, 0.211f);
            glVertex2f(0.188f, 0.049f);
            glVertex2f(-0.294f, 0.061f);
            glVertex2f(-0.278f, 0.338f);
            glVertex2f(-0.278f, 0.334f);
            glVertex2f(-0.254f, 0.353f);
            glVertex2f(-0.232f, 0.334f);
            glVertex2f(-0.189f, 0.421f);
            glVertex2f(-0.176f, 0.389f);
            glVertex2f(-0.156f, 0.428f);
            glVertex2f(-0.094f, 0.353f);
            glVertex2f(-0.083f, 0.373f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(188,199,200);
            glVertex2f(0.460f, 0.33f);
            glVertex2f(0.504f, 0.274f);
            glVertex2f(0.522f, 0.306f);
            glVertex2f(0.597f, 0.219f);
            glVertex2f(0.597f, 0.037f);
            glVertex2f(0.273f, 0.021f);
            glVertex2f(0.266f, 0.203f);
            glVertex2f(0.264f, 0.203f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(188,199,200);
            glVertex2f(0.955f, 0.262f);
            glVertex2f(1.002f, 0.243f);
            glVertex2f(1.000f, 0.132f);
            glVertex2f(0.933f, 0.128f);
            glVertex2f(0.933f, 0.239f);
            glVertex2f(0.931f, 0.243f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
           glColor3ub(188,199,200);
            glVertex2f(-0.958f, 0.057f);
            glVertex2f(-1.000f, 0.053f);
            glVertex2f(-1.000f, 0.053f);
            glVertex2f(-0.954f, 0.025f);
            glEnd();



            //*******************************snow*********************************

            glPushMatrix();
            glTranslatef(0,-.1,0);


             glBegin(GL_TRIANGLE_FAN);
            glColor3ub(250,250,250);
            glVertex2f(-0.196f, 0.44f);
            glVertex2f(-0.189f, 0.428f);
            glVertex2f(-0.189f, 0.425f);
            glVertex2f(-0.185f, 0.421f);
            glVertex2f(-0.183f, 0.421f);
            glVertex2f(-0.180f, 0.428f);
            glVertex2f(-0.176f, 0.432f);
            glVertex2f(-0.174f, 0.421f);
            glVertex2f(-0.169f, 0.413f);
            glVertex2f(-0.163f, 0.413f);
            glVertex2f(-0.154f, 0.405f);
            glVertex2f(-0.149f, 0.409f);
            glVertex2f(-0.145f, 0.428f);
            glVertex2f(-0.138f, 0.464f);
            glVertex2f(-0.132f, 0.508f);
            glVertex2f(-0.156f, 0.519f);
            glVertex2f(-0.165f, 0.504f);
            glVertex2f(-0.189f, 0.511f);
            glVertex2f(-0.223f, 0.448f);
            glVertex2f(-0.256f, 0.452f);
            glVertex2f(-0.276f, 0.436f);
            glVertex2f(-0.267f, 0.409f);
            glVertex2f(-0.256f, 0.428f);
            glVertex2f(-0.232f, 0.413f);
            glVertex2f(-0.232f, 0.413f);
            glVertex2f(-0.216f, 0.425f);
            glVertex2f(-0.209f, 0.428f);
            glVertex2f(-0.207f, 0.428f);
            glVertex2f(-0.205f, 0.436f);
            glVertex2f(-0.200f, 0.44f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(250,250,250);
            glVertex2f(-0.196f, 0.44f);
            glVertex2f(-0.189f, 0.428f);
            glVertex2f(-0.189f, 0.425f);
            glVertex2f(-0.185f, 0.421f);
            glVertex2f(-0.183f, 0.421f);
            glVertex2f(-0.180f, 0.428f);
            glVertex2f(-0.176f, 0.432f);
            glVertex2f(-0.174f, 0.421f);
            glVertex2f(-0.169f, 0.413f);
            glVertex2f(-0.163f, 0.413f);
            glVertex2f(-0.154f, 0.405f);
            glVertex2f(-0.149f, 0.409f);
            glVertex2f(-0.145f, 0.428f);
            glVertex2f(-0.138f, 0.464f);
            glVertex2f(-0.132f, 0.508f);
            glVertex2f(-0.156f, 0.519f);
            glVertex2f(-0.165f, 0.504f);
            glVertex2f(-0.189f, 0.511f);
            glVertex2f(-0.223f, 0.448f);
            glVertex2f(-0.256f, 0.452f);
            glVertex2f(-0.276f, 0.436f);
            glVertex2f(-0.267f, 0.409f);
            glVertex2f(-0.256f, 0.428f);
            glVertex2f(-0.232f, 0.413f);
            glVertex2f(-0.232f, 0.413f);
            glVertex2f(-0.216f, 0.425f);
            glVertex2f(-0.209f, 0.428f);
            glVertex2f(-0.207f, 0.428f);
            glVertex2f(-0.205f, 0.436f);
            glVertex2f(-0.200f, 0.44f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(250,250,250);
            glVertex2f(-0.196f, 0.44f);
            glVertex2f(-0.189f, 0.428f);
            glVertex2f(-0.189f, 0.425f);
            glVertex2f(-0.185f, 0.421f);
            glVertex2f(-0.183f, 0.421f);
            glVertex2f(-0.180f, 0.428f);
            glVertex2f(-0.176f, 0.432f);
            glVertex2f(-0.174f, 0.421f);
            glVertex2f(-0.169f, 0.413f);
            glVertex2f(-0.163f, 0.413f);
            glVertex2f(-0.154f, 0.405f);
            glVertex2f(-0.149f, 0.409f);
            glVertex2f(-0.145f, 0.428f);
            glVertex2f(-0.138f, 0.464f);
            glVertex2f(-0.132f, 0.508f);
            glVertex2f(-0.156f, 0.519f);
            glVertex2f(-0.165f, 0.504f);
            glVertex2f(-0.189f, 0.511f);
            glVertex2f(-0.223f, 0.448f);
            glVertex2f(-0.256f, 0.452f);
            glVertex2f(-0.276f, 0.436f);
            glVertex2f(-0.267f, 0.409f);
            glVertex2f(-0.256f, 0.428f);
            glVertex2f(-0.232f, 0.413f);
            glVertex2f(-0.232f, 0.413f);
            glVertex2f(-0.216f, 0.425f);
            glVertex2f(-0.209f, 0.428f);
            glVertex2f(-0.207f, 0.428f);
            glVertex2f(-0.205f, 0.436f);
            glVertex2f(-0.200f, 0.44f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(250,250,250);
            glVertex2f(-0.196f, 0.44f);
            glVertex2f(-0.189f, 0.428f);
            glVertex2f(-0.189f, 0.425f);
            glVertex2f(-0.185f, 0.421f);
            glVertex2f(-0.183f, 0.421f);
            glVertex2f(-0.180f, 0.428f);
            glVertex2f(-0.176f, 0.432f);
            glVertex2f(-0.174f, 0.421f);
            glVertex2f(-0.169f, 0.413f);
            glVertex2f(-0.163f, 0.413f);
            glVertex2f(-0.154f, 0.405f);
            glVertex2f(-0.149f, 0.409f);
            glVertex2f(-0.145f, 0.428f);
            glVertex2f(-0.138f, 0.464f);
            glVertex2f(-0.132f, 0.508f);
            glVertex2f(-0.156f, 0.519f);
            glVertex2f(-0.165f, 0.504f);
            glVertex2f(-0.189f, 0.511f);
            glVertex2f(-0.223f, 0.448f);
            glVertex2f(-0.256f, 0.452f);
            glVertex2f(-0.276f, 0.436f);
            glVertex2f(-0.267f, 0.409f);
            glVertex2f(-0.256f, 0.428f);
            glVertex2f(-0.232f, 0.413f);
            glVertex2f(-0.232f, 0.413f);
            glVertex2f(-0.216f, 0.425f);
            glVertex2f(-0.209f, 0.428f);
            glVertex2f(-0.207f, 0.428f);
            glVertex2f(-0.205f, 0.436f);
            glVertex2f(-0.200f, 0.44f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(250,250,250);
            glVertex2f(-0.103f, 0.432f);
            glVertex2f(-0.096f, 0.436f);
            glVertex2f(-0.087f, 0.428f);
            glVertex2f(-0.085f, 0.421f);
            glVertex2f(-0.083f, 0.409f);
            glVertex2f(-0.074f, 0.413f);
            glVertex2f(-0.074f, 0.413f);
            glVertex2f(-0.065f, 0.425f);
            glVertex2f(-0.058f, 0.46f);
            glVertex2f(-0.134f, 0.504f);
            glVertex2f(-0.149f, 0.401f);
            glVertex2f(-0.136f, 0.401f);
            glVertex2f(-0.132f, 0.409f);
            glVertex2f(-0.125f, 0.401f);
            glVertex2f(-0.116f, 0.405f);
            glVertex2f(-0.109f, 0.421f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(250,250,250);
            glVertex2f(-0.103f, 0.432f);
            glVertex2f(-0.096f, 0.436f);
            glVertex2f(-0.087f, 0.428f);
            glVertex2f(-0.085f, 0.421f);
            glVertex2f(-0.083f, 0.409f);
            glVertex2f(-0.074f, 0.413f);
            glVertex2f(-0.074f, 0.413f);
            glVertex2f(-0.065f, 0.425f);
            glVertex2f(-0.058f, 0.46f);
            glVertex2f(-0.134f, 0.504f);
            glVertex2f(-0.149f, 0.401f);
            glVertex2f(-0.136f, 0.401f);
            glVertex2f(-0.132f, 0.409f);
            glVertex2f(-0.125f, 0.401f);
            glVertex2f(-0.116f, 0.405f);
            glVertex2f(-0.109f, 0.421f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(250,250,250);
            glVertex2f(-0.103f, 0.432f);
            glVertex2f(-0.096f, 0.436f);
            glVertex2f(-0.087f, 0.428f);
            glVertex2f(-0.085f, 0.421f);
            glVertex2f(-0.083f, 0.409f);
            glVertex2f(-0.074f, 0.413f);
            glVertex2f(-0.074f, 0.413f);
            glVertex2f(-0.065f, 0.425f);
            glVertex2f(-0.058f, 0.46f);
            glVertex2f(-0.134f, 0.504f);
            glVertex2f(-0.149f, 0.401f);
            glVertex2f(-0.136f, 0.401f);
            glVertex2f(-0.132f, 0.409f);
            glVertex2f(-0.125f, 0.401f);
            glVertex2f(-0.116f, 0.405f);
            glVertex2f(-0.109f, 0.421f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(250,250,250);
            glVertex2f(-0.012f, 0.425f);
            glVertex2f(-0.007f, 0.425f);
            glVertex2f(0.002f, 0.413f);
            glVertex2f(0.002f, 0.409f);
            glVertex2f(0.004f, 0.409f);
            glVertex2f(0.008f, 0.405f);
            glVertex2f(0.008f, 0.405f);
            glVertex2f(0.013f, 0.405f);
            glVertex2f(0.015f, 0.405f);
            glVertex2f(0.015f, 0.417f);
            glVertex2f(0.020f, 0.425f);
            glVertex2f(0.024f, 0.425f);
            glVertex2f(0.033f, 0.432f);
            glVertex2f(0.024f, 0.44f);
            glVertex2f(0.017f, 0.444f);
            glVertex2f(-0.005f, 0.48f);
            glVertex2f(-0.063f, 0.456f);
            glVertex2f(-0.065f, 0.421f);
            glVertex2f(-0.063f, 0.421f);
            glVertex2f(-0.056f, 0.428f);
            glVertex2f(-0.052f, 0.436f);
            glVertex2f(-0.047f, 0.44f);
            glVertex2f(-0.043f, 0.44f);
            glVertex2f(-0.036f, 0.432f);
            glVertex2f(-0.036f, 0.432f);
            glVertex2f(-0.034f, 0.421f);
            glVertex2f(-0.032f, 0.405f);
            glVertex2f(-0.023f, 0.413f);
            glVertex2f(-0.016f, 0.417f);
            glVertex2f(-0.016f, 0.417f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(250,250,250);
            glVertex2f(-0.012f, 0.425f);
            glVertex2f(-0.007f, 0.425f);
            glVertex2f(0.002f, 0.413f);
            glVertex2f(0.002f, 0.409f);
            glVertex2f(0.004f, 0.409f);
            glVertex2f(0.008f, 0.405f);
            glVertex2f(0.008f, 0.405f);
            glVertex2f(0.013f, 0.405f);
            glVertex2f(0.015f, 0.405f);
            glVertex2f(0.015f, 0.417f);
            glVertex2f(0.020f, 0.425f);
            glVertex2f(0.024f, 0.425f);
            glVertex2f(0.033f, 0.432f);
            glVertex2f(0.024f, 0.44f);
            glVertex2f(0.017f, 0.444f);
            glVertex2f(-0.005f, 0.48f);
            glVertex2f(-0.063f, 0.456f);
            glVertex2f(-0.065f, 0.421f);
            glVertex2f(-0.063f, 0.421f);
            glVertex2f(-0.056f, 0.428f);
            glVertex2f(-0.052f, 0.436f);
            glVertex2f(-0.047f, 0.44f);
            glVertex2f(-0.043f, 0.44f);
            glVertex2f(-0.036f, 0.432f);
            glVertex2f(-0.036f, 0.432f);
            glVertex2f(-0.034f, 0.421f);
            glVertex2f(-0.032f, 0.405f);
            glVertex2f(-0.023f, 0.413f);
            glVertex2f(-0.016f, 0.417f);
            glVertex2f(-0.016f, 0.417f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(250,250,250);
            glVertex2f(-0.012f, 0.425f);
            glVertex2f(-0.007f, 0.425f);
            glVertex2f(0.002f, 0.413f);
            glVertex2f(0.002f, 0.409f);
            glVertex2f(0.004f, 0.409f);
            glVertex2f(0.008f, 0.405f);
            glVertex2f(0.008f, 0.405f);
            glVertex2f(0.013f, 0.405f);
            glVertex2f(0.015f, 0.405f);
            glVertex2f(0.015f, 0.417f);
            glVertex2f(0.020f, 0.425f);
            glVertex2f(0.024f, 0.425f);
            glVertex2f(0.033f, 0.432f);
            glVertex2f(0.024f, 0.44f);
            glVertex2f(0.017f, 0.444f);
            glVertex2f(-0.005f, 0.48f);
            glVertex2f(-0.063f, 0.456f);
            glVertex2f(-0.065f, 0.421f);
            glVertex2f(-0.063f, 0.421f);
            glVertex2f(-0.056f, 0.428f);
            glVertex2f(-0.052f, 0.436f);
            glVertex2f(-0.047f, 0.44f);
            glVertex2f(-0.043f, 0.44f);
            glVertex2f(-0.036f, 0.432f);
            glVertex2f(-0.036f, 0.432f);
            glVertex2f(-0.034f, 0.421f);
            glVertex2f(-0.032f, 0.405f);
            glVertex2f(-0.023f, 0.413f);
            glVertex2f(-0.016f, 0.417f);
            glVertex2f(-0.016f, 0.417f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(250,250,250);
            glVertex2f(0.095f, 0.357f);
            glVertex2f(0.095f, 0.357f);
            glVertex2f(0.102f, 0.361f);
            glVertex2f(0.104f, 0.365f);
            glVertex2f(0.108f, 0.365f);
            glVertex2f(0.124f, 0.365f);
            glVertex2f(0.128f, 0.365f);
            glVertex2f(0.131f, 0.353f);
            glVertex2f(0.135f, 0.345f);
            glVertex2f(0.140f, 0.334f);
            glVertex2f(0.142f, 0.326f);
            glVertex2f(0.146f, 0.314f);
            glVertex2f(0.177f, 0.33f);
            glVertex2f(0.153f, 0.373f);
            glVertex2f(0.102f, 0.389f);
            glVertex2f(0.077f, 0.421f);
            glVertex2f(0.031f, 0.432f);
            glVertex2f(0.026f, 0.421f);
            glVertex2f(0.033f, 0.413f);
            glVertex2f(0.035f, 0.413f);
            glVertex2f(0.048f, 0.409f);
            glVertex2f(0.048f, 0.409f);
            glVertex2f(0.048f, 0.409f);
            glVertex2f(0.053f, 0.401f);
            glVertex2f(0.055f, 0.401f);
            glVertex2f(0.057f, 0.385f);
            glVertex2f(0.064f, 0.385f);
            glVertex2f(0.068f, 0.389f);
            glVertex2f(0.073f, 0.385f);
            glVertex2f(0.073f, 0.381f);
            glVertex2f(0.073f, 0.373f);
            glVertex2f(0.077f, 0.353f);
            glVertex2f(0.088f, 0.353f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(250,250,250);
            glVertex2f(0.095f, 0.357f);
            glVertex2f(0.095f, 0.357f);
            glVertex2f(0.102f, 0.361f);
            glVertex2f(0.104f, 0.365f);
            glVertex2f(0.108f, 0.365f);
            glVertex2f(0.124f, 0.365f);
            glVertex2f(0.128f, 0.365f);
            glVertex2f(0.131f, 0.353f);
            glVertex2f(0.135f, 0.345f);
            glVertex2f(0.140f, 0.334f);
            glVertex2f(0.142f, 0.326f);
            glVertex2f(0.146f, 0.314f);
            glVertex2f(0.177f, 0.33f);
            glVertex2f(0.153f, 0.373f);
            glVertex2f(0.102f, 0.389f);
            glVertex2f(0.077f, 0.421f);
            glVertex2f(0.031f, 0.432f);
            glVertex2f(0.026f, 0.421f);
            glVertex2f(0.033f, 0.413f);
            glVertex2f(0.035f, 0.413f);
            glVertex2f(0.048f, 0.409f);
            glVertex2f(0.048f, 0.409f);
            glVertex2f(0.048f, 0.409f);
            glVertex2f(0.053f, 0.401f);
            glVertex2f(0.055f, 0.401f);
            glVertex2f(0.057f, 0.385f);
            glVertex2f(0.064f, 0.385f);
            glVertex2f(0.068f, 0.389f);
            glVertex2f(0.073f, 0.385f);
            glVertex2f(0.073f, 0.381f);
            glVertex2f(0.073f, 0.373f);
            glVertex2f(0.077f, 0.353f);
            glVertex2f(0.088f, 0.353f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(250,250,250);
            glVertex2f(0.337f, 0.326f);
            glVertex2f(0.344f, 0.326f);
            glVertex2f(0.348f, 0.33f);
            glVertex2f(0.351f, 0.334f);
            glVertex2f(0.351f, 0.342f);
            glVertex2f(0.360f, 0.342f);
            glVertex2f(0.364f, 0.342f);
            glVertex2f(0.368f, 0.342f);
            glVertex2f(0.373f, 0.342f);
            glVertex2f(0.375f, 0.349f);
            glVertex2f(0.377f, 0.361f);
            glVertex2f(0.377f, 0.365f);
            glVertex2f(0.382f, 0.369f);
            glVertex2f(0.386f, 0.373f);
            glVertex2f(0.386f, 0.373f);
            glVertex2f(0.386f, 0.377f);
            glVertex2f(0.386f, 0.381f);
            glVertex2f(0.386f, 0.381f);
            glVertex2f(0.373f, 0.381f);
            glVertex2f(0.268f, 0.318f);
            glVertex2f(0.284f, 0.306f);
            glVertex2f(0.286f, 0.31f);
            glVertex2f(0.291f, 0.314f);
            glVertex2f(0.293f, 0.318f);
            glVertex2f(0.302f, 0.322f);
            glVertex2f(0.306f, 0.322f);
            glVertex2f(0.308f, 0.318f);
            glVertex2f(0.313f, 0.314f);
            glVertex2f(0.313f, 0.314f);
            glVertex2f(0.317f, 0.314f);
            glVertex2f(0.322f, 0.318f);
            glVertex2f(0.324f, 0.322f);
            glVertex2f(0.326f, 0.326f);
            glVertex2f(0.331f, 0.326f);
            glVertex2f(0.331f, 0.326f);
            glVertex2f(0.333f, 0.326f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(250,250,250);
            glVertex2f(0.337f, 0.326f);
            glVertex2f(0.344f, 0.326f);
            glVertex2f(0.348f, 0.33f);
            glVertex2f(0.351f, 0.334f);
            glVertex2f(0.351f, 0.342f);
            glVertex2f(0.360f, 0.342f);
            glVertex2f(0.364f, 0.342f);
            glVertex2f(0.368f, 0.342f);
            glVertex2f(0.373f, 0.342f);
            glVertex2f(0.375f, 0.349f);
            glVertex2f(0.377f, 0.361f);
            glVertex2f(0.377f, 0.365f);
            glVertex2f(0.382f, 0.369f);
            glVertex2f(0.386f, 0.373f);
            glVertex2f(0.386f, 0.373f);
            glVertex2f(0.386f, 0.377f);
            glVertex2f(0.386f, 0.381f);
            glVertex2f(0.386f, 0.381f);
            glVertex2f(0.373f, 0.381f);
            glVertex2f(0.268f, 0.318f);
            glVertex2f(0.284f, 0.306f);
            glVertex2f(0.286f, 0.31f);
            glVertex2f(0.291f, 0.314f);
            glVertex2f(0.293f, 0.318f);
            glVertex2f(0.302f, 0.322f);
            glVertex2f(0.306f, 0.322f);
            glVertex2f(0.308f, 0.318f);
            glVertex2f(0.313f, 0.314f);
            glVertex2f(0.313f, 0.314f);
            glVertex2f(0.317f, 0.314f);
            glVertex2f(0.322f, 0.318f);
            glVertex2f(0.324f, 0.322f);
            glVertex2f(0.326f, 0.326f);
            glVertex2f(0.331f, 0.326f);
            glVertex2f(0.331f, 0.326f);
            glVertex2f(0.333f, 0.326f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(250,250,250);
            glVertex2f(0.453f, 0.33f);
            glVertex2f(0.460f, 0.322f);
            glVertex2f(0.462f, 0.318f);
            glVertex2f(0.464f, 0.318f);
            glVertex2f(0.475f, 0.334f);
            glVertex2f(0.475f, 0.334f);
            glVertex2f(0.480f, 0.338f);
            glVertex2f(0.480f, 0.338f);
            glVertex2f(0.482f, 0.338f);
            glVertex2f(0.491f, 0.338f);
            glVertex2f(0.495f, 0.334f);
            glVertex2f(0.495f, 0.33f);
            glVertex2f(0.497f, 0.326f);
            glVertex2f(0.502f, 0.326f);
            glVertex2f(0.506f, 0.318f);
            glVertex2f(0.511f, 0.318f);
            glVertex2f(0.515f, 0.314f);
            glVertex2f(0.517f, 0.31f);
            glVertex2f(0.517f, 0.31f);
            glVertex2f(0.522f, 0.302f);
            glVertex2f(0.526f, 0.294f);
            glVertex2f(0.582f, 0.345f);
            glVertex2f(0.522f, 0.413f);
            glVertex2f(0.457f, 0.432f);
            glVertex2f(0.380f, 0.377f);
            glVertex2f(0.380f, 0.365f);
            glVertex2f(0.386f, 0.349f);
            glVertex2f(0.393f, 0.345f);
            glVertex2f(0.393f, 0.345f);
            glVertex2f(0.400f, 0.345f);
            glVertex2f(0.404f, 0.345f);
            glVertex2f(0.406f, 0.349f);
            glVertex2f(0.408f, 0.349f);
            glVertex2f(0.417f, 0.338f);
            glVertex2f(0.420f, 0.326f);
            glVertex2f(0.426f, 0.314f);
            glVertex2f(0.428f, 0.314f);
            glVertex2f(0.435f, 0.318f);
            glVertex2f(0.435f, 0.322f);
            glVertex2f(0.440f, 0.326f);
            glVertex2f(0.440f, 0.33f);
            glVertex2f(0.442f, 0.334f);
            glVertex2f(0.444f, 0.334f);
            glVertex2f(0.446f, 0.338f);
            glVertex2f(0.448f, 0.338f);
            glVertex2f(0.451f, 0.338f);
            glEnd();

               glBegin(GL_TRIANGLE_FAN);
            glColor3ub(245,245,245);
            glVertex2f(-0.956f, 0.33f);
            glVertex2f(-0.956f, 0.334f);
            glVertex2f(-0.952f, 0.338f);
            glVertex2f(-0.947f, 0.338f);
            glVertex2f(-0.940f, 0.334f);
            glVertex2f(-0.936f, 0.33f);
            glVertex2f(-0.934f, 0.33f);
            glVertex2f(-0.932f, 0.33f);
            glVertex2f(-0.927f, 0.33f);
            glVertex2f(-0.923f, 0.33f);
            glVertex2f(-0.920f, 0.326f);
            glVertex2f(-0.918f, 0.318f);
            glVertex2f(-0.916f, 0.314f);
            glVertex2f(-0.916f, 0.314f);
            glVertex2f(-0.912f, 0.314f);
            glVertex2f(-0.892f, 0.401f);
            glVertex2f(-0.909f, 0.397f);
            glVertex2f(-0.923f, 0.401f);
            glVertex2f(-0.925f, 0.405f);
            glVertex2f(-0.949f, 0.373f);
            glVertex2f(-0.960f, 0.373f);
            glVertex2f(-0.987f, 0.369f);
            glVertex2f(-1.003f, 0.334f);
            glVertex2f(-0.998f, 0.334f);
            glVertex2f(-0.994f, 0.33f);
            glVertex2f(-0.994f, 0.326f);
            glVertex2f(-0.992f, 0.318f);
            glVertex2f(-0.985f, 0.306f);
            glVertex2f(-0.985f, 0.302f);
            glVertex2f(-0.983f, 0.298f);
            glVertex2f(-0.980f, 0.298f);
            glVertex2f(-0.980f, 0.306f);
            glVertex2f(-0.978f, 0.306f);
            glVertex2f(-0.976f, 0.306f);
            glVertex2f(-0.974f, 0.302f);
            glVertex2f(-0.969f, 0.302f);
            glVertex2f(-0.967f, 0.302f);
            glVertex2f(-0.960f, 0.314f);
            glVertex2f(-0.958f, 0.322f);
            glVertex2f(-0.956f, 0.326f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(245,245,245);
            glVertex2f(-0.989f, 0.365f);
            glVertex2f(-1.000f, 0.342f);
            glVertex2f(-1.000f, 0.369f);
            glVertex2f(-0.987f, 0.369f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(245,245,245);
            glVertex2f(-0.814f, 0.409f);
            glVertex2f(-0.812f, 0.413f);
            glVertex2f(-0.803f, 0.413f);
            glVertex2f(-0.798f, 0.413f);
            glVertex2f(-0.796f, 0.413f);
            glVertex2f(-0.792f, 0.413f);
            glVertex2f(-0.787f, 0.428f);
            glVertex2f(-0.780f, 0.44f);
            glVertex2f(-0.774f, 0.44f);
            glVertex2f(-0.772f, 0.436f);
            glVertex2f(-0.769f, 0.436f);
            glVertex2f(-0.763f, 0.432f);
            glVertex2f(-0.763f, 0.432f);
            glVertex2f(-0.760f, 0.417f);
            glVertex2f(-0.754f, 0.417f);
            glVertex2f(-0.749f, 0.413f);
            glVertex2f(-0.749f, 0.409f);
            glVertex2f(-0.709f, 0.484f);
            glVertex2f(-0.745f, 0.519f);
            glVertex2f(-0.760f, 0.504f);
            glVertex2f(-0.776f, 0.488f);
            glVertex2f(-0.776f, 0.476f);
            glVertex2f(-0.803f, 0.468f);
            glVertex2f(-0.834f, 0.452f);
            glVertex2f(-0.847f, 0.452f);
            glVertex2f(-0.876f, 0.397f);
            glVertex2f(-0.905f, 0.385f);
            glVertex2f(-0.900f, 0.377f);
            glVertex2f(-0.889f, 0.369f);
            glVertex2f(-0.872f, 0.369f);
            glVertex2f(-0.872f, 0.373f);
            glVertex2f(-0.869f, 0.373f);
            glVertex2f(-0.865f, 0.373f);
            glVertex2f(-0.865f, 0.373f);
            glVertex2f(-0.860f, 0.389f);
            glVertex2f(-0.854f, 0.389f);
            glVertex2f(-0.840f, 0.389f);
            glVertex2f(-0.838f, 0.377f);
            glVertex2f(-0.838f, 0.377f);
            glVertex2f(-0.838f, 0.365f);
            glVertex2f(-0.838f, 0.365f);
            glVertex2f(-0.838f, 0.365f);
            glVertex2f(-0.829f, 0.365f);
            glVertex2f(-0.827f, 0.369f);
            glVertex2f(-0.823f, 0.373f);
            glVertex2f(-0.816f, 0.381f);
            glVertex2f(-0.814f, 0.389f);
            glVertex2f(-0.814f, 0.397f);
            glVertex2f(-0.814f, 0.405f);
            glEnd();
            glPopMatrix();

            //*********background mountain shadow


             glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,137,137);
            glVertex2f(-0.943f, 0.251f);
            glVertex2f(-0.920f, 0.286f);
            glVertex2f(-0.903f, 0.286f);
            glVertex2f(-0.920f, 0.219f);
            glVertex2f(-0.989f, 0.191f);
            glVertex2f(-0.989f, 0.191f);
            glVertex2f(-0.983f, 0.251f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,137,137);
            glVertex2f(-0.798f, 0.334f);
            glVertex2f(-0.763f, 0.393f);
            glVertex2f(-0.754f, 0.409f);
            glVertex2f(-0.754f, 0.385f);
            glVertex2f(-0.785f, 0.322f);
            glVertex2f(-0.820f, 0.298f);
            glVertex2f(-0.820f, 0.294f);
            glVertex2f(-0.814f, 0.334f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,137,137);
            glVertex2f(-0.169f, 0.369f);
            glVertex2f(-0.152f, 0.389f);
            glVertex2f(-0.152f, 0.417f);
            glVertex2f(-0.218f, 0.322f);
            glVertex2f(-0.216f, 0.326f);
            glVertex2f(-0.192f, 0.326f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,137,137);
            glVertex2f(-0.140f, 0.29f);
            glVertex2f(-0.154f, 0.247f);
            glVertex2f(-0.152f, 0.243f);
            glVertex2f(-0.163f, 0.294f);
            glVertex2f(-0.143f, 0.397f);
            glVertex2f(-0.118f, 0.373f);
            glVertex2f(-0.114f, 0.345f);
            glVertex2f(-0.116f, 0.314f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,137,137);
            glVertex2f(-0.045f, 0.302f);
            glVertex2f(-0.014f, 0.361f);
            glVertex2f(-0.009f, 0.326f);
            glVertex2f(0.002f, 0.302f);
            glVertex2f(-0.049f, 0.278f);
            glVertex2f(-0.067f, 0.251f);
            glVertex2f(-0.069f, 0.247f);
            glVertex2f(-0.069f, 0.278f);
            glVertex2f(-0.058f, 0.302f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,137,137);
            glVertex2f(0.028f, 0.314f);
            glVertex2f(0.002f, 0.353f);
            glVertex2f(0.026f, 0.262f);
            glVertex2f(0.026f, 0.266f);
            glVertex2f(0.042f, 0.278f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,137,137);
            glVertex2f(0.411f, 0.243f);
            glVertex2f(0.460f, 0.314f);
            glVertex2f(0.455f, 0.282f);
            glVertex2f(0.426f, 0.235f);
            glVertex2f(0.388f, 0.207f);
            glVertex2f(0.388f, 0.207f);
            glVertex2f(0.397f, 0.235f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,137,137);
            glVertex2f(0.495f, 0.27f);
            glVertex2f(0.524f, 0.282f);
            glVertex2f(0.562f, 0.239f);
            glVertex2f(0.473f, 0.219f);
            glVertex2f(0.475f, 0.219f);
            glEnd();

            glPopMatrix();
}

void sidewater()
{
    //left part

    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255 );

    glVertex2d(-32,-7);
    glVertex2d(-25,-7);
    glVertex2d(-25,-2);
    glVertex2d(-32,-2);
    glEnd();

    //right part

    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255 );

    glVertex2d(23.50,-2);
    glVertex2d(23.50,-6);
    glVertex2d(32,-6);
    glVertex2d(32,-2);
    glEnd();





}


void drain()

{
    //first canal


    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255);

    glVertex2d(-23.25,-4);
    glVertex2d(-23.25,-9);
    glVertex2d(-22.75,-9);
    glVertex2d(-22.75,-4);

    glEnd();


    glBegin(GL_LINES);
    glColor3b(0,0,0);

    glVertex2d(-23.25,-4);
    glVertex2d(-23.25,-9);

    glVertex2d(-22.75,-4);
    glVertex2d(-22.75,-9);
   // glVertex2d(-22.75,-4);

    glEnd();

    //fourth canal

    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255);

    glVertex2d(-1,-5);
    glVertex2d(-1,-9);
    glVertex2d(0,-9);
    glVertex2d(0,-5);
    glEnd();

    glBegin(GL_LINES);
    glColor3b(0,0,0);

    glVertex2d(-1,-9);
    glVertex2d(-1,-5);

    glVertex2d(0,-5);
    glVertex2d(0,-9);
    glEnd();

    //thrird canal

    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255);

    glVertex2d(-12.5,-2);
    glVertex2d(-12.5,-9);
    glVertex2d(-12,-9);
    glVertex2d(-12,-2);
    glEnd();

    glBegin(GL_LINES);
    glColor3b(0,0,0);
    glVertex2d(-12.5,-2);
    glVertex2d(-12.5,-9);
    glVertex2d(-12,-9);
    glVertex2d(-12,-2);
    glEnd();

    //2nd canal

    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255);
    glVertex2d(-18.25,-3);
    glVertex2d(-18.25,-9);
    glVertex2d(-17.75,-9);
    glVertex2d(-17.75,-3);
    glEnd();

    glBegin(GL_LINES);
    glColor3b(0,0,0);
    glVertex2d(-18.25,-9);
    glVertex2d(-18.25,-3);
    glVertex2d(-17.75,-3);
    glVertex2d(-17.75,-9);
    glEnd();

    //fifth canal

    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255);
    glVertex2d(8.25,-2);
    glVertex2d(8.25,-9);
    glVertex2d(8.75,-9);
    glVertex2d(8.75,-2);
    glEnd();

    glBegin(GL_LINES);
    glColor3b(0,0,0);
    glVertex2d(8.25,-9);
    glVertex2d(8.25,-2);
    glVertex2d(8.75,-2);
    glVertex2d(8.75,-9);
    glEnd();

    //sixth canal
    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255);
    glVertex2d(14,-4);
    glVertex2d(14,-9);
    glVertex2d(14.50,-9);
    glVertex2d(14.50,-4);
    glEnd();

    glBegin(GL_LINES);
    glColor3b(0,0,0);
    glVertex2d(14,-4);
    glVertex2d(14,-9);
    glVertex2d(14.50,-9);
    glVertex2d(14.50,-4);
    glEnd();

    //8th canal

    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255);
    glVertex2d(20,-4);
    glVertex2d(20,-9);
    glVertex2d(20.5,-9);
    glVertex2d(20.5,-4);
    glEnd();

    glBegin(GL_LINES);
    glColor3b(0,0,0);
    glVertex2d(20,-4);
    glVertex2d(20,-9);
    glVertex2d(20.5,-9);
    glVertex2d(20.5,-4);
    glEnd();

    //main pipe

    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255);
    glVertex2d(-32,-9);
    glVertex2d(-32,-10);
    glVertex2d(32,-10);
    glVertex2d(32,-9);
    glEnd();
    glBegin(GL_LINES);
    glColor3b(0,0,0);
    glVertex2d(-32,-9);
    glVertex2d(32,-9);
    glVertex2d(32,-10);
    glVertex2d(-32,-10);
    glEnd();



}



void ship1()
{
    glPushMatrix();
    glTranslatef(move_ship_x,move_ship_y,0);

    glPushMatrix();
    glScalef(.035,.05,0);
    glTranslatef(-790,-40,0);
    glBegin(GL_POLYGON);
    setColor("ship_side");
    glVertex2f(-12.0,7.0);
    glVertex2f(-1.0,7.0);
    glVertex2f(1.50,3.25);
    glVertex2f(3.00,3.25);
    glVertex2f(3.0,-1.0);
    glVertex2f(-12.0,-1.0);
    glVertex2f(-12.0,7.0);
    glEnd();


    glBegin(GL_POLYGON);
    setColor("ship_side");
    glVertex2f(3.0,3.25);
    glVertex2f(36.75,3.25);
    glVertex2f(36.75,-1.0);
    glVertex2f(3.0,-1.0);
    glVertex2f(3.0,3.25);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_side");
    glVertex2f(36.75,3.25);
    glVertex2f(38.0,6.0);
    glVertex2f(44.0,6.0);
    glVertex2f(40.0,-1.00);
    glVertex2f(36.75,-1.00);
    glVertex2f(36.75,3.25);
    glEnd();

    // bottom border

    glBegin(GL_POLYGON);
    setColor("Ship_Border");
    glVertex2f(-12.0,-1.0);
    glVertex2f(40.0,-1.0);
    glVertex2f(39.0,-2.00);
    glVertex2f(-11.0,-2.0);
    glVertex2f(-12.0,-1.0);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_side1");//yellow
    glVertex2f(-12.0,6.0);
    glVertex2f(-2.50,6.0);
    glVertex2f(-2.50,5.50);
    glVertex2f(-12.0,5.50);
    glVertex2f(-12.0,6.0);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_side1");//yellow
    glVertex2f(-2.50,6.0);
    glVertex2f(-2.00,6.0);
    glVertex2f(0.50,2.50);
    glVertex2f(0.25,2.00);
    glVertex2f(-2.25,5.50);
    glVertex2f(-2.50,5.50);
    glVertex2f(-2.50,6.0);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_side1");//yellow
    glVertex2f(0.50,2.50);
    glVertex2f(3.00,2.50);
    glVertex2f(3.0,2.0);
    glVertex2f(0.25,2.00);
    glVertex2f(0.5,2.50);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_side1");//yellow
    glVertex2f(0.50,2.50);
    glVertex2f(37.50,2.50);
    glVertex2f(38.0,2.0);
    glVertex2f(0.25,2.00);
    glVertex2f(0.5,2.50);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_side1");//yellow
    glVertex2f(37.50,2.50);
    glVertex2f(38.75,5.50);
    glVertex2f(39.25,5.0);
    glVertex2f(38.0,2.00);
    glVertex2f(37.50,2.50);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_side1");//yellow
    glVertex2f(38.75,5.50);
    glVertex2f(43.75,5.50);
    glVertex2f(43.45,4.99);
    glVertex2f(39.25,5.00);
    glVertex2f(38.75,5.50);
    glEnd();

    glBegin(GL_POLYGON);//white
    setColor("Firefly");
    glVertex2f(-11.50,7.00);
    glVertex2f(-11.50,8.75);
    glVertex2f(-6.75,8.75);
    glVertex2f(-6.75,7.00);
    glVertex2f(-11.50,7.00);
    glEnd();
    glBegin(GL_POLYGON); //white
    setColor("chimney");
    glVertex2f(-11.00,8.75);
    glVertex2f(-9.25,16.25);
    glVertex2f(-6.75,16.25);
    glVertex2f(-6.75,8.75);
    glVertex2f(-11.00,8.75);
    glEnd();
    glBegin(GL_POLYGON);
   // glColor3ub(5, 156, 65); //green
    setColor("Firefly");
    glVertex2f(-9.50,15.25);
    glVertex2f(-6.75,15.25);
    glVertex2f(-6.75,15.00);
    glVertex2f(-9.55,15.00);
    glVertex2f(-9.50,15.25);
    glEnd();
    glBegin(GL_POLYGON);
   // glColor3ub(5, 156, 65); //green
    setColor("Firefly");
    glVertex2f(-9.96,13.25);
    glVertex2f(-6.75,13.25);
    glVertex2f(-6.75,13.00);
    glVertex2f(-10.00,13.00);
    glVertex2f(-9.96,13.25);
    glEnd();
    glBegin(GL_POLYGON);
   // glColor3ub(232, 239, 16); //yellow
    setColor("White");
    glVertex2f(-9.55,15.00);
    glVertex2f(-6.75,15.00);
    glVertex2f(-6.75,13.25);
    glVertex2f(-9.96,13.25);
    glVertex2f(-9.55,15.00);
    glEnd();

    glBegin(GL_POLYGON);//ash chimney duck 1
    glColor3ub(97, 106, 107);
    glVertex2f(-8.00,16.25);
    glVertex2f(-8.00,17.25);
    glVertex2f(-8.50,17.75);
    glVertex2f(-8.25,18.25);
    glVertex2f(-7.50,17.50);
    glVertex2f(-7.25,17.00);
    glVertex2f(-7.00,16.75);
    glVertex2f(-7.00,16.25);
    glVertex2f(-8.00,16.25);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_body");// off-white
    glVertex2f(-6.00,7.00);
    glVertex2f(-6.00,13.00);
    glVertex2f(-1.00,13.00);
    glVertex2f(-1.00,7.00);
    glVertex2f(-6.00,7.00);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("Off white"); // off-white
    glVertex2f(-1.00,11.75);
    glVertex2f(4.00,11.75);
    glVertex2f(4.00,3.25);
    glVertex2f(1.50,3.25);
    glVertex2f(-1.00,7.00);
    glVertex2f(-1.00,11.75);
    glEnd();

    // Minor details
    glBegin(GL_POLYGON);
    glColor3ub(229, 232, 232);
    glVertex2f(-1.00,13.00);
    glVertex2f(3.00,13.00);
    glVertex2f(3.00,11.75);
    glVertex2f(-1.00,11.75);
    glVertex2f(-1.00,13.00);
    glEnd();


    //T
    glBegin(GL_POLYGON);
    glColor3ub(178, 186, 187);
    glVertex2f(3.00,11.75);
    glVertex2f(3.00,13.00);
    glVertex2f(4.00,13.00);
    glVertex2f(4.00,11.75);
    glVertex2f(3.00,11.75);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_body2");
    glVertex2f(4.00,10.75);
    glVertex2f(4.00,13.00);
    glVertex2f(9.50,13.00);
    glVertex2f(9.50,10.75);
    glVertex2f(4.00,10.75);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_body2");
    glVertex2f(9.50,11.50);
    glVertex2f(9.50,13.00);
    glVertex2f(11.50,13.00);
    glVertex2f(11.50,11.50);
    glVertex2f(9.50,11.50);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_body2");
    glVertex2f(4.00,9.00);
    glVertex2f(4.00,10.75);
    glVertex2f(9.50,10.75);
    glVertex2f(9.50,9.00);
    glVertex2f(4.00,9.00);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_body2");
    glVertex2f(4.00,3.25);
    glVertex2f(4.00,9.00);
    glVertex2f(9.50,9.00);
    glVertex2f(9.50,3.25);
    glVertex2f(4.00,3.25);
    glEnd();

    // Railing
    glBegin(GL_POLYGON);
    setColor("Railing");
    glVertex2f(-5.75,13.00);
    glVertex2f(-5.75,14.50);
    glVertex2f(12.50,14.50);
    glVertex2f(11.50,13.00);
    glVertex2f(-5.75,13.00);
    glEnd();
    ///

    glBegin(GL_POLYGON);
    setColor("chimney"); // chimney 2
    glVertex2f(-5.50,14.50);
    glVertex2f(-3.50,14.50);
    glVertex2f(-3.50,15.25);
    glVertex2f(-5.25,15.25);
    glVertex2f(-5.50,14.50);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("chimney");  // chimney 2
    glVertex2f(-5.22,15.50);
    glVertex2f(-5.00,16.25);
    glVertex2f(-3.50,16.25);
    glVertex2f(-3.50,15.50);
    glVertex2f(-5.22,15.50);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("Firefly"); //yellow // chimney 2
    glVertex2f(-5.22,15.50);
    glVertex2f(-3.50,15.50);
    glVertex2f(-3.50,15.25);
    glVertex2f(-5.29,15.25);
    glVertex2f(-5.22,15.50);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(81, 90, 90); // chimney duck 2
    glVertex2f(-4.50,16.25);
    glVertex2f(-4.50,17.00);
    glVertex2f(-5.00,17.50);
    glVertex2f(-4.75,18.00);
    glVertex2f(-4.00,17.25);
    glVertex2f(-3.75,16.75);
    glVertex2f(-3.75,16.25);
    glVertex2f(-4.50,16.25);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("Top_floor"); // building
    glVertex2f(-3.00,14.50);
    glVertex2f(-3.00,16.00);
    glVertex2f(10.85,15.99);
    glVertex2f(10.00,14.50);
    glVertex2f(-3.00,14.50);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(93, 64, 55 );
    glVertex2f(-3.00,16.00);
    glVertex2f(-3.00,16.25);
    glVertex2f(11.00,16.25);
    glVertex2f(10.85,15.99);
    glVertex2f(-3.00,16.00);
    glEnd();

    glBegin(GL_POLYGON);
    //glColor3ub(0, 150, 136 );//green-Cw-1
    setColor("ship_window");
    glVertex2f(-2.50,15.50);
    glVertex2f(-0.50,15.50);
    glVertex2f(-0.50,15.00);
    glVertex2f(-2.50,15.00);
    glEnd();

    glBegin(GL_POLYGON);
    //glColor3ub(0, 150, 136 );//green-CW-2
    setColor("ship_window");
    glVertex2f(0.50,15.00);
    glVertex2f(0.50,15.50);
    glVertex2f(2.00,15.50);
    glVertex2f(2.00,15.00);
    glVertex2f(0.50,15.00);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_window");//green-CW-3
    glVertex2f(4.00,15.25);
    glVertex2f(3.75,15.75);
    glVertex2f(4.75,15.75);
    glVertex2f(4.75,15.25);
    glVertex2f(4.00,15.25);
    glEnd();

    glBegin(GL_POLYGON);    //green-CW-4
    setColor("ship_window");
    glVertex2f(5.50,15.25);
    glVertex2f(5.50,15.75);
    glVertex2f(6.75,15.75);
    glVertex2f(6.75,15.25);
    glVertex2f(5.50,15.25);
    glEnd();
    glBegin(GL_POLYGON);

    setColor("ship_window");    //green-CW-5
    glVertex2f(7.50,15.25);
    glVertex2f(7.50,15.75);
    glVertex2f(9.00,15.75);
    glVertex2f(9.00,15.25);
    glVertex2f(7.50,15.25);
    glEnd();
    glBegin(GL_POLYGON);

    //green-CW-6'
    setColor("ship_window");
    glVertex2f(9.50,15.25);
    glVertex2f(9.50,15.75);
    glVertex2f(10.50,15.75);
    glVertex2f(10.00,15.25);
    glVertex2f(9.50,15.25);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(189, 189, 189);//stand-W
    glVertex2f(3.50,16.25);
    glVertex2f(3.50,18.50);
    glVertex2f(4.50,18.50);
    glVertex2f(4.50,16.25);
    glVertex2f(3.50,16.25);
    glEnd();
    glBegin(GL_POLYGON);//Gray
    glColor3ub(158, 158, 158);
    glVertex2f(3.50,18.50);
    glVertex2f(3.50,18.75);
    glVertex2f(5.50,18.75);
    glVertex2f(5.50,18.50);
    glVertex2f(3.50,18.50);
    glEnd();

    glBegin(GL_POLYGON);//W
    glColor3ub(189, 189, 189);
    glVertex2f(3.75,18.75);
    glVertex2f(3.75,21.25);
    glVertex2f(4.50,21.25);
    glVertex2f(4.50,18.75);
    glVertex2f(3.75,18.75);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(158, 158, 158);//Gray
    glVertex2f(3.25,21.25);
    glVertex2f(3.25,21.75);
    glVertex2f(6.25,21.75);
    glVertex2f(6.25,21.25);
    glVertex2f(3.25,21.25);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(189, 189, 189);//W
    glVertex2f(3.75,21.75);
    glVertex2f(3.75,26.00);
    glVertex2f(4.50,26.00);
    glVertex2f(4.50,21.75);
    glVertex2f(3.75,21.75);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(158, 158, 158);//Gray-CM TOP

    glVertex2f(3.75,26.00);
    glVertex2f(3.25,26.50);
    glVertex2f(5.00,26.50);
    glVertex2f(4.50,26.00);
    glVertex2f(3.75,26.00);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(158, 158, 158);//Gray-CM
    glVertex2f(3.75,26.50);
    glVertex2f(3.25,27.00);
    glVertex2f(5.00,27.00);
    glVertex2f(4.50,26.50);
    glVertex2f(3.75,26.50);
    glEnd();

    glBegin(GL_POLYGON);
   // glColor3ub(247, 8, 8 );//Flag-Red
    setColor("Maroon");
    glVertex2f(3.75,24.50);
    glVertex2f(1.75,24.50);
    glVertex2f(1.75,25.50);
    glVertex2f(3.75,25.50);
    glVertex2f(3.75,24.50);
    glEnd();

    glBegin(GL_POLYGON);
    //glColor3ub(0, 150, 136 );//green-W-1
    setColor("ship_window");
    glVertex2f(-5.50,11.75);
    glVertex2f(-5.00,11.75);
    glVertex2f(-5.00,12.25);
    glVertex2f(-5.50,12.25);
    glVertex2f(-5.50,11.75);
    glEnd();

    glBegin(GL_POLYGON);
    //glColor3ub(0, 150, 136 );//green-W-2
    setColor("ship_window");
    glVertex2f(-2.75,11.75);
    glVertex2f(-2.25,11.75);
    glVertex2f(-2.25,12.25);
    glVertex2f(-2.75,12.25);
    glVertex2f(-2.75,11.75);
    glEnd();

    glBegin(GL_POLYGON);
   // glColor3ub(0, 150, 136 );//green-W-3
    setColor("ship_window");
    glVertex2f(-4.75,9.50);
    glVertex2f(-4.25,9.50);
    glVertex2f(-4.25,10.00);
    glVertex2f(-4.75,10.00);
    glVertex2f(-4.75,9.50);
    glEnd();

    glBegin(GL_POLYGON);
   // glColor3ub(0, 150, 136 );//green-W-4
    setColor("ship_window");
    glVertex2f(-1.75,9.50);
    glVertex2f(-1.25,9.50);
    glVertex2f(-1.25,10.00);
    glVertex2f(-1.75,10.00);
    glVertex2f(-1.75,9.50);
    glEnd();

    glBegin(GL_POLYGON);
  //  glColor3ub(0, 150, 136 );//green-W-5
    setColor("ship_window");
    glVertex2f(-5.50,7.25);
    glVertex2f(-5.00,7.25);
    glVertex2f(-5.00,7.75);
    glVertex2f(-5.50,7.75);
    glVertex2f(-5.50,7.25);
    glEnd();

    glBegin(GL_POLYGON);
  //  glColor3ub(0, 150, 136 );//green-W-6
     setColor("ship_window");
    glVertex2f(-3.50,7.25);
    glVertex2f(-3.00,7.25);
    glVertex2f(-3.00,7.75);
    glVertex2f(-3.50,7.75);
    glVertex2f(-3.50,7.25);
    glEnd();

    glBegin(GL_POLYGON);
   // glColor3ub(0, 150, 136 );//green-W-7
    setColor("ship_window");
    glVertex2f(-1.75,7.25);
    glVertex2f(-1.25,7.25);
    glVertex2f(-1.25,7.75);
    glVertex2f(-1.75,7.75);
    glVertex2f(-1.75,7.25);
    glEnd();

    glBegin(GL_POLYGON);
   // glColor3ub(0, 150, 136 );//green-W-8
     setColor("ship_window");
    glVertex2f(0.50,9.50);
    glVertex2f(1.25,9.50);
    glVertex2f(1.25,10.00);
    glVertex2f(0.50,10.00);
    glVertex2f(0.50,9.50);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_window");
    glVertex2f(2.75,9.50);
    glVertex2f(3.25,9.50);
    glVertex2f(3.25,10.00);
    glVertex2f(2.75,10.00);
    glVertex2f(2.75,9.50);
    glEnd();
    glBegin(GL_POLYGON);
     setColor("ship_window");//green-W-10
    glVertex2f(0.75,7.25);
    glVertex2f(1.25,7.25);
    glVertex2f(1.25,7.75);
    glVertex2f(0.75,7.75);
    glVertex2f(0.75,7.25);
    glEnd();
    glBegin(GL_POLYGON);
     setColor("ship_window");//green-W-11
    glVertex2f(2.75,7.25);
    glVertex2f(3.25,7.25);
    glVertex2f(3.25,7.75);
    glVertex2f(2.75,7.75);
    glVertex2f(2.75,7.25);
    glEnd();
    glBegin(GL_POLYGON);
    setColor("ship_window");//green-W-12
    glVertex2f(4.25,12.00);
    glVertex2f(4.75,12.00);
    glVertex2f(4.75,12.50);
    glVertex2f(4.25,12.50);
    glVertex2f(4.25,12.00);
    glEnd();
    glBegin(GL_POLYGON);
    setColor("ship_window");//green-W-13
    glVertex2f(5.75,12.00);
    glVertex2f(7.25,12.00);
    glVertex2f(7.25,12.50);
    glVertex2f(5.75,12.50);
    glVertex2f(7.75,12.00);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_window");//green-W-14
    glVertex2f(8.25,12.00);
    glVertex2f(8.75,12.00);
    glVertex2f(8.75,12.50);
    glVertex2f(8.25,12.50);
    glVertex2f(8.25,12.00);
    glEnd();

    glBegin(GL_POLYGON);
     setColor("ship_window");//green-W-15
    glVertex2f(4.50,9.50);
    glVertex2f(5.50,9.50);
    glVertex2f(5.50,10.00);
    glVertex2f(4.50,10.00);
    glVertex2f(4.50,9.50);
    glEnd();

    glBegin(GL_POLYGON);
     setColor("ship_window");//green-W-16
    glVertex2f(6.75,9.50);
    glVertex2f(8.00,9.50);
    glVertex2f(8.00,10.00);
    glVertex2f(6.75,10.00);
    glVertex2f(6.75,9.50);
    glEnd();

    glBegin(GL_POLYGON);
     setColor("ship_window");//green-W-17
    glVertex2f(8.50,9.50);
    glVertex2f(9.25,9.50);
    glVertex2f(9.25,10.00);
    glVertex2f(8.50,10.00);
    glVertex2f(8.50,9.50);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_window");//green-W-18
    glVertex2f(5.25,7.25);
    glVertex2f(5.75,7.25);
    glVertex2f(5.75,7.75);
    glVertex2f(5.25,7.75);
    glVertex2f(5.25,7.25);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_window");//green-W-19
    glVertex2f(6.50,7.25);
    glVertex2f(7.00,7.25);
    glVertex2f(7.00,7.75);
    glVertex2f(6.50,7.75);
    glVertex2f(6.50,7.25);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_window");//green-W-20
    glVertex2f(7.75,7.25);
    glVertex2f(8.25,7.25);
    glVertex2f(8.25,7.75);
    glVertex2f(7.75,7.75);
    glVertex2f(7.75,7.25);
    glEnd();

    // floor lines
    glBegin(GL_POLYGON);
    glColor3ub(208, 211, 212);
    glVertex2f(-6.00,10.75);
    glVertex2f(-6.00,11.00);
    glVertex2f(9.50,11.00);
    glVertex2f(9.50,10.75);
    glVertex2f(-6.00,10.75);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(208, 211, 212);
    glVertex2f(-6.00,8.75);
    glVertex2f(-6.00,9.00);
    glVertex2f(9.50,9.00);
    glVertex2f(9.50,8.75);
    glVertex2f(-6.00,8.75);
    glEnd();

        glBegin(GL_POLYGON); //Container-1
    glColor3ub(213, 39, 39 );
    glVertex2f(13.00,3.25);
    glVertex2f(13.00,7.75);
    glVertex2f(21.25,7.75);
    glVertex2f(21.25,3.25);
    glVertex2f(13.00,3.25);
    glEnd();
    glBegin(GL_POLYGON); //Container-2
    glColor3ub(18, 101, 238);
    glVertex2f(21.25,3.25);
    glVertex2f(21.25,7.75);
    glVertex2f(25.00,7.75);
    glVertex2f(25.00,3.25);
    glVertex2f(21.25,3.25);
    glEnd();
    glBegin(GL_POLYGON); //Container-3
    glColor3ub(252, 109, 3);
    glVertex2f(25.00,3.25);
    glVertex2f(25.00,7.75);
    glVertex2f(30.00,7.75);
    glVertex2f(30.00,3.25);
    glVertex2f(25.00,3.25);
    glEnd();
    glBegin(GL_POLYGON); //Container-4
    glColor3ub(59, 154, 23);
    glVertex2f(30.00,3.25);
    glVertex2f(30.00,7.75);
    glVertex2f(33.25,7.75);
    glVertex2f(33.25,3.25);
    glVertex2f(30.00,3.25);
    glEnd();
    glBegin(GL_POLYGON); //Container-5
    glColor3ub(238, 241, 14);
    glVertex2f(14.00,7.75);
    glVertex2f(14.00,11.50);
    glVertex2f(18.00,11.50);
    glVertex2f(18.00,7.75);
    glVertex2f(14.00,7.75);
    glEnd();
    glBegin(GL_POLYGON); //Container-6
    glColor3ub(251, 13, 6);
    glVertex2f(18.00,7.75);
    glVertex2f(18.00,11.50);
    glVertex2f(25.50,11.50);
    glVertex2f(25.50,7.75);
    glVertex2f(18.00,7.75);
    glEnd();
    glBegin(GL_POLYGON); //Container-7
    glColor3ub(40, 35, 185);
    glVertex2f(25.50,7.75);
    glVertex2f(25.50,11.50);
    glVertex2f(29.75,11.50);
    glVertex2f(29.75,7.75);
    glVertex2f(25.50,7.75);
    glEnd();
    glPopMatrix();

    glPopMatrix();
}

void rocks()
{
    //LEFT SIDE
    glPushMatrix();
    glScalef(32,18,0);
     glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(-0.956f, -0.896f);
            glVertex2f(-0.967f, -0.915f);
            glVertex2f(-0.974f, -0.915f);
            glVertex2f(-0.976f, -0.915f);
            glVertex2f(-0.983f, -0.915f);
            glVertex2f(-0.983f, -0.915f);
            glVertex2f(-0.983f, -0.915f);
            glVertex2f(-0.983f, -0.915f);
            glVertex2f(-0.983f, -0.915f);
            glVertex2f(-0.983f, -0.915f);
            glVertex2f(-0.987f, -0.904f);
            glVertex2f(-0.987f, -0.896f);
            glVertex2f(-0.987f, -0.884f);
            glVertex2f(-0.987f, -0.876f);
            glVertex2f(-0.987f, -0.872f);
            glVertex2f(-0.987f, -0.86f);
            glVertex2f(-0.983f, -0.86f);
            glVertex2f(-0.983f, -0.856f);
            glVertex2f(-0.980f, -0.852f);
            glVertex2f(-0.978f, -0.844f);
            glVertex2f(-0.974f, -0.836f);
            glVertex2f(-0.969f, -0.825f);
            glVertex2f(-0.969f, -0.825f);
            glVertex2f(-0.967f, -0.825f);
            glVertex2f(-0.958f, -0.821f);
            glVertex2f(-0.958f, -0.821f);
            glVertex2f(-0.949f, -0.817f);
            glVertex2f(-0.947f, -0.817f);
            glVertex2f(-0.943f, -0.817f);
            glVertex2f(-0.940f, -0.817f);
            glVertex2f(-0.936f, -0.821f);
            glVertex2f(-0.932f, -0.821f);
            glVertex2f(-0.927f, -0.821f);
            glVertex2f(-0.923f, -0.825f);
            glVertex2f(-0.923f, -0.828f);
            glVertex2f(-0.920f, -0.836f);
            glVertex2f(-0.920f, -0.856f);
            glVertex2f(-0.920f, -0.868f);
            glVertex2f(-0.920f, -0.872f);
            glVertex2f(-0.925f, -0.88f);
            glVertex2f(-0.936f, -0.888f);
            glVertex2f(-0.943f, -0.888f);
            glVertex2f(-0.947f, -0.888f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(-0.827f, -0.821f);
            glVertex2f(-0.816f, -0.821f);
            glVertex2f(-0.805f, -0.825f);
            glVertex2f(-0.794f, -0.828f);
            glVertex2f(-0.778f, -0.828f);
            glVertex2f(-0.769f, -0.813f);
            glVertex2f(-0.758f, -0.781f);
            glVertex2f(-0.763f, -0.773f);
            glVertex2f(-0.772f, -0.765f);
            glVertex2f(-0.778f, -0.749f);
            glVertex2f(-0.780f, -0.734f);
            glVertex2f(-0.780f, -0.722f);
            glVertex2f(-0.787f, -0.71f);
            glVertex2f(-0.792f, -0.698f);
            glVertex2f(-0.800f, -0.69f);
            glVertex2f(-0.807f, -0.694f);
            glVertex2f(-0.814f, -0.698f);
            glVertex2f(-0.836f, -0.702f);
            glVertex2f(-0.847f, -0.702f);
            glVertex2f(-0.856f, -0.718f);
            glVertex2f(-0.856f, -0.742f);
            glVertex2f(-0.854f, -0.757f);
            glVertex2f(-0.858f, -0.769f);
            glVertex2f(-0.863f, -0.785f);
            glVertex2f(-0.863f, -0.797f);
            glVertex2f(-0.860f, -0.809f);
            glVertex2f(-0.860f, -0.813f);
            glVertex2f(-0.863f, -0.825f);
            glVertex2f(-0.863f, -0.832f);
            glVertex2f(-0.860f, -0.828f);
            glVertex2f(-0.860f, -0.828f);
            glVertex2f(-0.858f, -0.817f);
            glVertex2f(-0.854f, -0.813f);
            glVertex2f(-0.847f, -0.817f);
            glVertex2f(-0.845f, -0.817f);
            glVertex2f(-0.845f, -0.821f);
            glVertex2f(-0.845f, -0.821f);
            glVertex2f(-0.843f, -0.821f);
            glVertex2f(-0.836f, -0.821f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(-0.812f, -0.892f);
            glVertex2f(-0.785f, -0.888f);
            glVertex2f(-0.812f, -0.935f);
            glVertex2f(-0.814f, -0.927f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(-0.900f, -0.919f);
            glVertex2f(-0.905f, -0.939f);
            glVertex2f(-0.905f, -0.939f);
            glVertex2f(-0.909f, -0.939f);
            glVertex2f(-0.914f, -0.939f);
            glVertex2f(-0.916f, -0.927f);
            glVertex2f(-0.918f, -0.931f);
            glVertex2f(-0.918f, -0.931f);
            glVertex2f(-0.912f, -0.9f);
            glVertex2f(-0.907f, -0.892f);
            glVertex2f(-0.900f, -0.892f);
            glVertex2f(-0.889f, -0.892f);
            glVertex2f(-0.880f, -0.892f);
            glVertex2f(-0.878f, -0.9f);
            glVertex2f(-0.880f, -0.911f);
            glVertex2f(-0.883f, -0.915f);
            glVertex2f(-0.892f, -0.919f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(94,94,94);
            glVertex2f(-0.836f, -0.919f);
            glVertex2f(-0.836f, -0.923f);
            glVertex2f(-0.836f, -0.927f);
            glVertex2f(-0.836f, -0.927f);
            glVertex2f(-0.834f, -0.931f);
            glVertex2f(-0.832f, -0.939f);
            glVertex2f(-0.832f, -0.939f);
            glVertex2f(-0.832f, -0.939f);
            glVertex2f(-0.832f, -0.939f);
            glVertex2f(-0.832f, -0.939f);
            glVertex2f(-0.865f, -0.939f);
            glVertex2f(-0.865f, -0.939f);
            glVertex2f(-0.867f, -0.923f);
            glVertex2f(-0.867f, -0.915f);
            glVertex2f(-0.865f, -0.908f);
            glVertex2f(-0.865f, -0.904f);
            glVertex2f(-0.863f, -0.904f);
            glVertex2f(-0.856f, -0.904f);
            glVertex2f(-0.849f, -0.892f);
            glVertex2f(-0.845f, -0.888f);
            glVertex2f(-0.845f, -0.888f);
            glVertex2f(-0.838f, -0.908f);
            glVertex2f(-0.836f, -0.911f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(94,94,94);
            glVertex2f(-0.949f, -0.777f);
            glVertex2f(-0.952f, -0.777f);
            glVertex2f(-0.954f, -0.777f);
            glVertex2f(-0.956f, -0.777f);
            glVertex2f(-0.956f, -0.769f);
            glVertex2f(-0.958f, -0.769f);
            glVertex2f(-0.958f, -0.769f);
            glVertex2f(-0.958f, -0.769f);
            glVertex2f(-0.954f, -0.757f);
            glVertex2f(-0.949f, -0.738f);
            glVertex2f(-0.943f, -0.738f);
            glVertex2f(-0.940f, -0.738f);
            glVertex2f(-0.936f, -0.745f);
            glVertex2f(-0.927f, -0.745f);
            glVertex2f(-0.927f, -0.757f);
            glVertex2f(-0.927f, -0.761f);
            glVertex2f(-0.927f, -0.769f);
            glVertex2f(-0.932f, -0.785f);
            glVertex2f(-0.943f, -0.781f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(-0.689f, -0.785f);
            glVertex2f(-0.665f, -0.781f);
            glVertex2f(-0.654f, -0.781f);
            glVertex2f(-0.634f, -0.817f);
            glVertex2f(-0.634f, -0.9f);
            glVertex2f(-0.647f, -0.927f);
            glVertex2f(-0.703f, -0.884f);
            glVertex2f(-0.705f, -0.888f);
            glVertex2f(-0.714f, -0.86f);
            glVertex2f(-0.714f, -0.809f);
            glVertex2f(-0.712f, -0.789f);
            glVertex2f(-0.698f, -0.781f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(-0.720f, -0.67f);
            glVertex2f(-0.714f, -0.655f);
            glVertex2f(-0.709f, -0.655f);
            glVertex2f(-0.692f, -0.627f);
            glVertex2f(-0.672f, -0.686f);
            glVertex2f(-0.712f, -0.765f);
            glVertex2f(-0.720f, -0.71f);
            glVertex2f(-0.723f, -0.722f);
            glVertex2f(-0.723f, -0.714f);
            glVertex2f(-0.725f, -0.694f);
            glVertex2f(-0.729f, -0.67f);
            glVertex2f(-0.727f, -0.67f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(-0.705f, -0.915f);
            glVertex2f(-0.700f, -0.923f);
            glVertex2f(-0.694f, -0.927f);
            glVertex2f(-0.694f, -0.935f);
            glVertex2f(-0.694f, -0.935f);
            glVertex2f(-0.689f, -0.939f);
            glVertex2f(-0.687f, -0.943f);
            glVertex2f(-0.749f, -0.939f);
            glVertex2f(-0.743f, -0.915f);
            glVertex2f(-0.738f, -0.915f);
            glVertex2f(-0.725f, -0.896f);
            glVertex2f(-0.718f, -0.896f);
            glVertex2f(-0.709f, -0.908f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(-0.540f, -0.745f);
            glVertex2f(-0.527f, -0.749f);
            glVertex2f(-0.516f, -0.753f);
            glVertex2f(-0.500f, -0.765f);
            glVertex2f(-0.494f, -0.805f);
            glVertex2f(-0.514f, -0.828f);
            glVertex2f(-0.540f, -0.852f);
            glVertex2f(-0.572f, -0.856f);
            glVertex2f(-0.569f, -0.852f);
            glVertex2f(-0.576f, -0.828f);
            glVertex2f(-0.578f, -0.789f);
            glVertex2f(-0.576f, -0.769f);
            glVertex2f(-0.558f, -0.745f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(-0.463f, -0.69f);
            glVertex2f(-0.507f, -0.706f);
            glVertex2f(-0.512f, -0.69f);
            glVertex2f(-0.512f, -0.682f);
            glVertex2f(-0.507f, -0.69f);
            glVertex2f(-0.520f, -0.662f);
            glVertex2f(-0.518f, -0.631f);
            glVertex2f(-0.516f, -0.603f);
            glVertex2f(-0.505f, -0.583f);
            glVertex2f(-0.492f, -0.575f);
            glVertex2f(-0.467f, -0.568f);
            glVertex2f(-0.456f, -0.572f);
            glVertex2f(-0.443f, -0.579f);
            glVertex2f(-0.429f, -0.583f);
            glVertex2f(-0.420f, -0.595f);
            glVertex2f(-0.414f, -0.603f);
            glVertex2f(-0.414f, -0.615f);
            glVertex2f(-0.414f, -0.643f);
            glVertex2f(-0.416f, -0.658f);
            glVertex2f(-0.427f, -0.67f);
            glVertex2f(-0.443f, -0.682f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(-0.407f, -0.896f);
            glVertex2f(-0.418f, -0.896f);
            glVertex2f(-0.420f, -0.896f);
            glVertex2f(-0.423f, -0.896f);
            glVertex2f(-0.423f, -0.896f);
            glVertex2f(-0.427f, -0.844f);
            glVertex2f(-0.425f, -0.825f);
            glVertex2f(-0.416f, -0.809f);
            glVertex2f(-0.409f, -0.809f);
            glVertex2f(-0.405f, -0.809f);
            glVertex2f(-0.374f, -0.817f);
            glVertex2f(-0.374f, -0.84f);
            glVertex2f(-0.374f, -0.876f);
            glVertex2f(-0.383f, -0.896f);
            glVertex2f(-0.392f, -0.896f);
            glVertex2f(-0.396f, -0.896f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(-0.600f, -0.71f);
            glVertex2f(-0.612f, -0.694f);
            glVertex2f(-0.609f, -0.702f);
            glVertex2f(-0.609f, -0.702f);
            glVertex2f(-0.609f, -0.694f);
            glVertex2f(-0.609f, -0.662f);
            glVertex2f(-0.609f, -0.647f);
            glVertex2f(-0.596f, -0.647f);
            glVertex2f(-0.587f, -0.647f);
            glVertex2f(-0.572f, -0.655f);
            glVertex2f(-0.558f, -0.67f);
            glVertex2f(-0.558f, -0.694f);
            glVertex2f(-0.576f, -0.706f);
            glVertex2f(-0.592f, -0.714f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(-0.256f, -0.868f);
            glVertex2f(-0.278f, -0.876f);
            glVertex2f(-0.283f, -0.876f);
            glVertex2f(-0.285f, -0.872f);
            glVertex2f(-0.294f, -0.872f);
            glVertex2f(-0.292f, -0.872f);
            glVertex2f(-0.294f, -0.856f);
            glVertex2f(-0.300f, -0.797f);
            glVertex2f(-0.298f, -0.765f);
            glVertex2f(-0.287f, -0.753f);
            glVertex2f(-0.263f, -0.742f);
            glVertex2f(-0.236f, -0.738f);
            glVertex2f(-0.220f, -0.738f);
            glVertex2f(-0.200f, -0.757f);
            glVertex2f(-0.192f, -0.781f);
            glVertex2f(-0.192f, -0.801f);
            glVertex2f(-0.194f, -0.828f);
            glVertex2f(-0.198f, -0.844f);
            glVertex2f(-0.212f, -0.86f);
            glVertex2f(-0.225f, -0.868f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(-0.380f, -0.706f);
            glVertex2f(-0.380f, -0.674f);
            glVertex2f(-0.374f, -0.655f);
            glVertex2f(-0.365f, -0.651f);
            glVertex2f(-0.356f, -0.651f);
            glVertex2f(-0.338f, -0.639f);
            glVertex2f(-0.309f, -0.623f);
            glVertex2f(-0.309f, -0.635f);
            glVertex2f(-0.309f, -0.682f);
            glVertex2f(-0.309f, -0.718f);
            glVertex2f(-0.309f, -0.73f);
            glVertex2f(-0.312f, -0.761f);
            glVertex2f(-0.325f, -0.777f);
            glVertex2f(-0.338f, -0.777f);
            glVertex2f(-0.363f, -0.777f);
            glVertex2f(-0.372f, -0.777f);
            glVertex2f(-0.378f, -0.769f);
            glVertex2f(-0.378f, -0.749f);
            glVertex2f(-0.380f, -0.753f);
            glVertex2f(-0.380f, -0.745f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(-0.478f, -0.908f);
            glVertex2f(-0.478f, -0.908f);
            glVertex2f(-0.472f, -0.908f);
            glVertex2f(-0.467f, -0.915f);
            glVertex2f(-0.460f, -0.923f);
            glVertex2f(-0.460f, -0.935f);
            glVertex2f(-0.456f, -0.939f);
            glVertex2f(-0.456f, -0.939f);
            glVertex2f(-0.543f, -0.939f);
            glVertex2f(-0.543f, -0.939f);
            glVertex2f(-0.538f, -0.892f);
            glVertex2f(-0.538f, -0.892f);
            glVertex2f(-0.527f, -0.892f);
            glVertex2f(-0.516f, -0.884f);
            glVertex2f(-0.503f, -0.884f);
            glVertex2f(-0.485f, -0.884f);
            glVertex2f(-0.478f, -0.888f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(-0.136f, -0.718f);
            glVertex2f(-0.147f, -0.726f);
            glVertex2f(-0.149f, -0.726f);
            glVertex2f(-0.178f, -0.694f);
            glVertex2f(-0.192f, -0.658f);
            glVertex2f(-0.187f, -0.635f);
            glVertex2f(-0.176f, -0.623f);
            glVertex2f(-0.172f, -0.607f);
            glVertex2f(-0.165f, -0.591f);
            glVertex2f(-0.152f, -0.579f);
            glVertex2f(-0.129f, -0.575f);
            glVertex2f(-0.105f, -0.575f);
            glVertex2f(-0.094f, -0.575f);
            glVertex2f(-0.083f, -0.603f);
            glVertex2f(-0.080f, -0.639f);
            glVertex2f(-0.078f, -0.67f);
            glVertex2f(-0.078f, -0.686f);
            glVertex2f(-0.100f, -0.738f);
            glVertex2f(-0.114f, -0.738f);
            glVertex2f(-0.127f, -0.734f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(-0.103f, -0.868f);
            glVertex2f(-0.096f, -0.884f);
            glVertex2f(-0.087f, -0.904f);
            glVertex2f(-0.085f, -0.923f);
            glVertex2f(-0.085f, -0.939f);
            glVertex2f(-0.085f, -0.943f);
            glVertex2f(-0.085f, -0.947f);
            glVertex2f(-0.158f, -0.955f);
            glVertex2f(-0.165f, -0.927f);
            glVertex2f(-0.167f, -0.884f);
            glVertex2f(-0.167f, -0.856f);
            glVertex2f(-0.154f, -0.828f);
            glVertex2f(-0.138f, -0.828f);
            glVertex2f(-0.125f, -0.828f);
            glVertex2f(-0.120f, -0.828f);
            glVertex2f(-0.109f, -0.848f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(-0.247f, -0.682f);
            glVertex2f(-0.249f, -0.686f);
            glVertex2f(-0.254f, -0.674f);
            glVertex2f(-0.258f, -0.662f);
            glVertex2f(-0.258f, -0.639f);
            glVertex2f(-0.247f, -0.623f);
            glVertex2f(-0.240f, -0.619f);
            glVertex2f(-0.229f, -0.619f);
            glVertex2f(-0.216f, -0.635f);
            glVertex2f(-0.212f, -0.686f);
            glVertex2f(-0.218f, -0.706f);
            glVertex2f(-0.234f, -0.702f);
            glVertex2f(-0.240f, -0.694f);
            glEnd();
             glBegin(GL_TRIANGLE_FAN);
            glColor3ub(77,77,77);
            glVertex2f(-0.318f, -0.919f);
            glVertex2f(-0.318f, -0.923f);
            glVertex2f(-0.318f, -0.935f);
            glVertex2f(-0.318f, -0.935f);
            glVertex2f(-0.318f, -0.939f);
            glVertex2f(-0.318f, -0.939f);
            glVertex2f(-0.318f, -0.943f);
            glVertex2f(-0.318f, -0.947f);
            glVertex2f(-0.354f, -0.943f);
            glVertex2f(-0.354f, -0.923f);
            glVertex2f(-0.349f, -0.904f);
            glVertex2f(-0.338f, -0.888f);
            glVertex2f(-0.329f, -0.9f);
            glVertex2f(-0.325f, -0.9f);
            glVertex2f(-0.320f, -0.904f);
            glVertex2f(-0.318f, -0.908f);
            glVertex2f(-0.318f, -0.911f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(77,77,77);
            glVertex2f(-0.449f, -0.789f);
            glVertex2f(-0.460f, -0.789f);
            glVertex2f(-0.460f, -0.765f);
            glVertex2f(-0.460f, -0.745f);
            glVertex2f(-0.447f, -0.722f);
            glVertex2f(-0.432f, -0.722f);
            glVertex2f(-0.425f, -0.73f);
            glVertex2f(-0.420f, -0.745f);
            glVertex2f(-0.420f, -0.765f);
            glVertex2f(-0.425f, -0.797f);
            glVertex2f(-0.436f, -0.801f);
            glVertex2f(-0.449f, -0.801f);
            glVertex2f(-0.452f, -0.801f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(77,77,77);
            glVertex2f(-0.045f, -0.923f);
            glVertex2f(-0.047f, -0.923f);
            glVertex2f(-0.047f, -0.923f);
            glVertex2f(-0.069f, -0.896f);
            glVertex2f(-0.069f, -0.88f);
            glVertex2f(-0.067f, -0.852f);
            glVertex2f(-0.058f, -0.825f);
            glVertex2f(-0.038f, -0.821f);
            glVertex2f(-0.027f, -0.832f);
            glVertex2f(-0.020f, -0.84f);
            glVertex2f(-0.018f, -0.856f);
            glVertex2f(-0.018f, -0.9f);
            glVertex2f(-0.020f, -0.908f);
            glVertex2f(-0.027f, -0.923f);
            glVertex2f(-0.036f, -0.923f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(77,77,77);
            glVertex2f(0.037f, -0.726f);
            glVertex2f(0.028f, -0.745f);
            glVertex2f(0.024f, -0.757f);
            glVertex2f(0.015f, -0.769f);
            glVertex2f(0.002f, -0.777f);
            glVertex2f(-0.016f, -0.789f);
            glVertex2f(-0.020f, -0.789f);
            glVertex2f(-0.023f, -0.785f);
            glVertex2f(-0.029f, -0.781f);
            glVertex2f(-0.040f, -0.769f);
            glVertex2f(-0.043f, -0.757f);
            glVertex2f(-0.043f, -0.738f);
            glVertex2f(-0.045f, -0.714f);
            glVertex2f(-0.060f, -0.682f);
            glVertex2f(-0.065f, -0.655f);
            glVertex2f(-0.058f, -0.623f);
            glVertex2f(-0.047f, -0.607f);
            glVertex2f(-0.036f, -0.595f);
            glVertex2f(-0.003f, -0.583f);
            glVertex2f(0.011f, -0.579f);
            glVertex2f(0.020f, -0.579f);
            glVertex2f(0.033f, -0.579f);
            glVertex2f(0.053f, -0.599f);
            glVertex2f(0.066f, -0.619f);
            glVertex2f(0.066f, -0.631f);
            glVertex2f(0.066f, -0.658f);
            glVertex2f(0.064f, -0.678f);
            glVertex2f(0.057f, -0.698f);
            glVertex2f(0.044f, -0.718f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(77,77,77);
            glVertex2f(-0.609f, -0.923f);
            glVertex2f(-0.614f, -0.923f);
            glVertex2f(-0.618f, -0.923f);
            glVertex2f(-0.620f, -0.923f);
            glVertex2f(-0.620f, -0.919f);
            glVertex2f(-0.620f, -0.904f);
            glVertex2f(-0.616f, -0.9f);
            glVertex2f(-0.600f, -0.9f);
            glVertex2f(-0.596f, -0.9f);
            glVertex2f(-0.596f, -0.908f);
            glVertex2f(-0.600f, -0.915f);
            glVertex2f(-0.605f, -0.919f);
            glEnd();



            //RIGHT PART

            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(0.956f, -0.896f);
            glVertex2f(0.967f, -0.915f);
            glVertex2f(0.974f, -0.915f);
            glVertex2f(0.976f, -0.915f);
            glVertex2f(0.983f, -0.915f);
            glVertex2f(0.983f, -0.915f);
            glVertex2f(0.983f, -0.915f);
            glVertex2f(0.983f, -0.915f);
            glVertex2f(0.983f, -0.915f);
            glVertex2f(0.983f, -0.915f);
            glVertex2f(0.987f, -0.904f);
            glVertex2f(0.987f, -0.896f);
            glVertex2f(0.987f, -0.884f);
            glVertex2f(0.987f, -0.876f);
            glVertex2f(0.987f, -0.872f);
            glVertex2f(0.987f, -0.86f);
            glVertex2f(0.983f, -0.86f);
            glVertex2f(0.983f, -0.856f);
            glVertex2f(0.980f, -0.852f);
            glVertex2f(0.978f, -0.844f);
            glVertex2f(0.974f, -0.836f);
            glVertex2f(0.969f, -0.825f);
            glVertex2f(0.969f, -0.825f);
            glVertex2f(0.967f, -0.825f);
            glVertex2f(0.958f, -0.821f);
            glVertex2f(0.958f, -0.821f);
            glVertex2f(0.949f, -0.817f);
            glVertex2f(0.947f, -0.817f);
            glVertex2f(0.943f, -0.817f);
            glVertex2f(0.940f, -0.817f);
            glVertex2f(0.936f, -0.821f);
            glVertex2f(0.932f, -0.821f);
            glVertex2f(0.927f, -0.821f);
            glVertex2f(0.923f, -0.825f);
            glVertex2f(0.923f, -0.828f);
            glVertex2f(0.920f, -0.836f);
            glVertex2f(0.920f, -0.856f);
            glVertex2f(0.920f, -0.868f);
            glVertex2f(0.920f, -0.872f);
            glVertex2f(0.925f, -0.88f);
            glVertex2f(0.936f, -0.888f);
            glVertex2f(0.943f, -0.888f);
            glVertex2f(0.947f, -0.888f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(0.827f, -0.821f);
            glVertex2f(0.816f, -0.821f);
            glVertex2f(0.805f, -0.825f);
            glVertex2f(0.794f, -0.828f);
            glVertex2f(0.778f, -0.828f);
            glVertex2f(0.769f, -0.813f);
            glVertex2f(0.758f, -0.781f);
            glVertex2f(0.763f, -0.773f);
            glVertex2f(0.772f, -0.765f);
            glVertex2f(0.778f, -0.749f);
            glVertex2f(0.780f, -0.734f);
            glVertex2f(0.780f, -0.722f);
            glVertex2f(0.787f, -0.71f);
            glVertex2f(0.792f, -0.698f);
            glVertex2f(0.800f, -0.69f);
            glVertex2f(0.807f, -0.694f);
            glVertex2f(0.814f, -0.698f);
            glVertex2f(0.836f, -0.702f);
            glVertex2f(0.847f, -0.702f);
            glVertex2f(0.856f, -0.718f);
            glVertex2f(0.856f, -0.742f);
            glVertex2f(0.854f, -0.757f);
            glVertex2f(0.858f, -0.769f);
            glVertex2f(0.863f, -0.785f);
            glVertex2f(0.863f, -0.797f);
            glVertex2f(0.860f, -0.809f);
            glVertex2f(0.860f, -0.813f);
            glVertex2f(0.863f, -0.825f);
            glVertex2f(0.863f, -0.832f);
            glVertex2f(0.860f, -0.828f);
            glVertex2f(0.860f, -0.828f);
            glVertex2f(0.858f, -0.817f);
            glVertex2f(0.854f, -0.813f);
            glVertex2f(0.847f, -0.817f);
            glVertex2f(0.845f, -0.817f);
            glVertex2f(.845f, -0.821f);
            glVertex2f(0.845f, -0.821f);
            glVertex2f(0.843f, -0.821f);
            glVertex2f(0.836f, -0.821f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(0.812f, -0.892f);
            glVertex2f(0.785f, -0.888f);
            glVertex2f(0.812f, -0.935f);
            glVertex2f(0.814f, -0.927f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(0.900f, -0.919f);
            glVertex2f(0.905f, -0.939f);
            glVertex2f(0.905f, -0.939f);
            glVertex2f(0.909f, -0.939f);
            glVertex2f(0.914f, -0.939f);
            glVertex2f(0.916f, -0.927f);
            glVertex2f(0.918f, -0.931f);
            glVertex2f(0.918f, -0.931f);
            glVertex2f(0.912f, -0.9f);
            glVertex2f(0.907f, -0.892f);
            glVertex2f(0.900f, -0.892f);
            glVertex2f(0.889f, -0.892f);
            glVertex2f(0.880f, -0.892f);
            glVertex2f(0.878f, -0.9f);
            glVertex2f(0.880f, -0.911f);
            glVertex2f(0.883f, -0.915f);
            glVertex2f(0.892f, -0.919f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(94,94,94);
            glVertex2f(0.836f, -0.919f);
            glVertex2f(0.836f, -0.923f);
            glVertex2f(0.836f, -0.927f);
            glVertex2f(0.836f, -0.927f);
            glVertex2f(0.834f, -0.931f);
            glVertex2f(0.832f, -0.939f);
            glVertex2f(0.832f, -0.939f);
            glVertex2f(0.832f, -0.939f);
            glVertex2f(0.832f, -0.939f);
            glVertex2f(0.832f, -0.939f);
            glVertex2f(.865f, -0.939f);
            glVertex2f(.865f, -0.939f);
            glVertex2f(.867f, -0.923f);
            glVertex2f(.867f, -0.915f);
            glVertex2f(.865f, -0.908f);
            glVertex2f(0.865f, -0.904f);
            glVertex2f(0.863f, -0.904f);
            glVertex2f(0.856f, -0.904f);
            glVertex2f(0.849f, -0.892f);
            glVertex2f(0.845f, -0.888f);
            glVertex2f(0.845f, -0.888f);
            glVertex2f(0.838f, -0.908f);
            glVertex2f(0.836f, -0.911f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(94,94,94);
            glVertex2f(0.949f, -0.777f);
            glVertex2f(0.952f, -0.777f);
            glVertex2f(0.954f, -0.777f);
            glVertex2f(0.956f, -0.777f);
            glVertex2f(0.956f, -0.769f);
            glVertex2f(0.958f, -0.769f);
            glVertex2f(0.958f, -0.769f);
            glVertex2f(0.958f, -0.769f);
            glVertex2f(0.954f, -0.757f);
            glVertex2f(0.949f, -0.738f);
            glVertex2f(0.943f, -0.738f);
            glVertex2f(0.940f, -0.738f);
            glVertex2f(0.936f, -0.745f);
            glVertex2f(0.927f, -0.745f);
            glVertex2f(0.927f, -0.757f);
            glVertex2f(0.927f, -0.761f);
            glVertex2f(0.927f, -0.769f);
            glVertex2f(0.932f, -0.785f);
            glVertex2f(0.943f, -0.781f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(0.689f, -0.785f);
            glVertex2f(0.665f, -0.781f);
            glVertex2f(0.654f, -0.781f);
            glVertex2f(0.634f, -0.817f);
            glVertex2f(0.634f, -0.9f);
            glVertex2f(0.647f, -0.927f);
            glVertex2f(0.703f, -0.884f);
            glVertex2f(0.705f, -0.888f);
            glVertex2f(0.714f, -0.86f);
            glVertex2f(0.714f, -0.809f);
            glVertex2f(0.712f, -0.789f);
            glVertex2f(0.698f, -0.781f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(0.720f, -0.67f);
            glVertex2f(0.714f, -0.655f);
            glVertex2f(0.709f, -0.655f);
            glVertex2f(0.692f, -0.627f);
            glVertex2f(0.672f, -0.686f);
            glVertex2f(0.712f, -0.765f);
            glVertex2f(0.720f, -0.71f);
            glVertex2f(0.723f, -0.722f);
            glVertex2f(0.723f, -0.714f);
            glVertex2f(0.725f, -0.694f);
            glVertex2f(0.729f, -0.67f);
            glVertex2f(0.727f, -0.67f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(0.705f, -0.915f);
            glVertex2f(0.700f, -0.923f);
            glVertex2f(0.694f, -0.927f);
            glVertex2f(0.694f, -0.935f);
            glVertex2f(0.694f, -0.935f);
            glVertex2f(0.689f, -0.939f);
            glVertex2f(0.687f, -0.943f);
            glVertex2f(0.749f, -0.939f);
            glVertex2f(0.743f, -0.915f);
            glVertex2f(0.738f, -0.915f);
            glVertex2f(0.725f, -0.896f);
            glVertex2f(0.718f, -0.896f);
            glVertex2f(0.709f, -0.908f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(0.540f, -0.745f);
            glVertex2f(0.527f, -0.749f);
            glVertex2f(0.516f, -0.753f);
            glVertex2f(0.500f, -0.765f);
            glVertex2f(0.494f, -0.805f);
            glVertex2f(0.514f, -0.828f);
            glVertex2f(0.540f, -0.852f);
            glVertex2f(0.572f, -0.856f);
            glVertex2f(0.569f, -0.852f);
            glVertex2f(0.576f, -0.828f);
            glVertex2f(0.578f, -0.789f);
            glVertex2f(0.576f, -0.769f);
            glVertex2f(0.558f, -0.745f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(0.463f, -0.69f);
            glVertex2f(0.507f, -0.706f);
            glVertex2f(0.512f, -0.69f);
            glVertex2f(0.512f, -0.682f);
            glVertex2f(0.507f, -0.69f);
            glVertex2f(0.520f, -0.662f);
            glVertex2f(0.518f, -0.631f);
            glVertex2f(0.516f, -0.603f);
            glVertex2f(0.505f, -0.583f);
            glVertex2f(0.492f, -0.575f);
            glVertex2f(0.467f, -0.568f);
            glVertex2f(0.456f, -0.572f);
            glVertex2f(0.443f, -0.579f);
            glVertex2f(0.429f, -0.583f);
            glVertex2f(0.420f, -0.595f);
            glVertex2f(0.414f, -0.603f);
            glVertex2f(0.414f, -0.615f);
            glVertex2f(0.414f, -0.643f);
            glVertex2f(0.416f, -0.658f);
            glVertex2f(0.427f, -0.67f);
            glVertex2f(0.443f, -0.682f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(0.407f, -0.896f);
            glVertex2f(0.418f, -0.896f);
            glVertex2f(0.420f, -0.896f);
            glVertex2f(0.423f, -0.896f);
            glVertex2f(0.423f, -0.896f);
            glVertex2f(0.427f, -0.844f);
            glVertex2f(0.425f, -0.825f);
            glVertex2f(0.416f, -0.809f);
            glVertex2f(0.409f, -0.809f);
            glVertex2f(0.405f, -0.809f);
            glVertex2f(0.374f, -0.817f);
            glVertex2f(0.374f, -0.84f);
            glVertex2f(0.374f, -0.876f);
            glVertex2f(0.383f, -0.896f);
            glVertex2f(0.392f, -0.896f);
            glVertex2f(0.396f, -0.896f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(0.600f, -0.71f);
            glVertex2f(0.612f, -0.694f);
            glVertex2f(0.609f, -0.702f);
            glVertex2f(0.609f, -0.702f);
            glVertex2f(0.609f, -0.694f);
            glVertex2f(0.609f, -0.662f);
            glVertex2f(0.609f, -0.647f);
            glVertex2f(0.596f, -0.647f);
            glVertex2f(0.587f, -0.647f);
            glVertex2f(0.572f, -0.655f);
            glVertex2f(0.558f, -0.67f);
            glVertex2f(0.558f, -0.694f);
            glVertex2f(0.576f, -0.706f);
            glVertex2f(0.592f, -0.714f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(0.256f, -0.868f);
            glVertex2f(0.278f, -0.876f);
            glVertex2f(0.283f, -0.876f);
            glVertex2f(0.285f, -0.872f);
            glVertex2f(0.294f, -0.872f);
            glVertex2f(0.292f, -0.872f);
            glVertex2f(0.294f, -0.856f);
            glVertex2f(0.300f, -0.797f);
            glVertex2f(0.298f, -0.765f);
            glVertex2f(0.287f, -0.753f);
            glVertex2f(0.263f, -0.742f);
            glVertex2f(0.236f, -0.738f);
            glVertex2f(0.220f, -0.738f);
            glVertex2f(0.200f, -0.757f);
            glVertex2f(0.192f, -0.781f);
            glVertex2f(0.192f, -0.801f);
            glVertex2f(0.194f, -0.828f);
            glVertex2f(0.198f, -0.844f);
            glVertex2f(0.212f, -0.86f);
            glVertex2f(0.225f, -0.868f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(0.380f, -0.706f);
            glVertex2f(0.380f, -0.674f);
            glVertex2f(0.374f, -0.655f);
            glVertex2f(0.365f, -0.651f);
            glVertex2f(0.356f, -0.651f);
            glVertex2f(0.338f, -0.639f);
            glVertex2f(0.309f, -0.623f);
            glVertex2f(0.309f, -0.635f);
            glVertex2f(0.309f, -0.682f);
            glVertex2f(0.309f, -0.718f);
            glVertex2f(0.309f, -0.73f);
            glVertex2f(0.312f, -0.761f);
            glVertex2f(0.325f, -0.777f);
            glVertex2f(0.338f, -0.777f);
            glVertex2f(0.363f, -0.777f);
            glVertex2f(0.372f, -0.777f);
            glVertex2f(0.378f, -0.769f);
            glVertex2f(0.378f, -0.749f);
            glVertex2f(0.380f, -0.753f);
            glVertex2f(0.380f, -0.745f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(0.478f, -0.908f);
            glVertex2f(0.478f, -0.908f);
            glVertex2f(0.472f, -0.908f);
            glVertex2f(0.467f, -0.915f);
            glVertex2f(0.460f, -0.923f);
            glVertex2f(0.460f, -0.935f);
            glVertex2f(0.456f, -0.939f);
            glVertex2f(0.456f, -0.939f);
            glVertex2f(0.543f, -0.939f);
            glVertex2f(0.543f, -0.939f);
            glVertex2f(0.538f, -0.892f);
            glVertex2f(0.538f, -0.892f);
            glVertex2f(0.527f, -0.892f);
            glVertex2f(0.516f, -0.884f);
            glVertex2f(0.503f, -0.884f);
            glVertex2f(0.485f, -0.884f);
            glVertex2f(0.478f, -0.888f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(0.136f, -0.718f);
            glVertex2f(0.147f, -0.726f);
            glVertex2f(0.149f, -0.726f);
            glVertex2f(0.178f, -0.694f);
            glVertex2f(0.192f, -0.658f);
            glVertex2f(0.187f, -0.635f);
            glVertex2f(0.176f, -0.623f);
            glVertex2f(0.172f, -0.607f);
            glVertex2f(0.165f, -0.591f);
            glVertex2f(0.152f, -0.579f);
            glVertex2f(0.129f, -0.575f);
            glVertex2f(0.105f, -0.575f);
            glVertex2f(0.094f, -0.575f);
            glVertex2f(0.083f, -0.603f);
            glVertex2f(0.080f, -0.639f);
            glVertex2f(0.078f, -0.67f);
            glVertex2f(0.078f, -0.686f);
            glVertex2f(0.100f, -0.738f);
            glVertex2f(0.114f, -0.738f);
            glVertex2f(0.127f, -0.734f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(0.103f, -0.868f);
            glVertex2f(0.096f, -0.884f);
            glVertex2f(0.087f, -0.904f);
            glVertex2f(0.085f, -0.923f);
            glVertex2f(0.085f, -0.939f);
            glVertex2f(0.085f, -0.943f);
            glVertex2f(0.085f, -0.947f);
            glVertex2f(0.158f, -0.955f);
            glVertex2f(0.165f, -0.927f);
            glVertex2f(0.167f, -0.884f);
            glVertex2f(0.167f, -0.856f);
            glVertex2f(0.154f, -0.828f);
            glVertex2f(0.138f, -0.828f);
            glVertex2f(0.125f, -0.828f);
            glVertex2f(0.120f, -0.828f);
            glVertex2f(0.109f, -0.848f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(0.247f, -0.682f);
            glVertex2f(0.249f, -0.686f);
            glVertex2f(0.254f, -0.674f);
            glVertex2f(0.258f, -0.662f);
            glVertex2f(0.258f, -0.639f);
            glVertex2f(0.247f, -0.623f);
            glVertex2f(0.240f, -0.619f);
            glVertex2f(0.229f, -0.619f);
            glVertex2f(0.216f, -0.635f);
            glVertex2f(0.212f, -0.686f);
            glVertex2f(0.218f, -0.706f);
            glVertex2f(0.234f, -0.702f);
            glVertex2f(0.240f, -0.694f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(77,77,77);
            glVertex2f(0.318f, -0.919f);
            glVertex2f(0.318f, -0.923f);
            glVertex2f(.318f, -0.935f);
            glVertex2f(0.318f, -0.935f);
            glVertex2f(0.318f, -0.939f);
            glVertex2f(0.318f, -0.939f);
            glVertex2f(0.318f, -0.943f);
            glVertex2f(0.318f, -0.947f);
            glVertex2f(0.354f, -0.943f);
            glVertex2f(0.354f, -0.923f);
            glVertex2f(0.349f, -0.904f);
            glVertex2f(0.338f, -0.888f);
            glVertex2f(0.329f, -0.9f);
            glVertex2f(0.325f, -0.9f);
            glVertex2f(0.320f, -0.904f);
            glVertex2f(0.318f, -0.908f);
            glVertex2f(0.318f, -0.911f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(77,77,77);
            glVertex2f(0.449f, -0.789f);
            glVertex2f(0.460f, -0.789f);
            glVertex2f(0.460f, -0.765f);
            glVertex2f(0.460f, -0.745f);
            glVertex2f(0.447f, -0.722f);
            glVertex2f(0.432f, -0.722f);
            glVertex2f(0.425f, -0.73f);
            glVertex2f(0.420f, -0.745f);
            glVertex2f(0.420f, -0.765f);
            glVertex2f(0.425f, -0.797f);
            glVertex2f(0.436f, -0.801f);
            glVertex2f(0.449f, -0.801f);
            glVertex2f(0.452f, -0.801f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(77,77,77);
            glVertex2f(0.045f, -0.923f);
            glVertex2f(0.047f, -0.923f);
            glVertex2f(0.047f, -0.923f);
            glVertex2f(0.069f, -0.896f);
            glVertex2f(0.069f, -0.88f);
            glVertex2f(0.067f, -0.852f);
            glVertex2f(0.058f, -0.825f);
            glVertex2f(0.038f, -0.821f);
            glVertex2f(0.027f, -0.832f);
            glVertex2f(0.020f, -0.84f);
            glVertex2f(0.018f, -0.856f);
            glVertex2f(0.018f, -0.9f);
            glVertex2f(0.020f, -0.908f);
            glVertex2f(0.027f, -0.923f);
            glVertex2f(0.036f, -0.923f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(77,77,77);
            glVertex2f(0.609f, -0.923f);
            glVertex2f(0.614f, -0.923f);
            glVertex2f(0.618f, -0.923f);
            glVertex2f(0.620f, -0.923f);
            glVertex2f(0.620f, -0.919f);
            glVertex2f(0.620f, -0.904f);
            glVertex2f(0.616f, -0.9f);
            glVertex2f(0.600f, -0.9f);
            glVertex2f(0.596f, -0.9f);
            glVertex2f(0.596f, -0.908f);
            glVertex2f(0.600f, -0.915f);
            glVertex2f(0.605f, -0.919f);
            glEnd();

            glPopMatrix();
}

void sky()
{

    glPushMatrix();
    glScalef(32,18,0);
    glTranslatef(0,0.1,0);

     glBegin(GL_TRIANGLE_FAN);
            setColor("sky");
            glVertex2f(-0.998f, 0.211f);
            glVertex2f(1.002f, 0.231f);
            glVertex2f(1.000f, 0.895f);
            glVertex2f(-1.000f, 0.899f);
            glVertex2f(-1.000f, 0.211f);
            glEnd();
            glPopMatrix();
}
void keyboard(unsigned char key, int x, int y) {
    switch (key) {
        case 'a':
            /*if (move_gate_1 <.1)  // Check if within the upper limit
                move_gate_1 += 0.1f;  // Move the object upward along the y-axis*/
                up_1 =true;
            break;
        case 'A':
             /* if(move_gate_1>-2.25)// Check if within the lower limit
                move_gate_1 -= 0.1f;  // Move the object downward along the y-axis*/
                down_1=true;
            break;


        case 'b':
           /* if(move_gate_2<.1)
                move_gate_2 +=.1;*/
                up_2=true;

            break;

        case 'B':
           /* if(move_gate_2>-3)
                move_gate_2 -=.1f;*/
                down_2=true;
            break;

        case 'c':
           /* if(move_gate_3<.1)
                move_gate_3 +=.1;*/
                up_3=true;
            break;

        case 'C':
            /*if(move_gate_3>-4.5)
                move_gate_3 -=.1;*/
                down_3=true;
            break;


        case 'd':
            /*if(move_gate_4<.1)
                move_gate_4 +=.1;*/
                up_4=true;

            break;

        case 'D':
            /*if(move_gate_4>-5.5)
                move_gate_4 -=.1;*/
                down_4=true;
            break;


        case 'e':
            /*if(move_gate_5<.0)
                move_gate_5 +=.1;*/
                up_5=true;
            break;

        case 'E':
            /*if(move_gate_5>-5.7)
                move_gate_5 -=.1;*/
                down_5=true;
            break;



        case 'f':
           /* if(move_gate_6<.0)
                move_gate_6 +=.1;*/
                up_6=true;
            break;

        case 'F':
            /*if(move_gate_6>-2.8)
                move_gate_6 -=.1;*/
                down_6=true;
            break;


        case 'g':
           /* if(move_gate_6<.0)
                move_gate_6 +=.1;*/
                up_7=true;
            break;

        case 'G':
            /*if(move_gate_6>-2.8)
                move_gate_6 -=.1;*/
                down_7=true;
            break;


        case 'h':
           /* if(move_gate_6<.0)
                move_gate_6 +=.1;*/
                up_8=true;
            break;

        case 'H':
            /*if(move_gate_6>-2.8)
                move_gate_6 -=.1;*/
                down_8=true;
            break;

        case 's':
            move_ship_x +=.1;
            break;

        case '1':
           /* if(move_water_1<2)
            {
                move_water_1 +=.1;
                move_ship_y +=.1;

                if(move_water_1>=2)
                {
                    canal_1= true;
                }


            }*/
            canal_1=true;

            break;


        case '2':
           /* if(move_water_2<2 && canal_1 )
            {
                move_water_2 +=.1;
                move_ship_y +=.1;

            }*/
            if(move_water_1>=2)
            canal_2=true;

            break;

        case '3':
            if(move_water_2>=2)
            canal_3=true;
            break;

        case '5':
            canal_5=true;
            break;

        case '6':
            if(move_water_5<=-2)
            canal_6=true;
            break;

        case '7':
            if(move_water_6<=-2)
            canal_7=true;
            break;



    }

    glutPostRedisplay();  // Trigger a redraw to update the display
}


void displayCanal() {

	//glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);

	sky();

	mountain_back();
    mountain_front();



	sidewater();
	ground();
	rocks();


	sewage_canal_1();
	sewage_canal_2();
	sewage_canal_3();
	sewage_canal_4();
	sewage_canal_5();
	sewage_canal_6();
	sewage_canal_7();

	ship1();

	FIRST_GATE();
	SECOND_GATE();
	THIRD_GATE();
	fourth_gate();
	fifth_gate();
	sixth_gate();
	seventh_gate();
	eight_gate();



	//drain();

    glFlush();  // Render now
    glutSwapBuffers();
}

void tempdisplay()
{
    glPushMatrix();
    glScalef(1.3,1.7,1);
    displayCanal();
    glPopMatrix();
}
