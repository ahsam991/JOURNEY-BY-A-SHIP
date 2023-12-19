#include <bits/stdc++.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include <cstdio>


using namespace std;

// variables
float ship_pos = -41.0;

// functions

void setColor(string col)
{

    if (col == "sky")
        glColor3ub(4, 135, 226);
    else if (col == "buildingglass")
        glColor3ub(233, 209, 102);
    else if (col == "bulidingcolor")
        glColor3ub(3, 21, 28);
    else if (col == "buildingShadow")
        glColor3ub(4, 62, 90);
    else if (col == "cloud")
        glColor3ub(243, 251, 254);
    else if (col == "twintower")
        glColor3ub(100, 136, 160);
    else if (col == "brick")
        glColor3ub(175, 44, 35);
    else if (col == "midBuilding")
        glColor3ub(180, 188, 193);
    else if (col == "frontBuilding")
        glColor3ub(100, 116, 127);
    else if (col == "iceBlue")
        glColor3ub(149, 168, 172);
    else if (col == "pink")
        glColor3ub(211, 163, 181);
    else if (col == "reflectionDark")
        glColor3ub(103, 121, 134);
    else if (col == "reflectionLight")
        glColor3ub(151, 168, 175);
    else if (col == "trainBody")
        glColor3ub(102, 121, 134);
    else if (col == "trainGlass")
        glColor3ub(146, 168, 175);
    else if (col == "trainStripeLight")
        glColor3ub(148, 167, 176);
    else if (col == "trainStripeDark")
        glColor3ub(106, 120, 133);
    else if (col == "background")
        glColor3ub(215, 216, 215);
    else if (col == "birdFace")
        glColor3ub(178, 199, 212);
    else if (col == "light")
        glColor3ub(255, 254, 211);
    else if (col == "sun")
        glColor3ub(215, 146, 145);

    // ship
    else if (col == "window")
        glColor3ub(255, 194, 113);
    else if (col == "ship_side")
        glColor3ub(0, 38, 84);
    else if (col == "ship_side1")
        glColor3ub(243, 156, 18);
    else if (col == "chimney")
        glColor3ub(125, 2, 30);
    else if (col == "ship_window")
        glColor3ub(0, 150, 136);
    else if (col == "Ship_Border")
        glColor3ub(169, 50, 38);
    else if (col == "Off white")
        glColor3ub(153, 163, 164);
    else if (col == "ship_body")
        glColor3ub(97, 106, 107);
    else if (col == "ship_body2")
        glColor3ub(178, 186, 187);
    else if (col == "Top_floor")
        glColor3ub(224, 224, 224);
    else if (col == "Railing")
        glColor3ub(214, 219, 223);
    else if (col == "Firefly")
        glColor3ub(9, 22, 28);

    else if (col == "Cship_floor")
        glColor3ub(219, 99, 75);
    else if (col == "Cship_shadow")
        glColor3ub(201, 86, 66);
    else if (col == "Crail")
        glColor3ub(180, 71, 61);
    else if (col == "Japonica")
        glColor3ub(215, 116, 89); // stairs
}

void circle(float radius, float cX, float cY)
{
    glBegin(GL_POLYGON);
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(151, 149, 128);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = radius;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + cX, y + cY);
    }
    glEnd();
}

void circle1(float radius, float cX, float cY)
{
    glBegin(GL_POLYGON);
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(151, 149, 128);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = radius;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + cX, y + cY);
    }
    glEnd();
}

