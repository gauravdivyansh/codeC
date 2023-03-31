#include <stdio.h>
#include <stdlib.h>
#include <GL/glut.h>

void display() {
   glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
   glEnable(GL_DEPTH_TEST);

   // Draw the front face of the bar
   glBegin(GL_QUADS);
   glColor3f(1.0f, 0.0f, 0.0f); // Set color to red
   glVertex3f(-0.5f, -0.5f, 0.5f);
   glVertex3f(0.5f, -0.5f, 0.5f);
   glVertex3f(0.5f, 0.5f, 0.5f);
   glVertex3f(-0.5f, 0.5f, 0.5f);
   glEnd();

   // Draw the top face of the bar
   glBegin(GL_QUADS);
   glColor3f(0.0f, 1.0f, 0.0f); // Set color to green
   glVertex3f(-0.5f, 0.5f, 0.5f);
   glVertex3f(0.5f, 0.5f, 0.5f);
   glVertex3f(0.5f, 0.5f, -0.5f);
   glVertex3f(-0.5f, 0.5f, -0.5f);
   glEnd();

   // Draw the right face of the bar
   glBegin(GL_QUADS);
   glColor3f(0.0f, 0.0f, 1.0f); // Set color to blue
   glVertex3f(0.5f, -0.5f, 0.5f);
   glVertex3f(0.5f, 0.5f, 0.5f);
   glVertex3f(0.5f, 0.5f, -0.5f);
   glVertex3f(0.5f, -0.5f, -0.5f);
   glEnd();

   // Draw the back face of the bar
   glBegin(GL_QUADS);
   glColor3f(1.0f, 1.0f, 0.0f); // Set color to yellow
   glVertex3f(0.5f, -0.5f, -0.5f);
   glVertex3f(0.5f, 0.5f, -0.5f);
   glVertex3f(-0.5f, 0.5f, -0.5f);
   glVertex3f(-0.5f, -0.5f, -0.5f);
   glEnd();

   // Draw the bottom face of the bar
   glBegin(GL_QUADS);
   glColor3f(1.0f, 0.0f, 1.0f); // Set color to magenta
   glVertex3f(-0.5f, -0.5f, -0.5f);
   glVertex3f(0.5f, -0.5f, -0.5f);
   glVertex3f(0.5f, -0.5f, 0.5f);
   glVertex3f(-0.5f, -0
