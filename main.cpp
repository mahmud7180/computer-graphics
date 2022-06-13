#include <windows.h>
#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
# define PI           3.14159265358979323846
GLfloat i = 0.0f;
GLfloat l = 0.0f;
GLfloat m = 0.0f;
GLfloat n = 0.0f;

void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}

GLfloat position = 0.0f;
GLfloat speed = 0.01f;

void update(int value) {

    if(position <-2.0)
        position = 2.0f;

    position -= speed; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}

void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(2.5);




	glBegin(GL_QUADS);
	glColor3ub(153,0,0);
	glVertex2f(-0.2f,0.0f);
	glVertex2f(0.4f,0.0f);//middle
	glVertex2f(0.4f,1.35f);
	glVertex2f(-0.2f,1.35f);
	glEnd();



	glBegin(GL_QUADS);
	glColor3ub(0,230,230);
	glVertex2f(-2.0f,1.1f); //sky2
	glVertex2f(-1.7f,1.1f);
	glVertex2f(-1.7f,1.35f);
	glVertex2f(-2.0f,1.35f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,230,230);
	glVertex2f(2.0f,1.1f); //sky3
	glVertex2f(1.9f,1.1f);
	glVertex2f(1.9f,1.35f);
	glVertex2f(2.0f,1.35f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(0,230,230);
	glVertex2f(-2.0f,1.35f); //sky1
	glVertex2f(2.0f,1.35f);
	glVertex2f(2.0f,2.0f);
	glVertex2f(-2.0f,2.0f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(26,26,26);
	glVertex2f(-0.2f,0.0f);
	glVertex2f(-0.2f,0.2f);  //left 1st black
	glVertex2f(-1.7f,.2f);
	glVertex2f(-1.7f,0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255,255,204);
	glVertex2f(-0.2f,0.2f);
	glVertex2f(-0.2f,0.25f); //left 1 brown
	glVertex2f(-1.7f,.25f);
	glVertex2f(-1.7f,0.2f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(26,26,26);
	glVertex2f(.4f,0.0f);
	glVertex2f(1.9f,0.0f);  //right 1st black
	glVertex2f(1.9f,.2f);
	glVertex2f(.4f,0.2f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255,255,204);
	glVertex2f(0.4f,0.2f);
	glVertex2f(1.9f,0.2f);
	glVertex2f(1.9f,.25f);
	glVertex2f(0.4f,0.25f); //right 1 brown
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(0.4f,0.25f);
	glVertex2f(1.9f,0.25f);  //r3
	glVertex2f(1.9f,.3f);
	glVertex2f(0.4f,0.3f);


	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(-0.2f,0.25f);
	glVertex2f(-0.2f,0.3f); //L3
	glVertex2f(-1.7f,.3f);
	glVertex2f(-1.7f,0.25f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(255,255,204);
	glVertex2f(-0.2f,0.3f);
	glVertex2f(-0.2f,0.5f);  //left  4
	glVertex2f(-1.7f,.5f);
	glVertex2f(-1.7f,0.3f);
	glEnd();



	glBegin(GL_QUADS);
	glColor3ub(255,255,204);
	glVertex2f(.4f,0.3f);
	glVertex2f(1.9f,0.3f);  //right 4
	glVertex2f(1.9f,.5f);
	glVertex2f(.4f,0.5f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(-0.2f,0.5f);
	glVertex2f(-0.2f,0.65f); //L5
	glVertex2f(-1.7f,.65f);
	glVertex2f(-1.7f,0.5f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(255,255,204);
	glVertex2f(-0.2f,0.65f);
	glVertex2f(-0.2f,0.7f); //L6
	glVertex2f(-1.7f,.70f);
	glVertex2f(-1.7f,0.65f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(-0.2f,0.7f);
	glVertex2f(-0.2f,0.75f); //L7
	glVertex2f(-1.7f,.75f);
	glVertex2f(-1.7f,0.7f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255,255,204);
	glVertex2f(-0.2f,0.75f);
	glVertex2f(-0.2f,0.95f); //L8
	glVertex2f(-1.7f,.95f);
	glVertex2f(-1.7f,0.75f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(-0.2f,0.95f);
	glVertex2f(-0.2f,1.1f); //L9
	glVertex2f(-1.7f,1.1f);
	glVertex2f(-1.7f,0.95f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(255,255,204);
	glVertex2f(-0.2f,1.1f);
	glVertex2f(-0.2f,1.15f); //L10
	glVertex2f(-1.7f,1.15f);
	glVertex2f(-1.7f,1.1f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(-0.2f,1.15f);
	glVertex2f(-0.2f,1.2f); //L11
	glVertex2f(-1.7f,1.2f);
	glVertex2f(-1.7f,1.15f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255,255,204);
	glVertex2f(-0.2f,1.2f);
	glVertex2f(-0.2f,1.35f); //L12
	glVertex2f(-1.7f,1.35f);
	glVertex2f(-1.7f,1.2f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(0.4f,0.5f);
	glVertex2f(0.4f,0.65f); //r5....
	glVertex2f(1.9f,.65f);
	glVertex2f(1.9f,0.5f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(255,255,204);
	glVertex2f(0.4f,0.65f);
	glVertex2f(0.4f,0.7f); //r6....
	glVertex2f(1.9f,.70f);
	glVertex2f(1.9f,0.65f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(0.4f,0.7f);
	glVertex2f(0.4f,0.75f); //r7
	glVertex2f(1.9f,.75f);
	glVertex2f(1.9f,0.7f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(255,255,204);
	glVertex2f(0.4f,0.75f);
	glVertex2f(0.4f,0.95f); //r8
	glVertex2f(1.9f,.95f);
	glVertex2f(1.9f,0.75f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(0.4f,0.95f);
	glVertex2f(0.4f,1.1f); //r9
	glVertex2f(1.9f,1.1f);
	glVertex2f(1.9f,0.95f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(255,255,204);
	glVertex2f(0.4f,1.1f);
	glVertex2f(0.4f,1.15f); //r10
	glVertex2f(1.9f,1.15f);
	glVertex2f(1.9f,1.1f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(0.4f,1.15f);
	glVertex2f(0.4f,1.2f); //r11
	glVertex2f(1.9f,1.2f);
	glVertex2f(1.9f,1.15f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(255,255,204);
	glVertex2f(0.4f,1.2f);
	glVertex2f(0.4f,1.35f); //L12
	glVertex2f(1.9f,1.35f);
	glVertex2f(1.9f,1.2f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(153,0,0);
	glVertex2f(-0.5f,1.35f); //piler1
	glVertex2f(-0.5f,0.0f);
	glVertex2f(-0.55f,0.0f);
	glVertex2f(-0.55f,1.35f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(153,0,0);
	glVertex2f(-0.9f,1.35f); //pilir2
	glVertex2f(-0.9f,0.0f);
	glVertex2f(-0.95f,0.0f);
	glVertex2f(-0.95f,1.35f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(153,0,0);
	glVertex2f(-1.3f,1.35f); //pilir3
	glVertex2f(-1.3f,0.0f);
	glVertex2f(-1.35f,0.0f);
	glVertex2f(-1.35f,1.35f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(153,0,0);
	glVertex2f(-1.7f,1.35f); //pilir4
	glVertex2f(-1.7f,0.0f);
	glVertex2f(-1.75f,0.0f);
	glVertex2f(-1.75f,1.35f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(153,0,0);
	glVertex2f(.7f,1.35f); //pilir1,,r
	glVertex2f(.7f,0.0f);
	glVertex2f(.75f,0.0f);
	glVertex2f(.75f,1.35f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(153,0,0);
	glVertex2f(1.1f,1.35f); //pilir2,,r
	glVertex2f(1.1f,0.0f);
	glVertex2f(1.15f,0.0f);
	glVertex2f(1.15f,1.35f);
	glEnd();



	glBegin(GL_QUADS);
	glColor3ub(153,0,0);
	glVertex2f(1.5f,1.35f); //pilir3,,r
	glVertex2f(1.5f,0.0f);
	glVertex2f(1.55f,0.0f);
	glVertex2f(1.55f,1.35f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(153,0,0);
	glVertex2f(1.9f,1.35f); //pilir4,,r
	glVertex2f(1.9f,0.0f);
	glVertex2f(1.95f,0.0f);
	glVertex2f(1.95f,1.35f);
	glEnd();



	glBegin(GL_LINES);
	glColor3ub(230,230,230);
	glVertex2f(-0.49f, 0.0f);
	glVertex2f(-0.49f, 0.18f);

	glVertex2f(-0.49f, 0.18f);
	glVertex2f(-0.44f, 0.18f);  //left door 11

	glVertex2f(-0.44f, 0.18f);
	glVertex2f(-0.44f, 0.0f);

	glEnd();


	glBegin(GL_LINES);
	glColor3ub(230,230,230);

	glVertex2f(-0.49f, 0.5f);
	glVertex2f(-0.49f, 0.61f);  ////left door 12

	glVertex2f(-0.49f, 0.61f);
	glVertex2f(-0.44f, 0.61f);

	glVertex2f(-0.44f, 0.5f);
	glVertex2f(-0.44f, 0.61f);


	glEnd();



	glBegin(GL_LINES);
	glColor3ub(230,230,230);

	glVertex2f(-0.49f, 0.95f);
	glVertex2f(-0.49f, 1.06f);

	glVertex2f(-0.44f, 0.95f);
	glVertex2f(-0.44f, 1.06f);  //left door 13

	glVertex2f(-0.49f, 1.06f);
	glVertex2f(-0.44f, 1.06f);


	glEnd();

	glBegin(GL_LINES);
	glColor3ub(230,230,230);
	glVertex2f(-0.89f, 0.0f);
	glVertex2f(-0.89f, 0.18f);

	glVertex2f(-0.89f, 0.18f); //left door 21
	glVertex2f(-0.84f, 0.18f);

	glVertex2f(-0.84f, 0.18f);
	glVertex2f(-0.84f, 0.0f);

	glEnd();


	glBegin(GL_LINES);
	glColor3ub(230,230,230);
	glVertex2f(-0.89f, 0.5f);
	glVertex2f(-0.89f, 0.61f);

	glVertex2f(-0.89f, 0.61f); //22
	glVertex2f(-0.84f, 0.61f);

	glVertex2f(-0.84f, 0.61f);
	glVertex2f(-0.84f, 0.5f);

	glEnd();


	glBegin(GL_LINES);
	glColor3ub(230,230,230);

	glVertex2f(-0.89f, 0.95f);
	glVertex2f(-0.89f, 1.06f);

	glVertex2f(-0.84f, 1.06f);  //23
	glVertex2f(-0.84f, 0.95f);

	glVertex2f(-0.84f, 1.06f);
	glVertex2f(-0.89f, 1.06f);


	glEnd();

	glBegin(GL_LINES);
	glColor3ub(230,230,230);
	glVertex2f(-1.29f, 0.0f);
	glVertex2f(-1.29f, 0.18f);

	glVertex2f(-1.29f, 0.18f); //31
	glVertex2f(-1.24f, 0.18f);

	glVertex2f(-1.24f, 0.18f);
	glVertex2f(-1.24f, 0.0f);

	glEnd();

	glBegin(GL_LINES);
	glColor3ub(230,230,230);
	glVertex2f(-1.29f, 0.5f);
	glVertex2f(-1.29f, 0.61f);

	glVertex2f(-1.29f, 0.61f); //32
	glVertex2f(-1.24f, 0.61f);

	glVertex2f(-1.24f, 0.61f);
	glVertex2f(-1.24f, 0.5f);

	glEnd();


	glBegin(GL_LINES);
	glColor3ub(230,230,230);

	glVertex2f(-1.29f, 0.95f);
	glVertex2f(-1.29f, 1.06f);

	glVertex2f(-1.24f, 1.06f);  //33
	glVertex2f(-1.24f, 0.95f);

	glVertex2f(-1.24f, 1.06f);
	glVertex2f(-1.29f, 1.06f);


	glEnd();



	glBegin(GL_LINES);
	glColor3ub(230,230,230);
	glVertex2f(-1.69f, 0.0f);
	glVertex2f(-1.69f, 0.18f);

	glVertex2f(-1.69f, 0.18f); //41
	glVertex2f(-1.64f, 0.18f);

	glVertex2f(-1.64f, 0.18f);
	glVertex2f(-1.64f, 0.0f);

	glEnd();


	glBegin(GL_LINES);
	glColor3ub(230,230,230);
	glVertex2f(-1.69f, 0.5f);
	glVertex2f(-1.69f, 0.61f);

	glVertex2f(-1.69f, 0.61f); //42
	glVertex2f(-1.64f, 0.61f);

	glVertex2f(-1.64f, 0.61f);
	glVertex2f(-1.64f, 0.5f);

	glEnd();


	glBegin(GL_LINES);
	glColor3ub(230,230,230);

	glVertex2f(-1.69f, 0.95f);
	glVertex2f(-1.69f, 1.06f);

	glVertex2f(-1.64f, 1.06f);  //43
	glVertex2f(-1.64f, 0.95f);

	glVertex2f(-1.64f, 1.06f);
	glVertex2f(-1.69f, 1.06f);


	glEnd();


	glBegin(GL_LINES);
	glColor3ub(230,230,230);
	glVertex2f(0.69f, 0.0f);
	glVertex2f(0.69f, 0.18f);

	glVertex2f(0.69f, 0.18f);  //door right 11
	glVertex2f(0.64f, 0.18f);

	glVertex2f(0.64f, 0.18f);
	glVertex2f(0.64f, 0.0f);

	glEnd();


	glBegin(GL_LINES);
	glColor3ub(230,230,230);

	glVertex2f(0.69f, 0.5f);
	glVertex2f(0.69f, 0.61f);

	glVertex2f(0.69f, 0.61f);  //door right 13
	glVertex2f(0.64f, 0.61f);

	glVertex2f(0.64f, 0.5f);
	glVertex2f(0.64f, 0.61f);


	glEnd();


	glBegin(GL_LINES);
	glColor3ub(230,230,230);

	glVertex2f(0.69f, 0.95f);
	glVertex2f(0.69f, 1.06f);

	glVertex2f(0.64f, 0.95f);
	glVertex2f(0.64f, 1.06f);  //13

	glVertex2f(0.69f, 1.06f);
	glVertex2f(0.64f, 1.06f);


	glEnd();


	glBegin(GL_LINES);
	glColor3ub(230,230,230);
	glVertex2f(0.76f, 0.0f);
	glVertex2f(0.76f, 0.18f);

	glVertex2f(0.76f, 0.18f); //right door 21
	glVertex2f(0.81f, 0.18f);

	glVertex2f(0.81f, 0.18f);
	glVertex2f(0.81f, 0.0f);

	glEnd();


	glBegin(GL_LINES);
	glColor3ub(230,230,230);
	glVertex2f(0.76f, 0.5f);
	glVertex2f(0.76f, 0.61f);

	glVertex2f(0.76f, 0.61f); //right door22
	glVertex2f(0.81f, 0.61f);

	glVertex2f(0.81f, 0.61f);
	glVertex2f(0.81f, 0.5f);

	glEnd();


	glBegin(GL_LINES);
	glColor3ub(230,230,230);

	glVertex2f(0.76f, 0.95f);
	glVertex2f(0.76f, 1.06f);

	glVertex2f(0.81f, 1.06f);  //right door23
	glVertex2f(0.81f, 0.95f);

	glVertex2f(0.81f, 1.06f);
	glVertex2f(0.76f, 1.06f);


	glEnd();


	glBegin(GL_LINES);
	glColor3ub(230,230,230);
	glVertex2f(1.49f, 0.0f);
	glVertex2f(1.49f, 0.18f);

	glVertex2f(1.49f, 0.18f); //right door31
	glVertex2f(1.44f, 0.18f);

	glVertex2f(1.44f, 0.18f);
	glVertex2f(1.44f, 0.0f);

	glEnd();


	glBegin(GL_LINES);
	glColor3ub(230,230,230);
	glVertex2f(1.49f, 0.5f);
	glVertex2f(1.49f, 0.61f);

	glVertex2f(1.49f, 0.61f); //right door32
	glVertex2f(1.44f, 0.61f);

	glVertex2f(1.44f, 0.61f);
	glVertex2f(1.44f, 0.5f);

	glEnd();


	glBegin(GL_LINES);
	glColor3ub(230,230,230);

	glVertex2f(1.49f, 0.95f);
	glVertex2f(1.49f, 1.06f);

	glVertex2f(1.44f, 1.06f);  //right door33
	glVertex2f(1.44f, 0.95f);

	glVertex2f(1.44f, 1.06f);
	glVertex2f(1.49f, 1.06f);


	glEnd();



	glBegin(GL_LINES);
	glColor3ub(230,230,230);
	glVertex2f(1.56f, 0.0f);
	glVertex2f(1.56f, 0.18f);

	glVertex2f(1.56f, 0.18f); //right door41
	glVertex2f(1.61f, 0.18f);

	glVertex2f(1.61f, 0.18f);
	glVertex2f(1.61f, 0.0f);

	glEnd();


	glBegin(GL_LINES);
	glColor3ub(230,230,230);
	glVertex2f(1.56f, 0.5f);
	glVertex2f(1.56f, 0.61f);

	glVertex2f(1.56f, 0.61f); //right door42
	glVertex2f(1.61f, 0.61f);

	glVertex2f(1.61f, 0.61f);
	glVertex2f(1.61f, 0.5f);

	glEnd();


	glBegin(GL_LINES);
	glColor3ub(230,230,230);

	glVertex2f(1.61f, 0.95f);
	glVertex2f(1.61f, 1.06f);

	glVertex2f(1.56f, 1.06f);  //43
	glVertex2f(1.56f, 0.95f);

	glVertex2f(1.56f, 1.06f);
	glVertex2f(1.61f, 1.06f);


	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(51,204,51);
	glVertex2f(-2.0f,0.0f);
	glVertex2f(-2.0f,-0.02f);  //rood break line 1
	glVertex2f(2.0f,-0.02f);
	glVertex2f(2.0f,0.0f);


	glEnd();


		glBegin(GL_QUADS);
	glColor3ub(173,173,133);
	glVertex2f(-2.0f,-0.02f);
	glVertex2f(-2.0f,-0.23f);  //rood
	glVertex2f(2.0f,-0.23f);
	glVertex2f(2.0f,-0.02f);


	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(51,204,51);
	glVertex2f(-2.0f,-0.23f);
	glVertex2f(-2.0f,-0.25f);  //rood break line 2
	glVertex2f(2.0f,-0.25f);
	glVertex2f(2.0f,-0.23f);


	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(51,204,51);
	glVertex2f(-2.0f,-0.25f);
	glVertex2f(-2.0f,-2.0f);  //field
	glVertex2f(2.0f,-2.0f);
	glVertex2f(2.0f,-0.25f);


	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(179,60,0);
	glVertex2f(-1.85f,0.0f);
	glVertex2f(-1.9f,0.0f);  //tree box
	glVertex2f(-1.9f,0.10f);
	glVertex2f(-1.85f,0.10f);
	glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(57, 230,0);
    glVertex2f(-2.0f, 0.10f);
	glVertex2f(-1.75f,0.10f);   //tree 1s triangle
	glVertex2f(-1.875f,0.3f);
	glEnd();


	 glBegin(GL_TRIANGLES);
    glColor3ub(64,255,0);
    glVertex2f(-2.0f, 0.25f);
	glVertex2f(-1.75f,0.25f);  //tree 2s triangle
	glVertex2f(-1.875f,0.4f);
	glEnd();


	glBegin(GL_TRIANGLES);
    glColor3ub(102,255,51);
    glVertex2f(-2.0f, 0.35f);  ////tree 3s triangle
	glVertex2f(-1.75f,0.35f);
	glVertex2f(-1.875f,0.5f);
	glEnd();


	///////////////////////grash//////////////////////////

		glBegin(GL_TRIANGLES);
    glColor3ub(102,255,51);
    glVertex2f(-1.2f, -1.5f);
	glVertex2f(-1.4f,-1.5f);
	glVertex2f(-1.1f,-1.3f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(64,255,0);
    glVertex2f(-1.2f, -1.5f);
	glVertex2f(-1.4f,-1.5f);
	glVertex2f(-1.5f,-1.3f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(102,255,51);
    glVertex2f(-1.2f, -1.5f);
	glVertex2f(-1.4f,-1.5f);
	glVertex2f(-1.15f,-1.2f);
	glEnd();


	glBegin(GL_TRIANGLES);
    glColor3ub(102,255,51);
    glVertex2f(-1.2f, -1.5f);
	glVertex2f(-1.4f,-1.5f);
	glVertex2f(-1.45f,-1.2f);
	glEnd();


	glBegin(GL_TRIANGLES);
    glColor3ub(121,255,77);
    glVertex2f(-1.2f, -1.5f);
	glVertex2f(-1.4f,-1.5f);
	glVertex2f(-1.3f,-1.1f);
	glEnd();
//////////////////////////grash 2/////////////////

    //glTranslatef(.4,0,0);
    //glLoadIdentity();
	//glScalef(.5,.5,0);
	glBegin(GL_TRIANGLES);
    glColor3ub(102,255,51);
    glVertex2f(-1.2f, -1.5f);
	glVertex2f(-1.4f,-1.5f);
	glVertex2f(-1.1f,-1.3f);

	glColor3ub(64,255,0);
    glVertex2f(-1.2f, -1.5f);
	glVertex2f(-1.4f,-1.5f);
	glVertex2f(-1.5f,-1.3f);


	 glColor3ub(102,255,51);
    glVertex2f(-1.2f, -1.5f);
	glVertex2f(-1.4f,-1.5f);
	glVertex2f(-1.15f,-1.2f);


	glColor3ub(102,255,51);
    glVertex2f(-1.2f, -1.5f);
	glVertex2f(-1.4f,-1.5f);
	glVertex2f(-1.45f,-1.2f);


	glColor3ub(121,255,77);
    glVertex2f(-1.2f, -1.5f);
	glVertex2f(-1.4f,-1.5f);
	glVertex2f(-1.3f,-1.1f);


	glEnd();












	//////////////////////////////////////////////////////////////////////////////////////////





     glColor3ub(255,255,51);
	int j;

	GLfloat a=0.15f; GLfloat b=-0.35f; GLfloat radius1 =.05f;
	int triangleAmount1 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(a,b); // center of circle
		for(j = 0; j <= triangleAmount1;j++) {
			glVertex2f(
		            a + (radius1 * cos(j *  twicePi1 / triangleAmount1)),
			    b + (radius1 * sin(j * twicePi1 / triangleAmount1))
			);
		}
	glEnd();




	glBegin(GL_QUADS);
	glColor3ub(128,0,0);
	glVertex2f(0.1f,-0.5f);
	glVertex2f(0.1f,-1.2f);  //rood
	glVertex2f(0.2f,-1.2f);
	glVertex2f(0.2f,-0.5f);


	glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(102,255,51);
    glVertex2f(0.1f,-0.5f);
	glVertex2f(0.2f,-0.5f);
	glVertex2f(0.15f,-0.35f);
	glEnd();





	 glPushMatrix();
         glTranslated(0.15,-0.35,0);
         glRotatef(i,0.0,0.0,-0.1);





      glBegin(GL_TRIANGLES);
    glColor3ub(255,255,255);
    glVertex2f(0.0f,-0.0f);
	glVertex2f(0.1f,0.8f);
	glVertex2f(0.2f,0.8f);
	glEnd();


	 glBegin(GL_TRIANGLES);
    glColor3ub(255,255,255);
    glVertex2f(0.0f,-0.0f);
	glVertex2f(0.6f,-0.7f);
	glVertex2f(0.6f,-0.8f);
	glEnd();



	glBegin(GL_TRIANGLES);
    glColor3ub(102,255,51);
    glVertex2f(0.0f,-0.0f);
	glVertex2f(-0.4f,-0.7f);
	glVertex2f(-0.4f,-0.8f);
	glEnd();

	glPopMatrix();//glPopMatrix pops the top matrix off the stack
    i+=.3f;

    glBegin(GL_QUADS);
	glColor3ub(0,23,30);
	glVertex2f(-0.1f,1.0f); //sky2
	glVertex2f(0.3f,1.0f);
	glVertex2f(0.3f,0.6f);
	glVertex2f(-0.1f,0.6f);
	glEnd();

//////////////////////////////////////////////////////////////////////////////////////
	     glPushMatrix();
         glTranslated(0.1,0.8,0);
         glRotatef(n,0.0,0.0,-0.1);

         glBegin(GL_LINES);
	glColor3ub(230,230,230);

	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.18f, 0.1f);
	glEnd();

	glPopMatrix();//glPopMatrix pops the top matrix off the stack
    n+=.1f;//n=n+.1=.2



    glPushMatrix();
         glTranslated(0.1,0.8,0);
         glRotatef(m,0.0,0.0,-0.1);

         glBegin(GL_LINES);
	glColor3ub(230,230,230);

	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.12f, 0.1f);
	glEnd();

	glPopMatrix();//glPopMatrix pops the top matrix off the stack
    m+=0.03f;


    glPushMatrix();
         glTranslated(0.1,0.8,0);
         glRotatef(l,0.0,0.0,-0.1);

         glBegin(GL_LINES);
	glColor3ub(230,230,230);

	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.02f, 0.1f);
	glEnd();

	glPopMatrix();
    l+=0.01f;

glPushMatrix();
glTranslatef(position,0,0);
glLineWidth(5);
   glBegin(GL_LINES);
	glColor3ub(0,0,0);

	glVertex2f(0.0f, 01.55f);
	glVertex2f(0.2f, 01.8f);
	glEnd();
   glBegin(GL_LINES);
	glColor3ub(0,0,0);

	glVertex2f(0.0f, 1.55f);
	glVertex2f(-0.2f, 1.8f);
	glEnd();

	 glBegin(GL_LINES);
	glColor3ub(0,0,0);

	glVertex2f(0.0f, 01.55f);
	glVertex2f(0.0f, 01.8f);
	glEnd();
   glBegin(GL_LINES);
	glColor3ub(0,0,0);

	glVertex2f(0.0f, 1.55f);
	glVertex2f(-0.0f, 1.8f);
	glEnd();

glPopMatrix();


	glFlush();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("OpenGL Setup");
	glutInitWindowSize(320, 320);
	gluOrtho2D(-2,2,-2,2);

	glutDisplayFunc(display);
	    glutIdleFunc(Idle);
	    glutTimerFunc(100, update, 0);
	glutMainLoop();
	return 0;
}

