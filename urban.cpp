#include <bits/stdc++.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include <cstdio>


using namespace std;

bool dayNight = true;

float cloudpos = 32;
float cloudspeed = 0.05;

float Shippos = -160;
float Shipspeed = 0.10;

float trainpos = 60;
float trainspeed = 0.15;



// functions


void currentWater(float Tx, float Ty)
{
    glPushMatrix();
    glTranslatef(Tx, Ty, 0);
    glBegin(GL_LINES);
    glColor3ub(225, 225, 225);
    glVertex2f(3.0f, -5.0f);
    glVertex2f(5.0f, -5.0f);
    glEnd();
    glPopMatrix();
}
void star()
{
    glPointSize(2.0);
    glBegin(GL_POINTS);
    glColor3ub(233, 209, 102);
    glVertex3f(-40, 25, 0);
    glEnd();
    glPointSize(2.0);
    glBegin(GL_POINTS);
    glColor3ub(233, 209, 102);
    glVertex3f(-25, 25, 0);
    glEnd();
    glPointSize(2.0);
    glBegin(GL_POINTS);
    glColor3ub(233, 209, 102);
    glVertex3f(-30, 10, 0);
    glEnd();
    glPointSize(2.0);
    glBegin(GL_POINTS);
    glColor3ub(233, 209, 102);
    glVertex3f(-35, 15, 0);
    glEnd();
    glEnd();
    glPointSize(2.0);
    glBegin(GL_POINTS);
    glColor3ub(233, 209, 102);
    glVertex3f(-20, 25, 0);
    glEnd();
    glPointSize(2.0);
    glBegin(GL_POINTS);
    glColor3ub(233, 209, 102);
    glVertex3f(-15, 20, 0);
    glEnd();
    glPointSize(2.0);
    glBegin(GL_POINTS);
    glColor3ub(233, 209, 102);
    glVertex3f(40, 25, 0);
    glEnd();
    glPointSize(2.0);
    glBegin(GL_POINTS);
    glColor3ub(233, 209, 102);
    glVertex3f(25, 25, 0);
    glEnd();
    glPointSize(2.0);
    glBegin(GL_POINTS);
    glColor3ub(233, 209, 102);
    glVertex3f(30, 10, 0);
    glEnd();
    glPointSize(2.0);
    glBegin(GL_POINTS);
    glColor3ub(233, 209, 102);
    glVertex3f(35, 15, 0);
    glEnd();
    glEnd();
    glPointSize(2.0);
    glBegin(GL_POINTS);
    glColor3ub(233, 209, 102);
    glVertex3f(20, 25, 0);
    glEnd();
    glPointSize(2.0);
    glBegin(GL_POINTS);
    glColor3ub(233, 209, 102);
    glVertex3f(15, 20, 0);
    glEnd();
    glPointSize(2.0);
    glBegin(GL_POINTS);
    glColor3ub(233, 209, 102);
    glVertex3f(0, 20, 0);
    glEnd();
    glBegin(GL_POINTS);
    glColor3ub(233, 209, 102);
    glVertex3f(-5, 25, 0);
    glEnd();
}
void buildingwindow(float Sx, float Sy, float Tx, float Ty)
{
    glPushMatrix();
    glScalef(Sx, Sy, 1);
    glTranslatef(Tx, Ty, 0);
    glBegin(GL_QUADS);
    setColor("buildingglass");
    glVertex3f(-5.0f, 3.0f, 0.0f);
    glVertex3f(5.0f, 3.0f, 0.0f);
    glVertex3f(5.0f, 5.0f, 0.0f);
    glVertex3f(-5.0f, 5.0f, 0.0f);
    glEnd();
    glPopMatrix();
}
void buildingwindowtwo(float Sx, float Sy, float Tx, float Ty)
{
    glPushMatrix();
    glScalef(Sx, Sy, 1);
    glTranslatef(Tx, Ty, 0);
    glBegin(GL_QUADS);
    setColor("buildingglass");
    glVertex3f(1.0f, 2.0f, 0.0f);
    glVertex3f(2.0f, 2.0f, 0.0f);
    glVertex3f(2.0f, 4.0f, 0.0f);
    glVertex3f(1.0f, 4.0f, 0.0f);
    glEnd();
    glPopMatrix();
}
void twintowerwindow(float Sx, float Sy, float Tx, float Ty)
{
    glPushMatrix();
    glScalef(Sx, Sy, 1);
    glTranslatef(Tx, Ty, 0);
    glBegin(GL_QUADS);
    setColor("buildingglass");
    glVertex3f(1.0f, 1.0f, 0.0f);
    glVertex3f(3.0f, 1.0f, 0.0f);
    glVertex3f(3.0f, 2.0f, 0.0f);
    glVertex3f(1.0f, 2.0f, 0.0f);
    glEnd();
    glPopMatrix();
}
void bridgeBrike(float Sx, float Sy, float Tx, float Ty)
{
    glPushMatrix();
    glScalef(Sx, Sy, 1);
    glTranslatef(Tx, Ty, 0);
    glBegin(GL_QUADS);
    setColor("brick");
    glVertex3f(1.0f, 0.50f, 0.0f);
    glVertex3f(2.0f, 0.50f, 0.0f);
    glVertex3f(2.0f, 0.75f, 0.0f);
    glVertex3f(1.0f, 0.75f, 0.0f);
    glEnd();
    glPopMatrix();
}
void bridgenut(float Sx, float Sy, float Tx, float Ty)
{
    glPushMatrix();
    glScalef(Sx, Sy, 1);
    glTranslatef(Tx, Ty, 0);
    glBegin(GL_QUADS);
    setColor("brick");
    glVertex3f(1.0f, 0.25f, 0.0f);
    glVertex3f(1.25f, 0.25f, 0.0f);
    glVertex3f(1.25f, 0.50f, 0.0f);
    glVertex3f(1.0f, 0.50f, 0.0f);
    glEnd();
    glPopMatrix();
}
void drawBuilding()
{
    glBegin(GL_POLYGON);       // Buildings
    setColor("bulidingcolor"); // Yellow
    glVertex2f(40.0f, 3.0f);
    glVertex2f(40.0f, 11.0f);
    glVertex2f(36.0f, 11.0f);
    glVertex2f(36.0f, 3.0f);
    glEnd();
    buildingwindow(0.3, 0.2, 127, 50);
    buildingwindow(0.3, 0.2, 127, 45);
    buildingwindow(0.3, 0.2, 127, 40);
    buildingwindow(0.3, 0.2, 127, 35);
    buildingwindow(0.3, 0.2, 127, 30);
    buildingwindow(0.3, 0.2, 127, 25);
    buildingwindow(0.3, 0.2, 127, 20);

    glBegin(GL_POLYGON); // Buildings
    setColor("bulidingcolor");
    // glColor3ub(234, 144, 75); // Yellow
    glVertex2f(34.0f, 3.0f);
    glVertex2f(34.0f, 14.0f);
    glVertex2f(29.0f, 14.0f);
    glVertex2f(29.0f, 3.0f);
    glEnd();
    buildingwindowtwo(0.5, 0.5, 60, 10);
    buildingwindowtwo(0.5, 0.5, 62, 10);
    buildingwindowtwo(0.5, 0.5, 60, 14);
    buildingwindowtwo(0.5, 0.5, 62, 14);
    buildingwindowtwo(0.5, 0.5, 60, 18);
    buildingwindowtwo(0.5, 0.5, 62, 18);
    glBegin(GL_POLYGON);       // Buildings
    setColor("bulidingcolor"); // Yellow
    glVertex2f(36.0f, 3.0f);
    glVertex2f(36.0f, 8.0f);
    glVertex2f(32.0f, 8.0f);
    glVertex2f(32.0f, 3.0f);
    glEnd();
    buildingwindow(0.3, 0.2, 114, 35);
    buildingwindow(0.3, 0.2, 114, 30);
    buildingwindow(0.3, 0.2, 114, 25);
    buildingwindow(0.3, 0.2, 114, 20);
    buildingwindow(0.3, 0.2, 114, 15);
    // Render now
    // upore sob right side ar building
    glBegin(GL_POLYGON);       // Buildings
    setColor("bulidingcolor"); // Yellow
    glVertex2f(28.0f, 3.0f);
    glVertex2f(28.0f, 11.0f);
    glVertex2f(23.0f, 11.0f);
    glVertex2f(23.0f, 3.0f);
    glEnd();
    buildingwindow(0.3, 0.2, 83, 45);
    buildingwindow(0.3, 0.2, 83, 40);
    buildingwindow(0.3, 0.2, 83, 35);
    buildingwindow(0.3, 0.2, 83, 30);
    buildingwindow(0.3, 0.2, 83, 25);
    buildingwindow(0.3, 0.2, 83, 20);
    buildingwindow(0.3, 0.2, 83, 15);
    glBegin(GL_POLYGON);       // Buildings
    setColor("bulidingcolor"); // Yellow
    glVertex2f(30.0f, 3.0f);
    glVertex2f(30.0f, 9.0f);
    glVertex2f(26.0f, 9.0f);
    glVertex2f(26.0f, 3.0f);
    glEnd();
    buildingwindow(0.3, 0.2, 93, 35);
    buildingwindow(0.3, 0.2, 93, 30);
    buildingwindow(0.3, 0.2, 93, 25);
    buildingwindow(0.3, 0.2, 93, 20);
    buildingwindow(0.3, 0.2, 93, 15);
    // right 2nd
    glBegin(GL_POLYGON);       // Buildings
    setColor("bulidingcolor"); // Yellow
    glVertex2f(23.0f, 3.0f);
    glVertex2f(23.0f, 10.0f);
    glVertex2f(18.0f, 10.0f);
    glVertex2f(18.0f, 3.0f);
    glEnd();
    buildingwindowtwo(0.5, 0.5, 39, 10);
    buildingwindowtwo(0.5, 0.5, 41, 14);
    buildingwindowtwo(0.5, 0.5, 41, 6);
    glBegin(GL_POLYGON);       // Buildings
    setColor("bulidingcolor"); // Yellow
    glVertex2f(19.0f, 3.0f);
    glVertex2f(19.0f, 9.0f);
    glVertex2f(14.0f, 9.0f);
    glVertex2f(14.0f, 3.0f);
    glEnd();
    buildingwindow(0.3, 0.2, 55, 35);
    buildingwindow(0.3, 0.2, 55, 30);
    buildingwindow(0.3, 0.2, 55, 25);
    buildingwindow(0.3, 0.2, 55, 20);
    buildingwindow(0.3, 0.2, 55, 15);

    glBegin(GL_POLYGON);       // Buildings
    setColor("bulidingcolor"); // Yellow
    glVertex2f(14.0f, 3.0f);
    glVertex2f(14.0f, 12.0f);
    glVertex2f(9.0f, 12.0f);
    glVertex2f(9.0f, 3.0f);
    glEnd();
    buildingwindow(0.3, 0.2, 39, 45);
    buildingwindow(0.3, 0.2, 39, 40);
    buildingwindow(0.3, 0.2, 39, 35);
    buildingwindow(0.3, 0.2, 39, 30);
    buildingwindow(0.3, 0.2, 39, 25);
    buildingwindow(0.3, 0.2, 39, 20);
    buildingwindow(0.3, 0.2, 39, 15);
    glBegin(GL_POLYGON);       // Buildings
    setColor("bulidingcolor"); // Yellow
    glVertex2f(10.0f, 3.0f);
    glVertex2f(10.0f, 11.0f);
    glVertex2f(5.0f, 11.0f);
    glVertex2f(5.0f, 3.0f);
    glEnd();
    buildingwindowtwo(0.5, 0.5, 15, 10);
    buildingwindowtwo(0.5, 0.5, 15, 14);
    buildingwindowtwo(0.5, 0.5, 15, 6);
    buildingwindowtwo(0.5, 0.5, 13, 10);
    buildingwindowtwo(0.5, 0.5, 13, 14);
    buildingwindowtwo(0.5, 0.5, 13, 6);
    buildingwindowtwo(0.5, 0.5, 11, 10);
    buildingwindowtwo(0.5, 0.5, 11, 14);
    buildingwindowtwo(0.5, 0.5, 11, 6);

    // NEW BUILDINGS

    glBegin(GL_POLYGON);       // Buildings
    setColor("bulidingcolor"); // Yellow
    glVertex2f(-40.0f, 3.0f);
    glVertex2f(-40.0f, 11.0f);
    glVertex2f(-36.0f, 11.0f);
    glVertex2f(-36.0f, 3.0f);
    glEnd();
    buildingwindow(0.3, 0.2, -127, 50);
    buildingwindow(0.3, 0.2, -127, 45);
    buildingwindow(0.3, 0.2, -127, 40);
    buildingwindow(0.3, 0.2, -127, 35);
    buildingwindow(0.3, 0.2, -127, 30);
    buildingwindow(0.3, 0.2, -127, 25);
    buildingwindow(0.3, 0.2, -127, 20);

    glBegin(GL_POLYGON);       // Buildings
    setColor("bulidingcolor"); // Yellow
    glVertex2f(-34.0f, 3.0f);
    glVertex2f(-34.0f, 13.0f);
    glVertex2f(-29.0f, 13.0f);
    glVertex2f(-29.0f, 3.0f);
    glEnd();
    buildingwindowtwo(0.5, 0.5, -65, 10);
    buildingwindowtwo(0.5, 0.5, -62, 10);
    buildingwindowtwo(0.5, 0.5, -65, 14);
    buildingwindowtwo(0.5, 0.5, -62, 14);
    buildingwindowtwo(0.5, 0.5, -65, 18);
    buildingwindowtwo(0.5, 0.5, -62, 18);

    // left bildig 1st
    glBegin(GL_POLYGON);       // Buildings
    setColor("bulidingcolor"); // Yellow
    glVertex2f(-36.0f, 3.0f);
    glVertex2f(-36.0f, 8.0f);
    glVertex2f(-32.0f, 8.0f);
    glVertex2f(-32.0f, 3.0f);
    glEnd();
    buildingwindow(0.3, 0.2, -114, 35);
    buildingwindow(0.3, 0.2, -114, 30);
    buildingwindow(0.3, 0.2, -114, 25);
    buildingwindow(0.3, 0.2, -114, 20);
    buildingwindow(0.3, 0.2, -114, 15);

    glBegin(GL_POLYGON);       // Buildings
    setColor("bulidingcolor"); // Yellow
    glVertex2f(-28.0f, 3.0f);
    glVertex2f(-28.0f, 11.0f);
    glVertex2f(-23.0f, 11.0f);
    glVertex2f(-23.0f, 3.0f);
    glEnd();
    buildingwindow(0.3, 0.2, -83, 45);
    buildingwindow(0.3, 0.2, -83, 40);
    buildingwindow(0.3, 0.2, -83, 35);
    buildingwindow(0.3, 0.2, -83, 30);
    buildingwindow(0.3, 0.2, -83, 25);
    buildingwindow(0.3, 0.2, -83, 20);
    buildingwindow(0.3, 0.2, -83, 15);

    glBegin(GL_POLYGON);       // Buildings
    setColor("bulidingcolor"); // Yellow
    glVertex2f(-30.0f, 3.0f);
    glVertex2f(-30.0f, 9.0f);
    glVertex2f(-26.0f, 9.0f);
    glVertex2f(-26.0f, 3.0f);
    glEnd();
    buildingwindow(0.3, 0.2, -93, 35);
    buildingwindow(0.3, 0.2, -93, 30);
    buildingwindow(0.3, 0.2, -93, 25);
    buildingwindow(0.3, 0.2, -93, 20);
    buildingwindow(0.3, 0.2, -93, 15);

    glBegin(GL_POLYGON);       // Buildings
    setColor("bulidingcolor"); // Yellow
    glVertex2f(-23.0f, 3.0f);
    glVertex2f(-23.0f, 10.0f);
    glVertex2f(-18.0f, 10.0f);
    glVertex2f(-18.0f, 3.0f);
    glEnd();
    buildingwindowtwo(0.5, 0.5, -43, 10);
    buildingwindowtwo(0.5, 0.5, -41, 14);
    buildingwindowtwo(0.5, 0.5, -41, 6);

    glBegin(GL_POLYGON);       // Buildings
    setColor("bulidingcolor"); // Yellow
    glVertex2f(-19.0f, 3.0f);
    glVertex2f(-19.0f, 9.0f);
    glVertex2f(-14.0f, 9.0f);
    glVertex2f(-14.0f, 3.0f);
    glEnd();
    buildingwindow(0.3, 0.2, -55, 35);
    buildingwindow(0.3, 0.2, -55, 30);
    buildingwindow(0.3, 0.2, -55, 25);
    buildingwindow(0.3, 0.2, -55, 20);
    buildingwindow(0.3, 0.2, -55, 15);

    glBegin(GL_POLYGON);       // Buildings
    setColor("bulidingcolor"); // Yellow
    glVertex2f(-14.0f, 3.0f);
    glVertex2f(-14.0f, 12.0f);
    glVertex2f(-9.0f, 12.0f);
    glVertex2f(-9.0f, 3.0f);
    glEnd();
    buildingwindowtwo(0.5, 0.5, -25, 10);
    buildingwindowtwo(0.5, 0.5, -25, 14);
    buildingwindowtwo(0.5, 0.5, -25, 6);
    buildingwindowtwo(0.5, 0.5, -23, 10);
    buildingwindowtwo(0.5, 0.5, -23, 14);
    buildingwindowtwo(0.5, 0.5, -23, 6);
    buildingwindowtwo(0.5, 0.5, -21, 10);
    buildingwindowtwo(0.5, 0.5, -21, 14);
    buildingwindowtwo(0.5, 0.5, -21, 6);
}
void drawBuildingL()
{
    glBegin(GL_POLYGON);        // Buildings
    setColor("buildingShadow"); // Yellow
    glVertex2f(40.0f, 3.0f);
    glVertex2f(40.0f, 11.0f);
    glVertex2f(36.0f, 11.0f);
    glVertex2f(36.0f, 3.0f);
    glEnd();
    buildingwindow(0.3, 0.2, 127, 50);
    buildingwindow(0.3, 0.2, 127, 45);
    buildingwindow(0.3, 0.2, 127, 40);
    buildingwindow(0.3, 0.2, 127, 35);
    buildingwindow(0.3, 0.2, 127, 30);
    buildingwindow(0.3, 0.2, 127, 25);
    buildingwindow(0.3, 0.2, 127, 20);

    glBegin(GL_POLYGON);        // Buildings
    setColor("buildingShadow"); // Yellow
    glVertex2f(34.0f, 3.0f);
    glVertex2f(34.0f, 14.0f);
    glVertex2f(29.0f, 14.0f);
    glVertex2f(29.0f, 3.0f);
    glEnd();
    buildingwindowtwo(0.5, 0.5, 60, 10);
    buildingwindowtwo(0.5, 0.5, 62, 10);
    buildingwindowtwo(0.5, 0.5, 60, 14);
    buildingwindowtwo(0.5, 0.5, 62, 14);
    buildingwindowtwo(0.5, 0.5, 60, 18);
    buildingwindowtwo(0.5, 0.5, 62, 18);
    glBegin(GL_POLYGON);        // Buildings
    setColor("buildingShadow"); // Yellow
    glVertex2f(36.0f, 3.0f);
    glVertex2f(36.0f, 8.0f);
    glVertex2f(32.0f, 8.0f);
    glVertex2f(32.0f, 3.0f);
    glEnd();
    buildingwindow(0.3, 0.2, 114, 35);
    buildingwindow(0.3, 0.2, 114, 30);
    buildingwindow(0.3, 0.2, 114, 25);
    buildingwindow(0.3, 0.2, 114, 20);
    buildingwindow(0.3, 0.2, 114, 15);
    // Render now
    // upore sob right side ar building
    glBegin(GL_POLYGON);        // Buildings
    setColor("buildingShadow"); // Yellow
    glVertex2f(28.0f, 3.0f);
    glVertex2f(28.0f, 11.0f);
    glVertex2f(23.0f, 11.0f);
    glVertex2f(23.0f, 3.0f);
    glEnd();
    buildingwindow(0.3, 0.2, 83, 45);
    buildingwindow(0.3, 0.2, 83, 40);
    buildingwindow(0.3, 0.2, 83, 35);
    buildingwindow(0.3, 0.2, 83, 30);
    buildingwindow(0.3, 0.2, 83, 25);
    buildingwindow(0.3, 0.2, 83, 20);
    buildingwindow(0.3, 0.2, 83, 15);
    glBegin(GL_POLYGON);        // Buildings
    setColor("buildingShadow"); // Yellow
    glVertex2f(30.0f, 3.0f);
    glVertex2f(30.0f, 9.0f);
    glVertex2f(26.0f, 9.0f);
    glVertex2f(26.0f, 3.0f);
    glEnd();
    buildingwindow(0.3, 0.2, 93, 35);
    buildingwindow(0.3, 0.2, 93, 30);
    buildingwindow(0.3, 0.2, 93, 25);
    buildingwindow(0.3, 0.2, 93, 20);
    buildingwindow(0.3, 0.2, 93, 15);
    // right 2nd
    glBegin(GL_POLYGON);        // Buildings
    setColor("buildingShadow"); // Yellow
    glVertex2f(23.0f, 3.0f);
    glVertex2f(23.0f, 10.0f);
    glVertex2f(18.0f, 10.0f);
    glVertex2f(18.0f, 3.0f);
    glEnd();
    buildingwindowtwo(0.5, 0.5, 39, 10);
    buildingwindowtwo(0.5, 0.5, 41, 14);
    buildingwindowtwo(0.5, 0.5, 41, 6);
    glBegin(GL_POLYGON);        // Buildings
    setColor("buildingShadow"); // Yellow
    glVertex2f(19.0f, 3.0f);
    glVertex2f(19.0f, 9.0f);
    glVertex2f(14.0f, 9.0f);
    glVertex2f(14.0f, 3.0f);
    glEnd();
    buildingwindow(0.3, 0.2, 55, 35);
    buildingwindow(0.3, 0.2, 55, 30);
    buildingwindow(0.3, 0.2, 55, 25);
    buildingwindow(0.3, 0.2, 55, 20);
    buildingwindow(0.3, 0.2, 55, 15);

    glBegin(GL_POLYGON);        // Buildings
    setColor("buildingShadow"); // Yellow
    glVertex2f(14.0f, 3.0f);
    glVertex2f(14.0f, 12.0f);
    glVertex2f(9.0f, 12.0f);
    glVertex2f(9.0f, 3.0f);
    glEnd();
    buildingwindow(0.3, 0.2, 39, 45);
    buildingwindow(0.3, 0.2, 39, 40);
    buildingwindow(0.3, 0.2, 39, 35);
    buildingwindow(0.3, 0.2, 39, 30);
    buildingwindow(0.3, 0.2, 39, 25);
    buildingwindow(0.3, 0.2, 39, 20);
    buildingwindow(0.3, 0.2, 39, 15);
    glBegin(GL_POLYGON);        // Buildings
    setColor("buildingShadow"); // Yellow
    glVertex2f(10.0f, 3.0f);
    glVertex2f(10.0f, 11.0f);
    glVertex2f(5.0f, 11.0f);
    glVertex2f(5.0f, 3.0f);
    glEnd();
    buildingwindowtwo(0.5, 0.5, 15, 10);
    buildingwindowtwo(0.5, 0.5, 15, 14);
    buildingwindowtwo(0.5, 0.5, 15, 6);
    buildingwindowtwo(0.5, 0.5, 13, 10);
    buildingwindowtwo(0.5, 0.5, 13, 14);
    buildingwindowtwo(0.5, 0.5, 13, 6);
    buildingwindowtwo(0.5, 0.5, 11, 10);
    buildingwindowtwo(0.5, 0.5, 11, 14);
    buildingwindowtwo(0.5, 0.5, 11, 6);

    // NEW BUILDINGS

    glBegin(GL_POLYGON);        // Buildings
    setColor("buildingShadow"); // Yellow
    glVertex2f(-40.0f, 3.0f);
    glVertex2f(-40.0f, 11.0f);
    glVertex2f(-36.0f, 11.0f);
    glVertex2f(-36.0f, 3.0f);
    glEnd();
    buildingwindow(0.3, 0.2, -127, 50);
    buildingwindow(0.3, 0.2, -127, 45);
    buildingwindow(0.3, 0.2, -127, 40);
    buildingwindow(0.3, 0.2, -127, 35);
    buildingwindow(0.3, 0.2, -127, 30);
    buildingwindow(0.3, 0.2, -127, 25);
    buildingwindow(0.3, 0.2, -127, 20);

    glBegin(GL_POLYGON);        // Buildings
    setColor("buildingShadow"); // Yellow
    glVertex2f(-34.0f, 3.0f);
    glVertex2f(-34.0f, 13.0f);
    glVertex2f(-29.0f, 13.0f);
    glVertex2f(-29.0f, 3.0f);
    glEnd();
    buildingwindowtwo(0.5, 0.5, -65, 10);
    buildingwindowtwo(0.5, 0.5, -62, 10);
    buildingwindowtwo(0.5, 0.5, -65, 14);
    buildingwindowtwo(0.5, 0.5, -62, 14);
    buildingwindowtwo(0.5, 0.5, -65, 18);
    buildingwindowtwo(0.5, 0.5, -62, 18);

    // left bildig 1st
    glBegin(GL_POLYGON);        // Buildings
    setColor("buildingShadow"); // Yellow
    glVertex2f(-36.0f, 3.0f);
    glVertex2f(-36.0f, 8.0f);
    glVertex2f(-32.0f, 8.0f);
    glVertex2f(-32.0f, 3.0f);
    glEnd();
    buildingwindow(0.3, 0.2, -114, 35);
    buildingwindow(0.3, 0.2, -114, 30);
    buildingwindow(0.3, 0.2, -114, 25);
    buildingwindow(0.3, 0.2, -114, 20);
    buildingwindow(0.3, 0.2, -114, 15);

    glBegin(GL_POLYGON);        // Buildings
    setColor("buildingShadow"); // Yellow
    glVertex2f(-28.0f, 3.0f);
    glVertex2f(-28.0f, 11.0f);
    glVertex2f(-23.0f, 11.0f);
    glVertex2f(-23.0f, 3.0f);
    glEnd();
    buildingwindow(0.3, 0.2, -83, 45);
    buildingwindow(0.3, 0.2, -83, 40);
    buildingwindow(0.3, 0.2, -83, 35);
    buildingwindow(0.3, 0.2, -83, 30);
    buildingwindow(0.3, 0.2, -83, 25);
    buildingwindow(0.3, 0.2, -83, 20);
    buildingwindow(0.3, 0.2, -83, 15);

    glBegin(GL_POLYGON);        // Buildings
    setColor("buildingShadow"); // Yellow
    glVertex2f(-30.0f, 3.0f);
    glVertex2f(-30.0f, 9.0f);
    glVertex2f(-26.0f, 9.0f);
    glVertex2f(-26.0f, 3.0f);
    glEnd();
    buildingwindow(0.3, 0.2, -93, 35);
    buildingwindow(0.3, 0.2, -93, 30);
    buildingwindow(0.3, 0.2, -93, 25);
    buildingwindow(0.3, 0.2, -93, 20);
    buildingwindow(0.3, 0.2, -93, 15);

    glBegin(GL_POLYGON);        // Buildings
    setColor("buildingShadow"); // Yellow
    glVertex2f(-23.0f, 3.0f);
    glVertex2f(-23.0f, 10.0f);
    glVertex2f(-18.0f, 10.0f);
    glVertex2f(-18.0f, 3.0f);
    glEnd();
    buildingwindowtwo(0.5, 0.5, -43, 10);
    buildingwindowtwo(0.5, 0.5, -41, 14);
    buildingwindowtwo(0.5, 0.5, -41, 6);

    glBegin(GL_POLYGON);        // Buildings
    setColor("buildingShadow"); // Yellow
    glVertex2f(-19.0f, 3.0f);
    glVertex2f(-19.0f, 9.0f);
    glVertex2f(-14.0f, 9.0f);
    glVertex2f(-14.0f, 3.0f);
    glEnd();
    buildingwindow(0.3, 0.2, -55, 35);
    buildingwindow(0.3, 0.2, -55, 30);
    buildingwindow(0.3, 0.2, -55, 25);
    buildingwindow(0.3, 0.2, -55, 20);
    buildingwindow(0.3, 0.2, -55, 15);

    glBegin(GL_POLYGON);        // Buildings
    setColor("buildingShadow"); // Yellow
    glVertex2f(-14.0f, 3.0f);
    glVertex2f(-14.0f, 12.0f);
    glVertex2f(-9.0f, 12.0f);
    glVertex2f(-9.0f, 3.0f);
    glEnd();
    buildingwindowtwo(0.5, 0.5, -25, 10);
    buildingwindowtwo(0.5, 0.5, -25, 14);
    buildingwindowtwo(0.5, 0.5, -25, 6);
    buildingwindowtwo(0.5, 0.5, -23, 10);
    buildingwindowtwo(0.5, 0.5, -23, 14);
    buildingwindowtwo(0.5, 0.5, -23, 6);
    buildingwindowtwo(0.5, 0.5, -21, 10);
    buildingwindowtwo(0.5, 0.5, -21, 14);
    buildingwindowtwo(0.5, 0.5, -21, 6);
}
void drawWater()
{

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.3, 0.8);
    // glColor3ub(27, 214, 255);//uporer color
    glVertex2f(-41.0f, -8.0f);
    glVertex2f(41.0f, -8.0f);
    glVertex2f(41.0f, 3.0f);
    glVertex2f(-41.0f, 3.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.7, 1.0); // nicher color
    glVertex2f(-41.0f, -25.0f);
    glVertex2f(41.0f, -25.0f);
    glColor3f(0.0, 0.3, 0.8); // uporer color
    glVertex2f(41.0f, -8.0f);
    glVertex2f(-41.0f, -8.0f);
    glEnd();
    currentWater(-15, -6);
    currentWater(-10, -4);
    currentWater(-5, -5);
    currentWater(5, -4);
    currentWater(10, -5);
    currentWater(30, 0);
    currentWater(20, -4);
    currentWater(25, -5);
    currentWater(10, -2);

    currentWater(30, -8);
    currentWater(20, -10);
    currentWater(25, -15);
    currentWater(10, -19);

    currentWater(-30, -8);
    currentWater(-20, -10);
    currentWater(-25, -15);
    currentWater(-10, -19);

    currentWater(-30, 0);
    currentWater(-20, -4);
    currentWater(-25, -5);
    currentWater(-10, -2);

    currentWater(-38, 0);
    currentWater(-23, -4);
    currentWater(-27, -5);
    currentWater(-12, -2);

    currentWater(-0, 4);
    currentWater(-0, -10);
    currentWater(-2, -15);
}
void skybackground()
{
    glBegin(GL_POLYGON);
    glColor3ub(0, 10, 54);
    glVertex2f(-41.0, 0.0);
    glVertex2f(41.0, 0.0);
    glColor3ub(1, 56, 112);
    glVertex2f(41.0, 30);
    glVertex2f(-41.0, 30.0);
    glEnd();
}
void palestineFlag()
{
    glColor3ub(122, 194, 244);
    glBegin(GL_LINES);
    glVertex2f(3, 4);
    glVertex2f(-3, 4);
    glEnd();
    glColor3ub(122, 194, 244);
    glBegin(GL_LINES);
    glVertex2f(2, 5);
    glVertex2f(-2, 5);
    glEnd();
    glColor3ub(255, 250, 250);
    glBegin(GL_POLYGON);
    glVertex2f(-2, 3);
    glVertex2f(-10, 3);
    glVertex2f(-10, 7);
    glVertex2f(-2, 7);
    glEnd();
    glColor3ub(13, 158, 8);
    glBegin(GL_POLYGON);
    glVertex2f(-10, 3);
    glVertex2f(-2, 3);
    glVertex2f(-2, 4);
    glVertex2f(-10, 4);
    glEnd();
    glColor3ub(13, 12, 12);
    glBegin(GL_POLYGON);
    glVertex2f(-2, 6);
    glVertex2f(-2, 7);
    glVertex2f(-10, 7);
    glVertex2f(-10, 6);
    glEnd();
    glColor3ub(235, 64, 52);
    glBegin(GL_POLYGON);
    glVertex2f(-10, 3);
    glVertex2f(-8, 5);
    glVertex2f(-10, 7);
    glEnd();
}
void airplan()
{
    glColor3ub(166, 212, 246);
    glBegin(GL_POLYGON);
    glVertex2f(1, 6);
    glVertex2f(3, 4);
    glVertex2f(15, 4);
    glVertex2f(15, 5);
    glVertex2f(13, 6);
    glEnd();
    glColor3ub(73, 25, 209);
    glBegin(GL_POLYGON);
    glVertex2f(1, 6);
    glVertex2f(3, 6);
    glVertex2f(3, 7);
    glVertex2f(1, 9);
    glEnd();
    glColor3ub(73, 25, 209);
    glBegin(GL_POLYGON);
    glVertex2f(7, 4);
    glVertex2f(10.25, -1);
    glVertex2f(11.75, -1);
    glVertex2f(11, 4);
    glEnd();
    glColor3ub(73, 25, 209);
    glBegin(GL_POLYGON);
    glVertex2f(7, 6);
    glVertex2f(10, 6);
    glVertex2f(6, 10);
    glVertex2f(5, 10);
    glEnd();
    glColor3ub(122, 194, 244);
    glBegin(GL_POLYGON);
    glVertex2f(12, 6);
    glVertex2f(13, 5);
    glVertex2f(15, 5);
    glVertex2f(13, 6);
    glEnd();
    palestineFlag();
}
float planPos = -30;
float planSpeed = 0.05;
void tempairPlan()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(planPos, 25, 0);
    glScalef(0.2, 0.2, 0);
    airplan();
    glPopMatrix();
}
float bridgeshadowposx = 0;
float bridgeshadowposy = 0;
float bridgeshadowSpeed = 0.5;
void BridgeBox()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(1, -5, 0);
    glColor3ub(142, 44, 33);
    glBegin(GL_QUADS);
    glVertex2f(4, 0);
    glVertex2f(6, 0);
    glVertex2f(6, 5);
    glVertex2f(4, 5);
    glEnd();
    bridgeBrike(1, 1, 3, 0);
    bridgeBrike(1, 1, 3, 1.5);
    bridgeBrike(1, 1, 4, 1);
    bridgeBrike(1, 1, 4, 2);
    glBegin(GL_QUADS);
    glColor3ub(56, 56, 56);
    glVertex2f(4, 0);
    glColor3f(0.0, 0.3, 0.8);
    glVertex2f(7, -4);
    glColor3f(0.0, 0.3, 0.8);
    glVertex2f(9, -4);
    glColor3ub(56, 56, 56);
    glVertex2f(6, 0);
    glEnd();
    glColor3ub(66, 56, 54);
    glBegin(GL_QUADS);
    glVertex2f(3, 5);
    glVertex2f(7, 5);
    glVertex2f(7, 6);
    glVertex2f(3, 6);
    glEnd();
    glColor3ub(50, 40, 39);
    glBegin(GL_QUADS);
    glVertex2f(2, 6);
    glVertex2f(8, 6);
    glVertex2f(8, 7);
    glVertex2f(2, 7);
    glEnd();
    glPopMatrix();
}
void twintowerl()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-7, 3, 0);
    glBegin(GL_POLYGON);
    setColor("twintower"); // Yellow
    glVertex2f(-2.50, 0.0f);
    glVertex2f(2.50, 0.0f);
    glVertex2f(2.50f, 10.0f);
    glVertex2f(-2.50f, 10.0f);
    glEnd();
    twintowerwindow(0.5, 0.5, -1, 16);
    twintowerwindow(0.5, 0.5, -4, 16);
    twintowerwindow(0.5, 0.5, 1.75, 16);
    twintowerwindow(0.5, 0.5, -1, 14);
    twintowerwindow(0.5, 0.5, -4, 14);
    twintowerwindow(0.5, 0.5, 1.75, 14);
    twintowerwindow(0.5, 0.5, -1, 12);
    twintowerwindow(0.5, 0.5, -4, 12);
    twintowerwindow(0.5, 0.5, 1.75, 12);
    twintowerwindow(0.5, 0.5, -1, 10);
    twintowerwindow(0.5, 0.5, -4, 10);
    twintowerwindow(0.5, 0.5, 1.75, 10);
    twintowerwindow(0.5, 0.5, 1.75, 8);
    twintowerwindow(0.5, 0.5, -1, 8);
    twintowerwindow(0.5, 0.5, -4, 8);
    twintowerwindow(0.5, 0.5, 1.75, 6);
    twintowerwindow(0.5, 0.5, -1, 6);
    twintowerwindow(0.5, 0.5, -4, 6);
    twintowerwindow(0.5, 0.5, 1.75, 4);
    twintowerwindow(0.5, 0.5, -1, 4);
    twintowerwindow(0.5, 0.5, -4, 4);
    twintowerwindow(0.5, 0.5, 1.75, 2);
    twintowerwindow(0.5, 0.5, -1, 2);
    twintowerwindow(0.5, 0.5, -4, 2);
    glBegin(GL_POLYGON);
    setColor("twintower"); // Yellow
    glVertex2f(-2.00, 10.0f);
    glVertex2f(2.00, 10.0f);
    glVertex2f(2.00f, 16.0f);
    glVertex2f(-2.00f, 16.0f);
    glEnd();
    twintowerwindow(0.5, 0.5, -1.50, 18);
    twintowerwindow(0.5, 0.5, -4, 18);
    twintowerwindow(0.5, 0.5, 1, 18);
    twintowerwindow(0.5, 0.5, -1.50, 20);
    twintowerwindow(0.5, 0.5, -4, 20);
    twintowerwindow(0.5, 0.5, 1, 20);
    twintowerwindow(0.5, 0.5, -1.50, 22);
    twintowerwindow(0.5, 0.5, -4, 22);
    twintowerwindow(0.5, 0.5, 1, 22);
    twintowerwindow(0.5, 0.5, -1.50, 24);
    twintowerwindow(0.5, 0.5, -4, 24);
    twintowerwindow(0.5, 0.5, 1, 24);
    twintowerwindow(0.5, 0.5, -1.50, 26);
    twintowerwindow(0.5, 0.5, -4, 26);
    twintowerwindow(0.5, 0.5, 1, 26);
    twintowerwindow(0.5, 0.5, -1.50, 28);
    twintowerwindow(0.5, 0.5, -4, 28);
    twintowerwindow(0.5, 0.5, 1, 28);
    twintowerwindow(0.5, 0.5, -1.50, 30);
    twintowerwindow(0.5, 0.5, -4, 30);
    twintowerwindow(0.5, 0.5, 1, 30);

    glBegin(GL_POLYGON);
    setColor("twintower"); // Yellow
    glVertex2f(-1.50, 16.0f);
    glVertex2f(1.50, 16.0f);
    glVertex2f(1.50f, 23.0f);
    glVertex2f(-1.50f, 23.0f);
    glEnd();
    twintowerwindow(0.5, 0.5, -1.50, 32);
    twintowerwindow(0.5, 0.5, -4, 32);
    twintowerwindow(0.5, 0.5, -1.50, 34);
    twintowerwindow(0.5, 0.5, -4, 34);
    twintowerwindow(0.5, 0.5, -1.50, 36);
    twintowerwindow(0.5, 0.5, -4, 36);
    twintowerwindow(0.5, 0.5, -1.50, 38);
    twintowerwindow(0.5, 0.5, -4, 38);
    twintowerwindow(0.5, 0.5, -1.50, 40);
    twintowerwindow(0.5, 0.5, -4, 40);
    twintowerwindow(0.5, 0.5, -1.50, 42);
    twintowerwindow(0.5, 0.5, -4, 42);
    twintowerwindow(0.5, 0.5, -1.50, 44);
    twintowerwindow(0.5, 0.5, -4, 44);
    glBegin(GL_POLYGON);
    setColor("twintower"); // Yellow
    glVertex2f(-1.00, 23.0f);
    glVertex2f(1.00, 23.0f);
    glVertex2f(1.00f, 26.0f);
    glVertex2f(-1.00f, 26.0f);
    glEnd();
    twintowerwindow(0.5, 0.5, -1.50, 46);
    twintowerwindow(0.5, 0.5, -1.50, 48);
    twintowerwindow(0.5, 0.5, -1.50, 50);
    glBegin(GL_POLYGON);
    setColor("twintower"); // Yellow
    glVertex2f(2.50, 5.0f);
    glVertex2f(12.5f, 5.0f);
    glVertex2f(12.5f, 6.0f);
    glVertex2f(2.50, 6.0f);
    glEnd();
    buildingwindow(0.3, 0.2, 16, 22);
    buildingwindow(0.3, 0.2, 16, 23);
    glBegin(GL_POLYGON);
    setColor("twintower"); // Yellow
    glVertex2f(2.50, 6.0f);
    glVertex2f(12.5f, 6.0f);
    glVertex2f(12.5f, 8.0f);
    glVertex2f(2.50, 8.0f);
    glEnd();
    buildingwindow(0.3, 0.2, 16, 35);
    buildingwindow(0.3, 0.2, 16, 34);
    glPopMatrix();

    int x = 10;
    int y = 20;

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-7, 3, 0);
    glBegin(GL_POLYGON);
    setColor("twintower"); // Yellow
    glVertex2f(-2.50 + x, 0.0f);
    glVertex2f(2.50 + x, 0.0f);
    glVertex2f(2.50f + x, 10.0f);
    glVertex2f(-2.50f + x, 10.0f);
    glEnd();
    twintowerwindow(0.5, 0.5, -1.5 + y, 16);
    twintowerwindow(0.5, 0.5, -5 + y, 16);
    twintowerwindow(0.5, 0.5, 1.3 + y, 16);
    twintowerwindow(0.5, 0.5, -1.5 + y, 14);
    twintowerwindow(0.5, 0.5, -5 + y, 14);
    twintowerwindow(0.5, 0.5, 1.3 + y, 14);
    twintowerwindow(0.5, 0.5, -1.5 + y, 12);
    twintowerwindow(0.5, 0.5, -5 + y, 12);
    twintowerwindow(0.5, 0.5, 1.3 + y, 12);
    twintowerwindow(0.5, 0.5, -1.5 + y, 10);
    twintowerwindow(0.5, 0.5, -5 + y, 10);
    twintowerwindow(0.5, 0.5, 1.3 + y, 10);
    twintowerwindow(0.5, 0.5, 1.3 + y, 8);
    twintowerwindow(0.5, 0.5, -1.5 + y, 8);
    twintowerwindow(0.5, 0.5, -5 + y, 8);
    twintowerwindow(0.5, 0.5, 1.3 + y, 6);
    twintowerwindow(0.5, 0.5, -1.5 + y, 6);
    twintowerwindow(0.5, 0.5, -5 + y, 6);
    twintowerwindow(0.5, 0.5, 1.3 + y, 4);
    twintowerwindow(0.5, 0.5, -1.5 + y, 4);
    twintowerwindow(0.5, 0.5, -5 + y, 4);
    twintowerwindow(0.5, 0.5, 1.3 + y, 2);
    twintowerwindow(0.5, 0.5, -1.5 + y, 2);
    twintowerwindow(0.5, 0.5, -5 + y, 2);
    glBegin(GL_POLYGON);
    setColor("twintower"); // Yellow
    glVertex2f(-2.00 + x, 10.0f);
    glVertex2f(2.00 + x, 10.0f);
    glVertex2f(2.00f + x, 16.0f);
    glVertex2f(-2.00f + x, 16.0f);
    glEnd();
    twintowerwindow(0.5, 0.5, -1.50 + y, 18);
    twintowerwindow(0.5, 0.5, -4 + y, 18);
    twintowerwindow(0.5, 0.5, 1 + y, 18);
    twintowerwindow(0.5, 0.5, -1.50 + y, 20);
    twintowerwindow(0.5, 0.5, -4 + y, 20);
    twintowerwindow(0.5, 0.5, 1 + y, 20);
    twintowerwindow(0.5, 0.5, -1.50 + y, 22);
    twintowerwindow(0.5, 0.5, -4 + y, 22);
    twintowerwindow(0.5, 0.5, 1 + y, 22);
    twintowerwindow(0.5, 0.5, -1.50 + y, 24);
    twintowerwindow(0.5, 0.5, -4 + y, 24);
    twintowerwindow(0.5, 0.5, 1 + y, 24);
    twintowerwindow(0.5, 0.5, -1.50 + y, 26);
    twintowerwindow(0.5, 0.5, -4 + y, 26);
    twintowerwindow(0.5, 0.5, 1 + y, 26);
    twintowerwindow(0.5, 0.5, -1.50 + y, 28);
    twintowerwindow(0.5, 0.5, -4 + y, 28);
    twintowerwindow(0.5, 0.5, 1 + y, 28);
    twintowerwindow(0.5, 0.5, -1.50 + y, 30);
    twintowerwindow(0.5, 0.5, -4 + y, 30);
    twintowerwindow(0.5, 0.5, 1 + y, 30);
    glBegin(GL_POLYGON);
    setColor("twintower"); // Yellow
    glVertex2f(-1.50 + x, 16.0f);
    glVertex2f(1.50 + x, 16.0f);
    glVertex2f(1.50f + x, 23.0f);
    glVertex2f(-1.50f + x, 23.0f);
    glEnd();
    twintowerwindow(0.5, 0.5, -1.50 + y, 32);
    twintowerwindow(0.5, 0.5, -4 + y, 32);
    twintowerwindow(0.5, 0.5, -1.50 + y, 34);
    twintowerwindow(0.5, 0.5, -4 + y, 34);
    twintowerwindow(0.5, 0.5, -1.50 + y, 36);
    twintowerwindow(0.5, 0.5, -4 + y, 36);
    twintowerwindow(0.5, 0.5, -1.50 + y, 38);
    twintowerwindow(0.5, 0.5, -4 + y, 38);
    twintowerwindow(0.5, 0.5, -1.50 + y, 40);
    twintowerwindow(0.5, 0.5, -4 + y, 40);
    twintowerwindow(0.5, 0.5, -1.50 + y, 42);
    twintowerwindow(0.5, 0.5, -4 + y, 42);
    twintowerwindow(0.5, 0.5, -1.50 + y, 44);
    twintowerwindow(0.5, 0.5, -4 + y, 44);
    glBegin(GL_POLYGON);
    setColor("twintower"); // Yellow
    glVertex2f(-1.00 + x, 23.0f);
    glVertex2f(1.00 + x, 23.0f);
    glVertex2f(1.00f + x, 26.0f);
    glVertex2f(-1.00f + x, 26.0f);
    glEnd();
    twintowerwindow(0.5, 0.5, -1.50 + y, 46);
    twintowerwindow(0.5, 0.5, -1.50 + y, 48);
    twintowerwindow(0.5, 0.5, -1.50 + y, 50);
    glPopMatrix();
}
void temp(int x)
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(x, 0, 0);
    BridgeBox();
    glPopMatrix();
}
void bridge()
{
    temp(-40);
    temp(-20);
    temp(0);
    temp(20);
    temp(35);
}
void tempbuild()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(1, 1.5, 0);
    drawBuildingL();
    glPopMatrix();
}
void trainLine()
{
    glBegin(GL_POLYGON);
    glColor3ub(82, 71, 67); // Yellow
    glVertex2f(-41.0f, 0.0f);
    glVertex2f(41.0f, 0.0f);
    glVertex2f(41.0f, -1.00f);
    glVertex2f(-41.0f, -1.0f);
    glEnd();
}
void tempTrainLine()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0, 3, 0);
    trainLine();
    glPopMatrix();
}
void BridgeRaling()
{
    glBegin(GL_POLYGON);
    glColor3ub(2, 42, 50); // Yellow
    glVertex2f(-4.0f, 7.0f);
    glVertex2f(-7.0f, 7.0f);
    glVertex2f(-7.0f, 8.0f);
    glVertex2f(-4.0f, 8.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(2, 42, 50); // Yellow
    glVertex2f(-5.0f, 0.0f);
    glVertex2f(-5.0f, 7.0f);
    glVertex2f(-6.0f, 7.0f);
    glVertex2f(-6.0f, 0.0f);
    glEnd();

    int x = 4;
    glBegin(GL_LINES);
    glLineWidth(20);
    glColor3ub(127, 18, 18);
    glVertex2f(-5.0f, 7.0f);
    glVertex2f(0.0f + x, 0.0f);
    glEnd();
    glBegin(GL_LINES);
    glLineWidth(20);
    glColor3ub(127, 18, 18);
    glVertex2f(-5.0f, 5.0f);
    glVertex2f(-1.0f + x, 0.0f);
    glEnd();
    glBegin(GL_LINES);
    glLineWidth(20);
    glColor3ub(125, 14, 14);
    glVertex2f(-5.0f, 4.0f);
    glVertex2f(-1.50f + x, 0.0f);
    glEnd();
    glBegin(GL_LINES);
    glLineWidth(20);
    glColor3ub(125, 14, 14);
    glVertex2f(-5.0f, 2.0f);
    glVertex2f(-2.0f + x, 0.0f);
    glEnd();
    int y = -4;
    glBegin(GL_LINES);
    glLineWidth(20);
    glColor3ub(125, 14, 14);
    glVertex2f(-6.0f, 7.0f);
    glVertex2f(-10.0f + y, 0.0f);
    glEnd();
    glBegin(GL_LINES);
    glLineWidth(20);
    glColor3ub(125, 14, 14);
    glVertex2f(-6.0f, 5.0f);
    glVertex2f(-9.50f + y, 0.0f);
    glEnd();
    glBegin(GL_LINES);
    glLineWidth(20);
    glColor3ub(125, 14, 14);
    glVertex2f(-6.0f, 4.0f);
    glVertex2f(-9.0f + y, 0.0f);
    glEnd();
    glBegin(GL_LINES);
    glLineWidth(20);
    glColor3ub(125, 14, 14);
    glVertex2f(-6.0f, 2.0f);
    glVertex2f(-8.0f + y, 0.0f);
    glEnd();
}
void tempRail(int x)
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(x, 2, 0);
    BridgeRaling();
    glPopMatrix();
}
void tempRailing()
{
    tempRail(40);
    tempRail(20);
    tempRail(0);
    tempRail(-20);
    tempRail(-40);
}
void drawTrain()
{

    gluOrtho2D(0.0, 1280.0, 0.0, 720.0);
    glPushMatrix();
    glTranslatef(0, 220, 0);
    // start of color and drawing

    // main body
    glColor3ub(102, 121, 134);
    glBegin(GL_QUADS);
    glVertex2i(0, 170);
    glVertex2i(440, 170);
    glVertex2i(440, 210);
    glVertex2i(0, 210);
    glEnd();

    // upperLine main body
    glColor3ub(102, 121, 134);
    glBegin(GL_QUADS);
    glVertex2i(5, 210);
    glVertex2i(435, 210);
    glVertex2i(435, 215);
    glVertex2i(5, 215);
    glEnd();

    glColor3ub(61, 69, 82);
    glBegin(GL_QUADS);
    glVertex2i(5, 210);
    glVertex2i(35, 210);
    glVertex2i(35, 215);
    glVertex2i(5, 215);
    glEnd();

    // face
    glColor3ub(102, 121, 134);
    glBegin(GL_QUADS);
    glVertex2i(0, 170);
    glVertex2i(40, 170);
    glVertex2i(40, 205);
    glVertex2i(0, 205);
    glEnd();

    // face stripe
    glColor3ub(106, 120, 133);
    glBegin(GL_QUADS);
    glVertex2i(0, 175);
    glVertex2i(40, 175);
    glVertex2i(40, 180);
    glVertex2i(0, 180);
    glEnd();

    // lights

    glColor3ub(226, 225, 226);
    glBegin(GL_QUADS);
    glVertex2i(5, 175);
    glVertex2i(10, 175);
    glVertex2i(10, 185);
    glVertex2i(5, 185);
    glEnd();

    glColor3ub(226, 225, 226);
    glBegin(GL_QUADS);
    glVertex2i(30, 175);
    glVertex2i(35, 175);
    glVertex2i(35, 185);
    glVertex2i(30, 185);
    glEnd();

    // frontWindow
    glColor3ub(146, 168, 175);
    setColor("buildingglass");
    glBegin(GL_QUADS);
    glVertex2i(5, 190);
    glVertex2i(35, 190);
    glVertex2i(35, 205);
    glVertex2i(5, 205);
    glEnd();

    // long stripes
    // up
    glColor3ub(148, 167, 176);
    glBegin(GL_QUADS);
    glVertex2i(40, 205);
    glVertex2i(440, 205);
    glVertex2i(440, 210);
    glVertex2i(40, 210);
    glEnd();

    // down
    glColor3ub(148, 167, 176);
    glBegin(GL_QUADS);
    glVertex2i(40, 175);
    glVertex2i(65, 175);
    glVertex2i(65, 180);
    glVertex2i(40, 180);
    glEnd();

    glColor3ub(148, 167, 176);
    glBegin(GL_QUADS);
    glVertex2i(100, 175);
    glVertex2i(200, 175);
    glVertex2i(200, 180);
    glVertex2i(100, 180);
    glEnd();

    glColor3ub(148, 167, 176);
    glBegin(GL_QUADS);
    glVertex2i(235, 175);
    glVertex2i(335, 175);
    glVertex2i(335, 180);
    glVertex2i(235, 180);
    glEnd();

    glColor3ub(148, 167, 176);
    glBegin(GL_QUADS);
    glVertex2i(370, 175);
    glVertex2i(440, 175);
    glVertex2i(440, 180);
    glVertex2i(370, 180);
    glEnd();

    // train windows and door component(1)
    // window
    setColor("buildingglass");
    glBegin(GL_QUADS);
    glVertex2i(55, 185);
    glVertex2i(65, 185);
    glVertex2i(65, 200);
    glVertex2i(55, 200);
    glEnd();

    // doors
    setColor("buildingglass");
    glBegin(GL_QUADS);
    glVertex2i(70, 170);
    glVertex2i(80, 170);
    glVertex2i(80, 200);
    glVertex2i(70, 200);
    glEnd();

    setColor("buildingglass");
    glBegin(GL_QUADS);
    glVertex2i(85, 170);
    glVertex2i(95, 170);
    glVertex2i(95, 200);
    glVertex2i(85, 200);
    glEnd();
    // end doors

    // more windows
    setColor("buildingglass");
    glBegin(GL_QUADS);
    glVertex2i(100, 185);
    glVertex2i(110, 185);
    glVertex2i(110, 200);
    glVertex2i(100, 200);
    glEnd();

    setColor("buildingglass");
    glBegin(GL_QUADS);
    glVertex2i(115, 185);
    glVertex2i(125, 185);
    glVertex2i(125, 200);
    glVertex2i(115, 200);
    glEnd();

    setColor("buildingglass");
    glBegin(GL_QUADS);
    glVertex2i(130, 185);
    glVertex2i(140, 185);
    glVertex2i(140, 200);
    glVertex2i(130, 200);
    glEnd();

    setColor("buildingglass");
    glBegin(GL_QUADS);
    glVertex2i(145, 185);
    glVertex2i(155, 185);
    glVertex2i(155, 200);
    glVertex2i(145, 200);
    glEnd();
    // end of window + doors component(1)

    // train windows and door component(2)
    // window
    setColor("buildingglass");
    glBegin(GL_QUADS);
    glVertex2i(185, 185);
    glVertex2i(195, 185);
    glVertex2i(195, 200);
    glVertex2i(185, 200);
    glEnd();

    // doors
    setColor("buildingglass");
    glBegin(GL_QUADS);
    glVertex2i(200, 170);
    glVertex2i(210, 170);
    glVertex2i(210, 200);
    glVertex2i(200, 200);
    glEnd();

    setColor("buildingglass");
    glBegin(GL_QUADS);
    glVertex2i(215, 170);
    glVertex2i(225, 170);
    glVertex2i(225, 200);
    glVertex2i(215, 200);
    glEnd();
    // end doors

    // more windows
    setColor("buildingglass");
    glBegin(GL_QUADS);
    glVertex2i(230, 185);
    glVertex2i(240, 185);
    glVertex2i(240, 200);
    glVertex2i(230, 200);
    glEnd();

    setColor("buildingglass");
    glBegin(GL_QUADS);
    glVertex2i(245, 185);
    glVertex2i(255, 185);
    glVertex2i(255, 200);
    glVertex2i(245, 200);
    glEnd();

    setColor("buildingglass");
    glBegin(GL_QUADS);
    glVertex2i(260, 185);
    glVertex2i(270, 185);
    glVertex2i(270, 200);
    glVertex2i(260, 200);
    glEnd();

    setColor("buildingglass");
    glBegin(GL_QUADS);
    glVertex2i(275, 185);
    glVertex2i(285, 185);
    glVertex2i(285, 200);
    glVertex2i(275, 200);
    glEnd();
    // end of window + doors component(2)

    // train windows and door component(3)
    // window
    setColor("buildingglass");
    glBegin(GL_QUADS);
    glVertex2i(325, 185);
    glVertex2i(335, 185);
    glVertex2i(335, 200);
    glVertex2i(325, 200);
    glEnd();

    // doors
    setColor("buildingglass");
    glBegin(GL_QUADS);
    glVertex2i(340, 170);
    glVertex2i(350, 170);
    glVertex2i(350, 200);
    glVertex2i(340, 200);
    glEnd();

    setColor("buildingglass");
    glBegin(GL_QUADS);
    glVertex2i(355, 170);
    glVertex2i(365, 170);
    glVertex2i(365, 200);
    glVertex2i(355, 200);
    glEnd();
    // end doors

    // more windows
    setColor("buildingglass");
    glBegin(GL_QUADS);
    glVertex2i(370, 185);
    glVertex2i(380, 185);
    glVertex2i(380, 200);
    glVertex2i(370, 200);
    glEnd();

    setColor("buildingglass");
    glBegin(GL_QUADS);
    glVertex2i(385, 185);
    glVertex2i(395, 185);
    glVertex2i(395, 200);
    glVertex2i(385, 200);
    glEnd();

    setColor("buildingglass");
    glBegin(GL_QUADS);
    glVertex2i(400, 185);
    glVertex2i(410, 185);
    glVertex2i(410, 200);
    glVertex2i(400, 200);
    glEnd();

    setColor("buildingglass");
    glBegin(GL_QUADS);
    glVertex2i(415, 185);
    glVertex2i(425, 185);
    glVertex2i(425, 200);
    glVertex2i(415, 200);
    glEnd();
    // end of window + doors component(3)

    // end of color and drawing
    glPopMatrix();
}