void Crane()
{
    glPushMatrix();
	glTranslatef(-20,0,0);
    glScalef(3,3,1);
	glBegin(GL_POLYGON);
    glColor3ub(81, 90, 90 );
    glVertex2f(-2.00,-2.25);
    glVertex2f(-2.00,-2.00);
    glVertex2f(-1.00,-2.00);
    glVertex2f(-1.00,-2.25);
    glVertex2f(-2.00,-2.25);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(43, 111, 194);//blue
    glVertex2f(-1.50,-2.00);
    glVertex2f(-1.50,-1.50);
    glVertex2f(-0.25,0.50);
    glVertex2f(-0.25,-0.50);
    glVertex2f(-1.00,-1.50);
    glVertex2f(-1.00,-2.00);
    glVertex2f(-1.50,-2.00);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(81, 90, 90 );
    glVertex2f(1.50,-2.00);
    glVertex2f(2.50,-2.00);
    glVertex2f(2.50,-2.25);
    glVertex2f(1.50,-2.25);
    glVertex2f(1.50,-2.00);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(43, 111, 194);//blue
    glVertex2f(2.00,-2.00);
    glVertex2f(2.00,-1.50);
    glVertex2f(0.75,0.50);
    glVertex2f(0.75,-0.50);
    glVertex2f(1.50,-1.50);
    glVertex2f(1.50,-2.00);
    glVertex2f(2.00,-2.00);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(43, 111, 194);
    glVertex2f(-0.25,-0.50);
    glVertex2f(0.75,-0.50);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(43, 111, 194);
    glVertex2f(-0.25,0.39);
    glVertex2f(-0.25,0.50);
    glVertex2f(0.75,0.50);
    glVertex2f(0.75,0.39);
    glVertex2f(-0.25,0.39);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(64, 127, 203 );
    glVertex2f(-0.82,-1.25);
    glVertex2f(1.32,-1.25);
    glVertex2f(1.50,-1.50);
    glVertex2f(-1.00,-1.50);
    glVertex2f(-0.82,-1.25);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(233, 222, 49 ); //yellow-1
    glVertex2f(-1.75,0.50);
    glVertex2f(-1.75,0.75);
    glVertex2f(-0.75,0.75);
    glVertex2f(0.75,0.50);
    glVertex2f(-1.75,0.50);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(247, 233, 14 ); //yellow-2
    glVertex2f(-0.75,0.50);
    glVertex2f(-0.75,0.75);
    glVertex2f(1.25,0.75);
    glVertex2f(1.25,0.50);
    glVertex2f(-0.75,0.50);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(238, 226, 34  );//Y
    glVertex2f(0.0,0.75);
    glVertex2f(0.25,0.75);
    glVertex2f(0.25,1.50);
    glVertex2f(0.0,1.66);
    glVertex2f(0.0,0.75);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(227, 66, 53 );// Room
    glVertex2f(-1.75,0.75);
    glVertex2f(-1.75,1.75);
    glVertex2f(0.0,1.75);
    glVertex2f(0.0,0.75);
    glVertex2f(-1.75,0.75);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(86, 101, 115 );// window
    glVertex2f(-1.50,1.00);
    glVertex2f(-1.50,1.50);
    glVertex2f(-1.00,1.50);
    glVertex2f(-1.00,1.00);
    glVertex2f(-1.50,1.00);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(238, 226, 34);//Y-1
    glVertex2f(-1.00,1.75);
    glVertex2f(-1.25,2.00);
    glVertex2f(-1.25,2.50);
    glVertex2f(-0.16,1.75);
    glVertex2f(1.00,1.75);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(97, 106, 107 );//J-1
    glVertex2f(-1.75,2.00);
    glVertex2f(-1.75,2.50);
    glVertex2f(-1.25,2.50);
    glVertex2f(-1.25,2.00);
    glVertex2f(-1.75,2.00);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(97, 106, 107 );//J-2
    glVertex2f(-1.75,2.50);
    glVertex2f(-1.75,3.00);
    glVertex2f(-1.25,3.00);
    glVertex2f(-1.25,2.50);
    glVertex2f(-1.75,2.50);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(44, 62, 80 );
    glVertex2f(-1.75,2.50);
    glVertex2f(-1.25,2.50);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(251, 236, 1 );//Pull-1 //236, 223, 27
    glVertex2f(-1.25,2.25);
    glVertex2f(-1.25,2.50);
    glVertex2f(1.25,4.00);
    glVertex2f(1.25,3.75);
    glVertex2f(-1.25,2.25);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(251, 236, 1 );//Pull-2-Y
    glVertex2f(1.25,4.00);
    glVertex2f(3.25,2.00);
    glVertex2f(3.25,1.75);
    glVertex2f(1.25,3.75);
    glVertex2f(1.25,4.00);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(251, 236, 1 );//Pull-3-Y
    glVertex2f(0.00,3.25);
    glVertex2f(3.25,2.00);
    glVertex2f(3.25,1.75);
    glVertex2f(0.00,3.00);
    glVertex2f(0.00,3.25);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(251, 236, 1 );//Pull-4-Y
    glVertex2f(0.25,0.75);
    glVertex2f(1.75,2.50);
    glVertex2f(1.75,2.25);
    glVertex2f(0.50,0.75);
    glVertex2f(0.25,0.75);
    glEnd();

    // Rope
    glBegin(GL_LINES);
    glColor3ub(27, 38, 49);
    glVertex2f(3.02,1.75);
    glVertex2f(3.02,0.50);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(27, 38, 49);
    glVertex2f(3.49,1.75);
    glVertex2f(3.49,0.50);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(27, 38, 49);
    glVertex2f(3.00,0.50);
    glVertex2f(3.25,-0.25);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(27, 38, 49);
    glVertex2f(3.50,0.50);
    glVertex2f(3.25,-0.25);
    glEnd();

    //
    glBegin(GL_LINES);
    glColor3ub(27, 38, 49);
    glVertex2f(3.25,-0.25);
    glVertex2f(2.25,-0.75);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(27, 38, 49);
    glVertex2f(3.25,-0.25);
    glVertex2f(2.75,-0.75);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(27, 38, 49);
    glVertex2f(3.25,-0.25);
    glVertex2f(4.00,-0.75);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(27, 38, 49);
    glVertex2f(3.25,-0.25);
    glVertex2f(4.50,-0.75);
    glEnd();

    //Container
    glBegin(GL_POLYGON);
    glColor3ub(249, 183, 7 );
    glVertex2f(2.25,-0.75);
    glVertex2f(4.50,-0.75);
    glVertex2f(4.50,-1.50);
    glVertex2f(2.25,-1.50);
    glVertex2f(2.25,-0.75);
    glEnd();



    circle(0.232,3.25,1.75);
    circle1(0.232,3.25,0.50);
	glPopMatrix();
}


