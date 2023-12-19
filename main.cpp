#include <bits/stdc++.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include <cstdio>
#include "dockyard.cpp"
#include "urban.cpp"
#include "canal.cpp"


using namespace std;

//---------------------------------------------- URBAN PART -----------------------------------

float permissionToSwitch = true;

void update(int)
{
    glutPostRedisplay();
    glutTimerFunc(9, update, 0);

    if (trainpos <= -36)
        trainpos = 60;
    trainpos -= trainspeed;

    if (cloudpos <= -30)
        cloudpos = 40;
    cloudpos -= cloudspeed;

    if (planPos >= 36)
        planPos = -30;
    planPos += planSpeed;

    if (Shippos < 43)
    {
        Shippos += .1;
    }
    else
    {
        permissionToSwitch = false;
        glutDisplayFunc(tempdisplay);       // calling the canal window
    }
}

void shipMovement(int)
{
    glutPostRedisplay();
    glutTimerFunc(9, shipMovement, 0);

    if (permissionToSwitch == false)
    {
        return;
    }
    if (ship_pos < 43)
    {
        ship_pos += .1;
    }
    else
    {
        glutDisplayFunc(displayUrban);
    }
}

void init()
{
    glPointSize(5.0);
    // glClearColor(0.7f, 0.9f, 1.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-41, 41, -25, 30);
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1920, 1080);
    glutCreateWindow("Colored Polygon");
    glutDisplayFunc(displayDock);
    init();
    glutTimerFunc(0, shipMovement, 0);
    glutTimerFunc(0, update, 0);
    // glutTimerFunc(10000, timerCallback, 0);
    // glutTimerFunc(15000, timerCallback, 0);

    glutKeyboardFunc(keyboard);
    glutPostRedisplay();
    // glutKeyboardFunc(keycanal);

    // gate 1
    glutTimerFunc(20, upgate1_down, 0);
    glutTimerFunc(20, upgate1_up, 0);

    // gate 2

    glutTimerFunc(20, upgate2_down, 0);
    glutTimerFunc(20, upgate2_up, 0);

    // gate 3

    glutTimerFunc(20, upgate3_down, 0);
    glutTimerFunc(20, upgate3_up, 0);

    // gate 4

    glutTimerFunc(20, upgate4_down, 0);
    glutTimerFunc(20, upgate4_up, 0);

    // gate 5

    glutTimerFunc(20, upgate5_down, 0);
    glutTimerFunc(20, upgate5_up, 0);

    // gate 6

    glutTimerFunc(20, upgate6_down, 0);
    glutTimerFunc(20, upgate6_up, 0);
    // gate 7

    glutTimerFunc(20, upgate7_down, 0);
    glutTimerFunc(20, upgate7_up, 0);

    // gate 8

    glutTimerFunc(20, upgate8_down, 0);
    glutTimerFunc(20, upgate8_up, 0);

    //**************************canal

    // canal 1
    glutTimerFunc(20, canal1_up, 0);
    // canal 2
    glutTimerFunc(20, canal2_up, 0);
    // canal 3
    glutTimerFunc(20, canal3_up, 0);
    // canal 5
    glutTimerFunc(20, canal5_up, 0);
    // canal 6
    glutTimerFunc(20, canal6_up, 0);
    // canal 7
    glutTimerFunc(20, canal7_up, 0);

    glutMainLoop();

    return 0;
}