void tempTrain()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(trainpos, 0, 0); // update this to make animation
    glScalef(30, 30, 30);
    drawTrain();
    glPopMatrix();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(trainpos - 20, 0, 0); // update this to make animation
    glScalef(-30, 30, 30);
    drawTrain();
    glPopMatrix();
}
void reflectionTrain()
{
    gluOrtho2D(0.0, 1280.0, 0.0, 720.0);
    glPushMatrix();
    glTranslatef(0, 220, 0);
    // start of color and drawing

    // main body

    // face

    // lights

    glColor3ub(226, 225, 226);
    glBegin(GL_QUADS);
    glVertex2i(5, 175);
    glVertex2i(10, 175);
    glVertex2i(10, 185);
    glVertex2i(5, 185);
    glEnd();

    glColor3ub(226, 225, 226);
    glBegin(GL_QUADS);
    glVertex2i(30, 175);
    glVertex2i(35, 175);
    glVertex2i(35, 185);
    glVertex2i(30, 185);
    glEnd();

    // frontWindow
    glColor3ub(233, 227, 154);
    glBegin(GL_QUADS);
    glVertex2i(5, 190);
    glVertex2i(35, 190);
    glVertex2i(35, 205);
    glVertex2i(5, 205);
    glEnd();

    // train windows and door component(1)
    // window
    glColor3ub(233, 227, 154);
    glBegin(GL_QUADS);
    glVertex2i(55, 185);
    glVertex2i(65, 185);
    glVertex2i(65, 200);
    glVertex2i(55, 200);
    glEnd();

    // doors
    glColor3ub(233, 227, 154);
    glBegin(GL_QUADS);
    glVertex2i(70, 170);
    glVertex2i(80, 170);
    glVertex2i(80, 200);
    glVertex2i(70, 200);
    glEnd();

    glColor3ub(233, 227, 154);
    glBegin(GL_QUADS);
    glVertex2i(85, 170);
    glVertex2i(95, 170);
    glVertex2i(95, 200);
    glVertex2i(85, 200);
    glEnd();
    // end doors

    // more windows
    glColor3ub(233, 227, 154);
    glBegin(GL_QUADS);
    glVertex2i(100, 185);
    glVertex2i(110, 185);
    glVertex2i(110, 200);
    glVertex2i(100, 200);
    glEnd();

    glColor3ub(233, 227, 154);
    glBegin(GL_QUADS);
    glVertex2i(115, 185);
    glVertex2i(125, 185);
    glVertex2i(125, 200);
    glVertex2i(115, 200);
    glEnd();

    glColor3ub(233, 227, 154);
    glBegin(GL_QUADS);
    glVertex2i(130, 185);
    glVertex2i(140, 185);
    glVertex2i(140, 200);
    glVertex2i(130, 200);
    glEnd();

    glColor3ub(233, 227, 154);
    glBegin(GL_QUADS);
    glVertex2i(145, 185);
    glVertex2i(155, 185);
    glVertex2i(155, 200);
    glVertex2i(145, 200);
    glEnd();
    // end of window + doors component(1)

    // train windows and door component(2)
    // window
    glColor3ub(233, 227, 154);
    glBegin(GL_QUADS);
    glVertex2i(185, 185);
    glVertex2i(195, 185);
    glVertex2i(195, 200);
    glVertex2i(185, 200);
    glEnd();

    // doors
    glColor3ub(233, 227, 154);
    glBegin(GL_QUADS);
    glVertex2i(200, 170);
    glVertex2i(210, 170);
    glVertex2i(210, 200);
    glVertex2i(200, 200);
    glEnd();

    glColor3ub(233, 227, 154);
    glBegin(GL_QUADS);
    glVertex2i(215, 170);
    glVertex2i(225, 170);
    glVertex2i(225, 200);
    glVertex2i(215, 200);
    glEnd();
    // end doors

    // more windows
    glColor3ub(233, 227, 154);
    glBegin(GL_QUADS);
    glVertex2i(230, 185);
    glVertex2i(240, 185);
    glVertex2i(240, 200);
    glVertex2i(230, 200);
    glEnd();

    glColor3ub(233, 227, 154);
    glBegin(GL_QUADS);
    glVertex2i(245, 185);
    glVertex2i(255, 185);
    glVertex2i(255, 200);
    glVertex2i(245, 200);
    glEnd();

    glColor3ub(233, 227, 154);
    glBegin(GL_QUADS);
    glVertex2i(260, 185);
    glVertex2i(270, 185);
    glVertex2i(270, 200);
    glVertex2i(260, 200);
    glEnd();

    glColor3ub(233, 227, 154);
    glBegin(GL_QUADS);
    glVertex2i(275, 185);
    glVertex2i(285, 185);
    glVertex2i(285, 200);
    glVertex2i(275, 200);
    glEnd();
    // end of window + doors component(2)

    // train windows and door component(3)
    // window
    glColor3ub(233, 227, 154);
    glBegin(GL_QUADS);
    glVertex2i(325, 185);
    glVertex2i(335, 185);
    glVertex2i(335, 200);
    glVertex2i(325, 200);
    glEnd();

    // doors
    glColor3ub(233, 227, 154);
    glBegin(GL_QUADS);
    glVertex2i(340, 170);
    glVertex2i(350, 170);
    glVertex2i(350, 200);
    glVertex2i(340, 200);
    glEnd();

    glColor3ub(233, 227, 154);
    glBegin(GL_QUADS);
    glVertex2i(355, 170);
    glVertex2i(365, 170);
    glVertex2i(365, 200);
    glVertex2i(355, 200);
    glEnd();
    // end doors

    // more windows
    glColor3ub(233, 227, 154);
    glBegin(GL_QUADS);
    glVertex2i(370, 185);
    glVertex2i(380, 185);
    glVertex2i(380, 200);
    glVertex2i(370, 200);
    glEnd();

    glColor3ub(233, 227, 154);
    glBegin(GL_QUADS);
    glVertex2i(385, 185);
    glVertex2i(395, 185);
    glVertex2i(395, 200);
    glVertex2i(385, 200);
    glEnd();

    glColor3ub(233, 227, 154);
    glBegin(GL_QUADS);
    glVertex2i(400, 185);
    glVertex2i(410, 185);
    glVertex2i(410, 200);
    glVertex2i(400, 200);
    glEnd();

    glColor3ub(233, 227, 154);
    glBegin(GL_QUADS);
    glVertex2i(415, 185);
    glVertex2i(425, 185);
    glVertex2i(425, 200);
    glVertex2i(415, 200);
    glEnd();
    // end of window + doors component(3)

    // end of color and drawing
    glPopMatrix();
}
void tempreflectionTrain()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(trainpos + 10, -3, 0); // update this to make animation
    glScalef(30, -30, 30);
    reflectionTrain();
    glPopMatrix();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(trainpos - 20, -3, 0); // update this to make animation
    glScalef(-30, -30, 30);
    reflectionTrain();
    glPopMatrix();
}