void house()
{
    // front part
    glColor3ub(119, 63, 50);
    glBegin(GL_POLYGON);
    glVertex2f(13.9088, -4.92522);
    glVertex2f(13.9088, 1.49739);
    glVertex2f(21.9849, 1.49237);
    glVertex2f(21.9849, -4.93024);
    glEnd();

    // shadow part
    glColor3ub(9, 22, 28);
    // Draw the polygon with specified vertices
    glBegin(GL_POLYGON);
    glVertex2f(21.9849, -4.93024);
    glVertex2f(21.9849, 1.49237);
    glVertex2f(29.2491, 1.48786);
    glVertex2f(29.2491, -4.93476);
    glEnd();

    //first window
    glColor3ub(255, 194, 113);
    glBegin(GL_POLYGON);
    glVertex2f(14.9771, -1.40874);
    glVertex2f(14.9771, -0.389278);
    glVertex2f(15.8317, -0.38981);
    glVertex2f(15.8317, -1.40927);
    glEnd();

    //second window
    glPushMatrix();
    glTranslatef(2.43499, 0, 0);
    glColor3ub(255, 194, 113);
    glBegin(GL_POLYGON);
    glVertex2f(14.9771, -1.40874);
    glVertex2f(14.9771, -0.389278);
    glVertex2f(15.8317, -0.38981);
    glVertex2f(15.8317, -1.40927);
    glEnd();
    glPopMatrix();

    //third window
    glPushMatrix();
    glTranslatef(4.86998, 0, 0);
    glColor3ub(255, 194, 113);
    glBegin(GL_POLYGON);
    glVertex2f(14.9771, -1.40874);
    glVertex2f(14.9771, -0.389278);
    glVertex2f(15.8317, -0.38981);
    glVertex2f(15.8317, -1.40927);
    glEnd();
    glPopMatrix();

    // fourth window
    glPushMatrix();
    glTranslatef(0, -2.14087, 0);
    glColor3ub(255, 194, 113);
    glBegin(GL_POLYGON);
    glVertex2f(14.9771, -1.40874);
    glVertex2f(14.9771, -0.389278);
    glVertex2f(15.8317, -0.38981);
    glVertex2f(15.8317, -1.40927);
    glEnd();
    glPopMatrix();

    // fifth window
    glPushMatrix();
    glTranslatef(2.4356, -2.14239, 0);
    glColor3ub(255, 194, 113);
    glBegin(GL_POLYGON);
    glVertex2f(14.9771, -1.40874);
    glVertex2f(14.9771, -0.389278);
    glVertex2f(15.8317, -0.38981);
    glVertex2f(15.8317, -1.40927);
    glEnd();
    glPopMatrix();

    // sixth window
    glColor3ub(255, 194, 113);
    glBegin(GL_POLYGON);
    glVertex2f(20.1047, -3.5528);
    glVertex2f(20.1047, -2.53334);
    glVertex2f(20.9594, -2.53387);
    glVertex2f(20.9594, -3.55333);
    glEnd();



}