void ship()
{
    gluOrtho2D(-50.0, 50.0, -50.0, 50.0);
    glPushMatrix();
    glTranslatef(Shippos, -30, 0);
    glBegin(GL_POLYGON);
    setColor("ship_side");
    glVertex2f(-12.0, 7.0);
    glVertex2f(-1.0, 7.0);
    glVertex2f(1.50, 3.25);
    glVertex2f(3.00, 3.25);
    glVertex2f(3.0, -1.0);
    glVertex2f(-12.0, -1.0);
    glVertex2f(-12.0, 7.0);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_side");
    glVertex2f(3.0, 3.25);
    glVertex2f(36.75, 3.25);
    glVertex2f(36.75, -1.0);
    glVertex2f(3.0, -1.0);
    glVertex2f(3.0, 3.25);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_side");
    glVertex2f(36.75, 3.25);
    glVertex2f(38.0, 6.0);
    glVertex2f(44.0, 6.0);
    glVertex2f(40.0, -1.00);
    glVertex2f(36.75, -1.00);
    glVertex2f(36.75, 3.25);
    glEnd();

    // bottom border

    glBegin(GL_POLYGON);
    setColor("Ship_Border");
    glVertex2f(-12.0, -1.0);
    glVertex2f(40.0, -1.0);
    glVertex2f(39.0, -2.00);
    glVertex2f(-11.0, -2.0);
    glVertex2f(-12.0, -1.0);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_side1"); // yellow
    glVertex2f(-12.0, 6.0);
    glVertex2f(-2.50, 6.0);
    glVertex2f(-2.50, 5.50);
    glVertex2f(-12.0, 5.50);
    glVertex2f(-12.0, 6.0);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_side1"); // yellow
    glVertex2f(-2.50, 6.0);
    glVertex2f(-2.00, 6.0);
    glVertex2f(0.50, 2.50);
    glVertex2f(0.25, 2.00);
    glVertex2f(-2.25, 5.50);
    glVertex2f(-2.50, 5.50);
    glVertex2f(-2.50, 6.0);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_side1"); // yellow
    glVertex2f(0.50, 2.50);
    glVertex2f(3.00, 2.50);
    glVertex2f(3.0, 2.0);
    glVertex2f(0.25, 2.00);
    glVertex2f(0.5, 2.50);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_side1"); // yellow
    glVertex2f(0.50, 2.50);
    glVertex2f(37.50, 2.50);
    glVertex2f(38.0, 2.0);
    glVertex2f(0.25, 2.00);
    glVertex2f(0.5, 2.50);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_side1"); // yellow
    glVertex2f(37.50, 2.50);
    glVertex2f(38.75, 5.50);
    glVertex2f(39.25, 5.0);
    glVertex2f(38.0, 2.00);
    glVertex2f(37.50, 2.50);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_side1"); // yellow
    glVertex2f(38.75, 5.50);
    glVertex2f(43.75, 5.50);
    glVertex2f(43.45, 4.99);
    glVertex2f(39.25, 5.00);
    glVertex2f(38.75, 5.50);
    glEnd();

    glBegin(GL_POLYGON); // white
    setColor("Firefly");
    glVertex2f(-11.50, 7.00);
    glVertex2f(-11.50, 8.75);
    glVertex2f(-6.75, 8.75);
    glVertex2f(-6.75, 7.00);
    glVertex2f(-11.50, 7.00);
    glEnd();
    glBegin(GL_POLYGON); // white
    setColor("chimney");
    glVertex2f(-11.00, 8.75);
    glVertex2f(-9.25, 16.25);
    glVertex2f(-6.75, 16.25);
    glVertex2f(-6.75, 8.75);
    glVertex2f(-11.00, 8.75);
    glEnd();
    glBegin(GL_POLYGON);
    // glColor3ub(5, 156, 65); //green
    setColor("Firefly");
    glVertex2f(-9.50, 15.25);
    glVertex2f(-6.75, 15.25);
    glVertex2f(-6.75, 15.00);
    glVertex2f(-9.55, 15.00);
    glVertex2f(-9.50, 15.25);
    glEnd();
    glBegin(GL_POLYGON);
    // glColor3ub(5, 156, 65); //green
    setColor("Firefly");
    glVertex2f(-9.96, 13.25);
    glVertex2f(-6.75, 13.25);
    glVertex2f(-6.75, 13.00);
    glVertex2f(-10.00, 13.00);
    glVertex2f(-9.96, 13.25);
    glEnd();
    glBegin(GL_POLYGON);
    // glColor3ub(232, 239, 16); //yellow
    setColor("White");
    glVertex2f(-9.55, 15.00);
    glVertex2f(-6.75, 15.00);
    glVertex2f(-6.75, 13.25);
    glVertex2f(-9.96, 13.25);
    glVertex2f(-9.55, 15.00);
    glEnd();

    glBegin(GL_POLYGON); // ash chimney duck 1
    glColor3ub(97, 106, 107);
    glVertex2f(-8.00, 16.25);
    glVertex2f(-8.00, 17.25);
    glVertex2f(-8.50, 17.75);
    glVertex2f(-8.25, 18.25);
    glVertex2f(-7.50, 17.50);
    glVertex2f(-7.25, 17.00);
    glVertex2f(-7.00, 16.75);
    glVertex2f(-7.00, 16.25);
    glVertex2f(-8.00, 16.25);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_body"); // off-white
    glVertex2f(-6.00, 7.00);
    glVertex2f(-6.00, 13.00);
    glVertex2f(-1.00, 13.00);
    glVertex2f(-1.00, 7.00);
    glVertex2f(-6.00, 7.00);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("Off white"); // off-white
    glVertex2f(-1.00, 11.75);
    glVertex2f(4.00, 11.75);
    glVertex2f(4.00, 3.25);
    glVertex2f(1.50, 3.25);
    glVertex2f(-1.00, 7.00);
    glVertex2f(-1.00, 11.75);
    glEnd();

    // Minor details
    glBegin(GL_POLYGON);
    glColor3ub(229, 232, 232);
    glVertex2f(-1.00, 13.00);
    glVertex2f(3.00, 13.00);
    glVertex2f(3.00, 11.75);
    glVertex2f(-1.00, 11.75);
    glVertex2f(-1.00, 13.00);
    glEnd();

    // T
    glBegin(GL_POLYGON);
    glColor3ub(178, 186, 187);
    glVertex2f(3.00, 11.75);
    glVertex2f(3.00, 13.00);
    glVertex2f(4.00, 13.00);
    glVertex2f(4.00, 11.75);
    glVertex2f(3.00, 11.75);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_body2");
    glVertex2f(4.00, 10.75);
    glVertex2f(4.00, 13.00);
    glVertex2f(9.50, 13.00);
    glVertex2f(9.50, 10.75);
    glVertex2f(4.00, 10.75);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_body2");
    glVertex2f(9.50, 11.50);
    glVertex2f(9.50, 13.00);
    glVertex2f(11.50, 13.00);
    glVertex2f(11.50, 11.50);
    glVertex2f(9.50, 11.50);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_body2");
    glVertex2f(4.00, 9.00);
    glVertex2f(4.00, 10.75);
    glVertex2f(9.50, 10.75);
    glVertex2f(9.50, 9.00);
    glVertex2f(4.00, 9.00);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_body2");
    glVertex2f(4.00, 3.25);
    glVertex2f(4.00, 9.00);
    glVertex2f(9.50, 9.00);
    glVertex2f(9.50, 3.25);
    glVertex2f(4.00, 3.25);
    glEnd();

    // Railing
    glBegin(GL_POLYGON);
    setColor("Railing");
    glVertex2f(-5.75, 13.00);
    glVertex2f(-5.75, 14.50);
    glVertex2f(12.50, 14.50);
    glVertex2f(11.50, 13.00);
    glVertex2f(-5.75, 13.00);
    glEnd();
    ///

    glBegin(GL_POLYGON);
    setColor("chimney"); // chimney 2
    glVertex2f(-5.50, 14.50);
    glVertex2f(-3.50, 14.50);
    glVertex2f(-3.50, 15.25);
    glVertex2f(-5.25, 15.25);
    glVertex2f(-5.50, 14.50);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("chimney"); // chimney 2
    glVertex2f(-5.22, 15.50);
    glVertex2f(-5.00, 16.25);
    glVertex2f(-3.50, 16.25);
    glVertex2f(-3.50, 15.50);
    glVertex2f(-5.22, 15.50);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("Firefly"); // yellow // chimney 2
    glVertex2f(-5.22, 15.50);
    glVertex2f(-3.50, 15.50);
    glVertex2f(-3.50, 15.25);
    glVertex2f(-5.29, 15.25);
    glVertex2f(-5.22, 15.50);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(81, 90, 90); // chimney duck 2
    glVertex2f(-4.50, 16.25);
    glVertex2f(-4.50, 17.00);
    glVertex2f(-5.00, 17.50);
    glVertex2f(-4.75, 18.00);
    glVertex2f(-4.00, 17.25);
    glVertex2f(-3.75, 16.75);
    glVertex2f(-3.75, 16.25);
    glVertex2f(-4.50, 16.25);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("Top_floor"); // building
    glVertex2f(-3.00, 14.50);
    glVertex2f(-3.00, 16.00);
    glVertex2f(10.85, 15.99);
    glVertex2f(10.00, 14.50);
    glVertex2f(-3.00, 14.50);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(93, 64, 55);
    glVertex2f(-3.00, 16.00);
    glVertex2f(-3.00, 16.25);
    glVertex2f(11.00, 16.25);
    glVertex2f(10.85, 15.99);
    glVertex2f(-3.00, 16.00);
    glEnd();

    glBegin(GL_POLYGON);
    // glColor3ub(0, 150, 136 );//green-Cw-1
    setColor("ship_window");
    glVertex2f(-2.50, 15.50);
    glVertex2f(-0.50, 15.50);
    glVertex2f(-0.50, 15.00);
    glVertex2f(-2.50, 15.00);
    glEnd();

    glBegin(GL_POLYGON);
    // glColor3ub(0, 150, 136 );//green-CW-2
    setColor("ship_window");
    glVertex2f(0.50, 15.00);
    glVertex2f(0.50, 15.50);
    glVertex2f(2.00, 15.50);
    glVertex2f(2.00, 15.00);
    glVertex2f(0.50, 15.00);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_window"); // green-CW-3
    glVertex2f(4.00, 15.25);
    glVertex2f(3.75, 15.75);
    glVertex2f(4.75, 15.75);
    glVertex2f(4.75, 15.25);
    glVertex2f(4.00, 15.25);
    glEnd();

    glBegin(GL_POLYGON); // green-CW-4
    setColor("ship_window");
    glVertex2f(5.50, 15.25);
    glVertex2f(5.50, 15.75);
    glVertex2f(6.75, 15.75);
    glVertex2f(6.75, 15.25);
    glVertex2f(5.50, 15.25);
    glEnd();
    glBegin(GL_POLYGON);

    setColor("ship_window"); // green-CW-5
    glVertex2f(7.50, 15.25);
    glVertex2f(7.50, 15.75);
    glVertex2f(9.00, 15.75);
    glVertex2f(9.00, 15.25);
    glVertex2f(7.50, 15.25);
    glEnd();
    glBegin(GL_POLYGON);

    // green-CW-6'
    setColor("ship_window");
    glVertex2f(9.50, 15.25);
    glVertex2f(9.50, 15.75);
    glVertex2f(10.50, 15.75);
    glVertex2f(10.00, 15.25);
    glVertex2f(9.50, 15.25);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(189, 189, 189); // stand-W
    glVertex2f(3.50, 16.25);
    glVertex2f(3.50, 18.50);
    glVertex2f(4.50, 18.50);
    glVertex2f(4.50, 16.25);
    glVertex2f(3.50, 16.25);
    glEnd();
    glBegin(GL_POLYGON); // Gray
    glColor3ub(158, 158, 158);
    glVertex2f(3.50, 18.50);
    glVertex2f(3.50, 18.75);
    glVertex2f(5.50, 18.75);
    glVertex2f(5.50, 18.50);
    glVertex2f(3.50, 18.50);
    glEnd();

    glBegin(GL_POLYGON); // W
    glColor3ub(189, 189, 189);
    glVertex2f(3.75, 18.75);
    glVertex2f(3.75, 21.25);
    glVertex2f(4.50, 21.25);
    glVertex2f(4.50, 18.75);
    glVertex2f(3.75, 18.75);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(158, 158, 158); // Gray
    glVertex2f(3.25, 21.25);
    glVertex2f(3.25, 21.75);
    glVertex2f(6.25, 21.75);
    glVertex2f(6.25, 21.25);
    glVertex2f(3.25, 21.25);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(189, 189, 189); // W
    glVertex2f(3.75, 21.75);
    glVertex2f(3.75, 26.00);
    glVertex2f(4.50, 26.00);
    glVertex2f(4.50, 21.75);
    glVertex2f(3.75, 21.75);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(158, 158, 158); // Gray-CM TOP

    glVertex2f(3.75, 26.00);
    glVertex2f(3.25, 26.50);
    glVertex2f(5.00, 26.50);
    glVertex2f(4.50, 26.00);
    glVertex2f(3.75, 26.00);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(158, 158, 158); // Gray-CM
    glVertex2f(3.75, 26.50);
    glVertex2f(3.25, 27.00);
    glVertex2f(5.00, 27.00);
    glVertex2f(4.50, 26.50);
    glVertex2f(3.75, 26.50);
    glEnd();

    glBegin(GL_POLYGON);
    // glColor3ub(247, 8, 8 );//Flag-Red
    setColor("Maroon");
    glVertex2f(3.75, 24.50);
    glVertex2f(1.75, 24.50);
    glVertex2f(1.75, 25.50);
    glVertex2f(3.75, 25.50);
    glVertex2f(3.75, 24.50);
    glEnd();

    glBegin(GL_POLYGON);
    // glColor3ub(0, 150, 136 );//green-W-1
    setColor("ship_window");
    glVertex2f(-5.50, 11.75);
    glVertex2f(-5.00, 11.75);
    glVertex2f(-5.00, 12.25);
    glVertex2f(-5.50, 12.25);
    glVertex2f(-5.50, 11.75);
    glEnd();

    glBegin(GL_POLYGON);
    // glColor3ub(0, 150, 136 );//green-W-2
    setColor("ship_window");
    glVertex2f(-2.75, 11.75);
    glVertex2f(-2.25, 11.75);
    glVertex2f(-2.25, 12.25);
    glVertex2f(-2.75, 12.25);
    glVertex2f(-2.75, 11.75);
    glEnd();

    glBegin(GL_POLYGON);
    // glColor3ub(0, 150, 136 );//green-W-3
    setColor("ship_window");
    glVertex2f(-4.75, 9.50);
    glVertex2f(-4.25, 9.50);
    glVertex2f(-4.25, 10.00);
    glVertex2f(-4.75, 10.00);
    glVertex2f(-4.75, 9.50);
    glEnd();

    glBegin(GL_POLYGON);
    // glColor3ub(0, 150, 136 );//green-W-4
    setColor("ship_window");
    glVertex2f(-1.75, 9.50);
    glVertex2f(-1.25, 9.50);
    glVertex2f(-1.25, 10.00);
    glVertex2f(-1.75, 10.00);
    glVertex2f(-1.75, 9.50);
    glEnd();

    glBegin(GL_POLYGON);
    //  glColor3ub(0, 150, 136 );//green-W-5
    setColor("ship_window");
    glVertex2f(-5.50, 7.25);
    glVertex2f(-5.00, 7.25);
    glVertex2f(-5.00, 7.75);
    glVertex2f(-5.50, 7.75);
    glVertex2f(-5.50, 7.25);
    glEnd();

    glBegin(GL_POLYGON);
    //  glColor3ub(0, 150, 136 );//green-W-6
    setColor("ship_window");
    glVertex2f(-3.50, 7.25);
    glVertex2f(-3.00, 7.25);
    glVertex2f(-3.00, 7.75);
    glVertex2f(-3.50, 7.75);
    glVertex2f(-3.50, 7.25);
    glEnd();

    glBegin(GL_POLYGON);
    // glColor3ub(0, 150, 136 );//green-W-7
    setColor("ship_window");
    glVertex2f(-1.75, 7.25);
    glVertex2f(-1.25, 7.25);
    glVertex2f(-1.25, 7.75);
    glVertex2f(-1.75, 7.75);
    glVertex2f(-1.75, 7.25);
    glEnd();

    glBegin(GL_POLYGON);
    // glColor3ub(0, 150, 136 );//green-W-8
    setColor("ship_window");
    glVertex2f(0.50, 9.50);
    glVertex2f(1.25, 9.50);
    glVertex2f(1.25, 10.00);
    glVertex2f(0.50, 10.00);
    glVertex2f(0.50, 9.50);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_window");
    glVertex2f(2.75, 9.50);
    glVertex2f(3.25, 9.50);
    glVertex2f(3.25, 10.00);
    glVertex2f(2.75, 10.00);
    glVertex2f(2.75, 9.50);
    glEnd();
    glBegin(GL_POLYGON);
    setColor("ship_window"); // green-W-10
    glVertex2f(0.75, 7.25);
    glVertex2f(1.25, 7.25);
    glVertex2f(1.25, 7.75);
    glVertex2f(0.75, 7.75);
    glVertex2f(0.75, 7.25);
    glEnd();
    glBegin(GL_POLYGON);
    setColor("ship_window"); // green-W-11
    glVertex2f(2.75, 7.25);
    glVertex2f(3.25, 7.25);
    glVertex2f(3.25, 7.75);
    glVertex2f(2.75, 7.75);
    glVertex2f(2.75, 7.25);
    glEnd();
    glBegin(GL_POLYGON);
    setColor("ship_window"); // green-W-12
    glVertex2f(4.25, 12.00);
    glVertex2f(4.75, 12.00);
    glVertex2f(4.75, 12.50);
    glVertex2f(4.25, 12.50);
    glVertex2f(4.25, 12.00);
    glEnd();
    glBegin(GL_POLYGON);
    setColor("ship_window"); // green-W-13
    glVertex2f(5.75, 12.00);
    glVertex2f(7.25, 12.00);
    glVertex2f(7.25, 12.50);
    glVertex2f(5.75, 12.50);
    glVertex2f(7.75, 12.00);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_window"); // green-W-14
    glVertex2f(8.25, 12.00);
    glVertex2f(8.75, 12.00);
    glVertex2f(8.75, 12.50);
    glVertex2f(8.25, 12.50);
    glVertex2f(8.25, 12.00);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_window"); // green-W-15
    glVertex2f(4.50, 9.50);
    glVertex2f(5.50, 9.50);
    glVertex2f(5.50, 10.00);
    glVertex2f(4.50, 10.00);
    glVertex2f(4.50, 9.50);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_window"); // green-W-16
    glVertex2f(6.75, 9.50);
    glVertex2f(8.00, 9.50);
    glVertex2f(8.00, 10.00);
    glVertex2f(6.75, 10.00);
    glVertex2f(6.75, 9.50);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_window"); // green-W-17
    glVertex2f(8.50, 9.50);
    glVertex2f(9.25, 9.50);
    glVertex2f(9.25, 10.00);
    glVertex2f(8.50, 10.00);
    glVertex2f(8.50, 9.50);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_window"); // green-W-18
    glVertex2f(5.25, 7.25);
    glVertex2f(5.75, 7.25);
    glVertex2f(5.75, 7.75);
    glVertex2f(5.25, 7.75);
    glVertex2f(5.25, 7.25);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_window"); // green-W-19
    glVertex2f(6.50, 7.25);
    glVertex2f(7.00, 7.25);
    glVertex2f(7.00, 7.75);
    glVertex2f(6.50, 7.75);
    glVertex2f(6.50, 7.25);
    glEnd();

    glBegin(GL_POLYGON);
    setColor("ship_window"); // green-W-20
    glVertex2f(7.75, 7.25);
    glVertex2f(8.25, 7.25);
    glVertex2f(8.25, 7.75);
    glVertex2f(7.75, 7.75);
    glVertex2f(7.75, 7.25);
    glEnd();

    // floor lines
    glBegin(GL_POLYGON);
    glColor3ub(208, 211, 212);
    glVertex2f(-6.00, 10.75);
    glVertex2f(-6.00, 11.00);
    glVertex2f(9.50, 11.00);
    glVertex2f(9.50, 10.75);
    glVertex2f(-6.00, 10.75);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(208, 211, 212);
    glVertex2f(-6.00, 8.75);
    glVertex2f(-6.00, 9.00);
    glVertex2f(9.50, 9.00);
    glVertex2f(9.50, 8.75);
    glVertex2f(-6.00, 8.75);
    glEnd();

    glBegin(GL_POLYGON); // Container-1
    glColor3ub(213, 39, 39);
    glVertex2f(13.00, 3.25);
    glVertex2f(13.00, 7.75);
    glVertex2f(21.25, 7.75);
    glVertex2f(21.25, 3.25);
    glVertex2f(13.00, 3.25);
    glEnd();
    glBegin(GL_POLYGON); // Container-2
    glColor3ub(18, 101, 238);
    glVertex2f(21.25, 3.25);
    glVertex2f(21.25, 7.75);
    glVertex2f(25.00, 7.75);
    glVertex2f(25.00, 3.25);
    glVertex2f(21.25, 3.25);
    glEnd();
    glBegin(GL_POLYGON); // Container-3
    glColor3ub(252, 109, 3);
    glVertex2f(25.00, 3.25);
    glVertex2f(25.00, 7.75);
    glVertex2f(30.00, 7.75);
    glVertex2f(30.00, 3.25);
    glVertex2f(25.00, 3.25);
    glEnd();
    glBegin(GL_POLYGON); // Container-4
    glColor3ub(59, 154, 23);
    glVertex2f(30.00, 3.25);
    glVertex2f(30.00, 7.75);
    glVertex2f(33.25, 7.75);
    glVertex2f(33.25, 3.25);
    glVertex2f(30.00, 3.25);
    glEnd();
    glBegin(GL_POLYGON); // Container-5
    glColor3ub(238, 241, 14);
    glVertex2f(14.00, 7.75);
    glVertex2f(14.00, 11.50);
    glVertex2f(18.00, 11.50);
    glVertex2f(18.00, 7.75);
    glVertex2f(14.00, 7.75);
    glEnd();
    glBegin(GL_POLYGON); // Container-6
    glColor3ub(251, 13, 6);
    glVertex2f(18.00, 7.75);
    glVertex2f(18.00, 11.50);
    glVertex2f(25.50, 11.50);
    glVertex2f(25.50, 7.75);
    glVertex2f(18.00, 7.75);
    glEnd();
    glBegin(GL_POLYGON); // Container-7
    glColor3ub(40, 35, 185);
    glVertex2f(25.50, 7.75);
    glVertex2f(25.50, 11.50);
    glVertex2f(29.75, 11.50);
    glVertex2f(29.75, 7.75);
    glVertex2f(25.50, 7.75);
    glEnd();

    glPopMatrix();
}
void tempShip()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(40, 35, 0);
    ship();
    glPopMatrix();
}
void drawCircle(float radius, float cX, float cY, float cd)
{

    glBegin(GL_POLYGON);
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(194, 214, 246);
        float pi = 3.1416;
        float A = (i * 2 * pi) / cd;
        float r = radius;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + cX, y + cY);
    }
    glEnd();
}
void drawCircle2(float radius, float cX, float cY, float cd)
{

    glBegin(GL_POLYGON);
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(233, 209, 102);
        float pi = 3.1416;
        float A = (i * 2 * pi) / cd;
        float r = radius;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + cX, y + cY);
    }
    glEnd();
}
void drawCircle3(float radius, float cX, float cY, float cd)
{

    glBegin(GL_POLYGON);
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(233, 227, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / cd;
        float r = radius;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + cX, y + cY);
    }
    glEnd();
}
void cloud()
{
    drawCircle(1, 20, 25, 400);
    drawCircle(1, 19, 25, 400);
    drawCircle(1, 18, 25, 400);
    drawCircle(1, -20, 28, 400);
    drawCircle(1, -19, 28, 400);
    drawCircle(1, -18, 28, 400);
    drawCircle(1, 11, 20, 400);
    drawCircle(1, 12, 20, 400);
    drawCircle(1, 10, 20, 400);
    drawCircle(1, -10, 25, 400);
    drawCircle(1, -11, 25, 400);
    drawCircle(1, -12, 25, 400);
}

void animationCloud()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(cloudpos, 0, 0); // update this to make animation
    cloud();
    glPopMatrix();
}
void drawMoon()
{
    drawCircle2(4, -20, 20, 200);
}

void displayUrban()
{
    glClear(GL_COLOR_BUFFER_BIT);
    skybackground();
    star();
    drawMoon();
    tempairPlan();
    drawWater();
    twintowerl();
    tempbuild();
    drawBuilding();
    bridge();
    BridgeBox();
    tempRailing();
    tempTrainLine();
    tempTrain();
    tempreflectionTrain();
    tempRailing();
    tempShip();
    animationCloud();
    glFlush();
    glutSwapBuffers();
}
// void timerCallback(int value) {
//     currentDisplay= currentDisplay+1;  // Switch to display 2 after the delay
//     glutPostRedisplay(); // Request a redraw to update the display
// }