void water()
{
    glColor3ub(104, 138, 137);  // RGB color
    glBegin(GL_POLYGON);
    glVertex2d(-41, -7.49072);
    glVertex2d(-41, -24.9745);
    glVertex2d(41, -25.0255);
    glVertex2d(41, -7.54169);
    glEnd();
}


void shadowBuildings()
{
    // rightmost back shadow building
    glColor3ub(191, 180, 160);
    glBegin(GL_POLYGON);
    glVertex2f(36.6415, -4.93935);
    glVertex2f(36.6415, 2.50272);
    glVertex2f(23.4377, 2.51093);
    glVertex2f(23.4377, -4.93115);
    glEnd();

    // shadow tower
    glColor3ub(191, 180, 160);
    glBegin(GL_POLYGON);
    glVertex2f(28.8645, 12.1415);
    glVertex2f(28.8645, 2.55853);
    glVertex2f(31.172, 2.5571);
    glVertex2f(31.172, 12.14);
    glEnd();

    // middle shadow
    glColor3ub(191, 180, 160);
    glBegin(GL_POLYGON);
    glVertex2f(-4.80719, -4.91359);
    glVertex2f(-4.80719, 6.24953);
    glVertex2f(3.48254, 6.24437);
    glVertex2f(3.48254, -4.96971);
    glEnd();
}


void shipofdock()
{
    glPushMatrix();
    glTranslatef(ship_pos, -10, 0);
    glScalef(0.8, 0.8, 0);

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
}

void ground1()
{
    // Set the drawing color to the specified RGB color
    glColor3ub(0xE9, 0x91, 0x5B); // RGB for e9915b
    glBegin(GL_POLYGON);

    // Specify the vertices of the polygon
    glVertex2f(-41.0, -6.31834);
    glVertex2f(41.0, -6.31834);
    glVertex2f(41.0, -4.99304);
    glVertex2f(-41.0, -4.99304);
    glEnd();

    // second layer
    // Set the drawing color to the specified RGB color for the second polygon
    glColor3ub(182, 101, 72); // RGB for B66548

    // Begin drawing the second polygon
    glBegin(GL_POLYGON);
    glVertex2f(41.0, -6.36931);
    glVertex2f(41.0, -7.54169);
    glVertex2f(-41.0, -7.54169);
    glVertex2f(-41.0, -6.36931);
    glEnd();
}

void skyofdock()
{
    glColor3ub(244, 221, 187);
    glBegin(GL_POLYGON); // Begin drawing rectangle
    glVertex2f(-41, -4.89109);
    glVertex2f(-41, 30.0255);
    glVertex2f(41, 29.9745);
    glVertex2f(41, -4.94206);
    glEnd();
}

void tower()
{
    // upper triangle
    glColor3ub(119, 63, 50); // RGB for 773F32

    // Begin drawing the polygon
    glBegin(GL_POLYGON);
    glVertex2f(-29.2064, 13.7068);
    glVertex2f(-34.0349, 17.4818);
    glVertex2f(-38.8635, 13.7128);
    glEnd();

    // left rectangle
    glColor3ub(229, 139, 79); // RGB for E58B4F
    glBegin(GL_POLYGON);
    glVertex2f(-35.6587, -4.89441);
    glVertex2f(-35.6587, 13.6598);
    glVertex2f(-38.8635, 13.6618);
    glVertex2f(-38.8635, -4.89242);
    glEnd();

    // middle rectangle
    glColor3ub(217, 130, 78); // RGB for D9824E
    // Begin drawing the polygon
    glBegin(GL_POLYGON);
    glVertex2f(-32.4112, -4.89643);
    glVertex2f(-32.4112, 13.6578);
    glVertex2f(-35.6587, 13.6598);
    glVertex2f(-35.6587, -4.89441);
    glEnd();

    // right rectangle
    glColor3ub(161, 89, 65); // RGB for A15941

    // Begin drawing the polygon
    glBegin(GL_POLYGON);
    glVertex2f(-29.2064, -4.89842);
    glVertex2f(-29.2064, 13.6558);
    glVertex2f(-32.4112, 13.6578);
    glVertex2f(-32.4112, -4.89643);
    glEnd();
}

void firstCarrier()
{
    // left part
    glColor3ub(119, 63, 50); // RGB for 773F32
    // Begin drawing the polygon
    glBegin(GL_POLYGON);
    glVertex2f(-23.9932, 18.495);
    glVertex2f(-23.9932, -4.90166);
    glVertex2f(-25.7452, -4.90057);
    glVertex2f(-25.7452, 18.4961);
    glEnd();

    // left part shadow
    glColor3ub(9, 22, 28); // RGB for 09161C

    // Begin drawing the polygon
    glBegin(GL_POLYGON);
    glVertex2f(-22.7968, 18.4943);
    glVertex2f(-22.7968, -4.95338);
    glVertex2f(-23.9505, -4.90169);
    glVertex2f(-23.9505, 18.495);
    glEnd();

    // middle part
    glColor3ub(119, 63, 50); // Set color to RGB(119, 63, 50)
    glBegin(GL_POLYGON);     // Begin drawing points
    glVertex2f(-16.9427, 18.5416);
    glVertex2f(-16.9427, -4.95702);
    glVertex2f(-18.6946, -4.95593);
    glVertex2f(-18.6946, 18.5427);
    glEnd(); // End drawing points

    // middle part shadow
    glColor3ub(9, 22, 28);
    glBegin(GL_POLYGON); // Begin drawing points
    glVertex2f(-15.7462, 18.5408);
    glVertex2f(-15.7462, -4.95776);
    glVertex2f(-16.8999, -4.95704);
    glVertex2f(-16.8999, 18.5416);
    glEnd(); // End drawing points

    // right part
    glColor3ub(119, 63, 50); // Set color to RGB(9, 22, 28)
    glBegin(GL_POLYGON);     // Begin drawing points
    glVertex2f(-9.97759, 18.5373);
    glVertex2f(-9.97759, -4.96135);
    glVertex2f(-11.7723, -4.96023);
    glVertex2f(-11.7723, 18.5384);
    glEnd(); // End drawing points

    // right part shadow
    glColor3ub(9, 22, 28); // Set color to RGB(9, 22, 28)
    glBegin(GL_POLYGON);   // Begin drawing points
    glVertex2f(-8.78114, 18.5365);
    glVertex2f(-8.78114, -4.96209);
    glVertex2f(-9.93486, -4.96137);
    glVertex2f(-9.93486, 18.5372);
    glEnd(); // End drawing points

    // upper shadow part
    glColor3ub(9, 22, 28); // Set color to RGB(9, 22, 28)
    glBegin(GL_POLYGON);   // Begin drawing points
    glVertex2f(-8.78114, 20.1677);
    glVertex2f(-8.78114, 18.5875);
    glVertex2f(-25.7879, 18.5981);
    glVertex2f(-25.7879, 20.1782);
    glEnd();

    // upper main part
    glColor3ub(119, 63, 50);
    glBegin(GL_POLYGON); // Begin drawing points
    glVertex2f(-25.8306, 20.1783);
    glVertex2f(-25.8306, 18.5981);
    glVertex2f(-33.0521, 18.6026);
    glVertex2f(-33.0521, 20.1827);
    glEnd();

    // left upper triangle
    glColor3ub(119, 63, 50);
    glBegin(GL_POLYGON); // Begin drawing points
    glVertex2f(-19.0365, 27.2593);
    glVertex2f(-23.9932, 20.2281);
    glVertex2f(-25.7879, 20.2292);
    glVertex2f(-20.6175, 27.2603);
    glEnd();

    // left triangle shadow part
    glColor3ub(9, 22, 28);
    glBegin(GL_POLYGON);
    glVertex2f(-23.9505, 20.2281);
    glVertex2f(-22.754, 20.2273);
    glVertex2f(-19.8484, 24.5073);
    glVertex2f(-18.7374, 20.2248);
    glVertex2f(-17.6264, 20.2241);
    glVertex2f(-17.1136, 20.8865);
    glVertex2f(-19.0365, 27.2593);
    glEnd();

    // triangle
    glColor3ub(241, 221, 187); // Set color to RGB(241, 221, 187)
    glBegin(GL_POLYGON);       // Begin drawing points
    glVertex2f(-22.7113, 20.2273);
    glVertex2f(-19.8484, 24.4563);
    glVertex2f(-18.7801, 20.2248);
    glEnd();

    glPushMatrix();
    // translating the same upper right triangle to the left
    glTranslatef(8.1615, 0.0051, 0);

    // left upper triangle
    glColor3ub(119, 63, 50);
    glBegin(GL_POLYGON); // Begin drawing points
    glVertex2f(-19.0365, 27.2593);
    glVertex2f(-23.9932, 20.2281);
    glVertex2f(-25.7879, 20.2292);
    glVertex2f(-20.6175, 27.2603);
    glEnd();

    // left triangle shadow part
    glColor3ub(9, 22, 28);
    glBegin(GL_POLYGON);
    glVertex2f(-23.9505, 20.2281);
    glVertex2f(-22.754, 20.2273);
    glVertex2f(-19.8484, 24.5073);
    glVertex2f(-18.7374, 20.2248);
    glVertex2f(-17.6264, 20.2241);
    glVertex2f(-17.1136, 20.8865);
    glVertex2f(-19.0365, 27.2593);
    glEnd();

    // triangle
    glColor3ub(241, 221, 187); // Set color to RGB(241, 221, 187)
    glBegin(GL_POLYGON);       // Begin drawing points
    glVertex2f(-22.7113, 20.2273);
    glVertex2f(-19.8484, 24.4563);
    glVertex2f(-18.7801, 20.2248);
    glEnd();

    glPopMatrix();
}

void secondCarrier()
{
    // left rectangle
    glColor3ub(119, 63, 50);
    glBegin(GL_POLYGON);
    glVertex2f(-3.65347, -4.96528);
    glVertex2f(-2.20063, -4.96618);
    glVertex2f(-2.20063, 24.2924);
    glVertex2f(-3.65347, 24.2933);
    glEnd();

    // upper part
    glColor3ub(119, 63, 50); // RGB for 773F32
    glBegin(GL_POLYGON);
    glVertex2f(4.50808, 22.6571);
    glVertex2f(-2.20063, 22.6613);
    glVertex2f(-2.20063, 24.2924);
    glVertex2f(4.50808, 24.2882);
    glEnd();

    // right part
    glPushMatrix();
    glTranslatef(7.13594, 0, 0);
    glColor3ub(119, 63, 50);
    glBegin(GL_POLYGON);
    glVertex2f(-3.65347, -4.96528);
    glVertex2f(-2.20063, -4.96618);
    glVertex2f(-2.20063, 24.2924);
    glVertex2f(-3.65347, 24.2933);
    glEnd();
    glPopMatrix();

    // right shadow part
    glColor3ub(9, 22, 28); // RGB for 09161C
    glBegin(GL_POLYGON);
    glVertex2f(12.8405, -4.92456);
    glVertex2f(10.7895, -4.92328);
    glVertex2f(10.8322, 24.2843);
    glVertex2f(12.8405, 24.283);
    glEnd();

    // upper shadow part
    glColor3ub(9, 22, 28); // RGB for 09161C
    glBegin(GL_POLYGON);
    glVertex2f(4.55081, 22.708);
    glVertex2f(10.8749, 22.7041);
    glVertex2f(10.8749, 24.2843);
    glVertex2f(4.55081, 24.2882);
    glEnd();

    // middle shadow part
    glColor3ub(9, 22, 28); // RGB for 09161C
    glBegin(GL_POLYGON);
    glVertex2f(5.53361, -4.97099);
    glVertex2f(5.53361, 22.6564);
    glVertex2f(4.55081, 22.6571);
    glVertex2f(4.55081, -4.97038);
    glEnd();

    // upper cross
    glColor3ub(119, 63, 50); // RGB for 09161C
    glBegin(GL_POLYGON);
    glVertex2f(-2.41428, 22.7633);
    glVertex2f(3.52527, 9.50663);
    glVertex2f(3.52527, 10.2712);
    glVertex2f(-2.07243, 22.916);
    glEnd();

    glColor3ub(119, 63, 50); // RGB for 09161C
    glBegin(GL_POLYGON);
    glVertex2f(3.568, 22.1479);
    glVertex2f(3.568, 21.2814);
    glVertex2f(-2.32882, 9.20443);
    glVertex2f(-2.32882, 10.1729);
    glEnd();
    // end of upper cross

    // middle bar of the crosses
    glColor3ub(119, 63, 50); // RGB for 09161C
    glBegin(GL_POLYGON);
    glVertex2f(-2.28609, 9.56121);
    glVertex2f(-2.28609, 8.69467);
    glVertex2f(3.61073, 8.691);
    glVertex2f(3.61073, 9.55755);
    glEnd();

    // lower cross
    glColor3ub(119, 63, 50); // RGB for 09161C
    glBegin(GL_POLYGON);
    glVertex2f(-2.28609, 8.4398);
    glVertex2f(3.35435, -4.96963);
    glVertex2f(3.65347, -4.96982);
    glVertex2f(3.568, -4.30712);
    glVertex2f(-2.11516, 9.05137);
    glEnd();

    glColor3ub(119, 63, 50); // RGB for 09161C
    glBegin(GL_POLYGON);
    glVertex2f(-2.24336, -4.40545);
    glVertex2f(-2.24336, -4.96615);
    glVertex2f(-2.0297, -4.96629);
    glVertex2f(3.568, 7.82449);
    glVertex2f(3.568, 8.84395);
    glEnd();
    // end of lower cross

    // shadow cross
    glPushMatrix();
    glTranslatef(7.69151, 0, 0);
    // upper cross
    glColor3ub(9, 22, 28); // RGB for 09161C
    glBegin(GL_POLYGON);
    glVertex2f(-2.41428, 22.7633);
    glVertex2f(3.52527, 9.50663);
    glVertex2f(3.52527, 10.2712);
    glVertex2f(-2.07243, 22.916);
    glEnd();

    glColor3ub(9, 22, 28); // RGB for 09161C
    glBegin(GL_POLYGON);
    glVertex2f(3.568, 22.1479);
    glVertex2f(3.568, 21.2814);
    glVertex2f(-2.32882, 9.20443);
    glVertex2f(-2.32882, 10.1729);
    glEnd();
    // end of upper cross

    // middle bar of the crosses
    glColor3ub(9, 22, 28); // RGB for 09161C
    glBegin(GL_POLYGON);
    glVertex2f(-2.28609, 9.56121);
    glVertex2f(-2.28609, 8.69467);
    glVertex2f(3.61073, 8.691);
    glVertex2f(3.61073, 9.55755);
    glEnd();

    // lower cross
    glColor3ub(9, 22, 28); // RGB for 09161C
    glBegin(GL_POLYGON);
    glVertex2f(-2.28609, 8.4398);
    glVertex2f(3.35435, -4.96963);
    glVertex2f(3.65347, -4.96982);
    glVertex2f(3.568, -4.30712);
    glVertex2f(-2.11516, 9.05137);
    glEnd();

    glColor3ub(9, 22, 28); // RGB for 09161C
    glBegin(GL_POLYGON);
    glVertex2f(-2.24336, -4.40545);
    glVertex2f(-2.24336, -4.96615);
    glVertex2f(-2.0297, -4.96629);
    glVertex2f(3.568, 7.82449);
    glVertex2f(3.568, 8.84395);
    glEnd();
    // end of lower cross
    glPopMatrix();
}

void displayDock()
 {
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);



    skyofdock();
    water();
    shadowBuildings();
    tower();
    firstCarrier();
    Crane();
    ground1();
    secondCarrier();

    house();
    shipofdock();



    glFlush();
 }
