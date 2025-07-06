#include<iostream>
#include<GL/glut.h>

void setBackgroundColor();
void display();
void reshape(int width, int height);

int main(int argc, char** argv){
  
  // Initialize glut library
  glutInit(&argc, argv);
  //  Specify color mode
  glutInitDisplayMode(GLUT_RGB);
  // Positon of screen at which window will be rendered 
  glutInitWindowPosition(600, 300);
  // Window Size
  glutInitWindowSize(1800, 1000);
  // Window Title
  glutCreateWindow("Window");
  
  // Display function => parameter is a pointer to a function

  glutDisplayFunc(display);
  glutReshapeFunc(reshape);
  // setBackgroundColor();

  // Run the program until the user terminates it
  glutMainLoop();

}


void display(){
  // clear the previous view
  glClear(GL_COLOR_BUFFER_BIT);

  // reset any transformation or rotations
  glLoadIdentity();
  
  // write code to draw

  // set point size 

  glPointSize(10);

  // tells gl we are going to specify points 
  // glBegin(GL_POINTS);

  // two points on screen
  // glVertex2f(5,5);
  // glVertex2f(-5,-5);



  // to work with triangles

  // glBegin(GL_TRIANGLES);

  // glVertex2f(0.0, 5.0);
  // glVertex2f(4.0, -3.0);
  // glVertex3f(-4.0, -3.0, 0);



  glEnd();

  //  Displays the frame buffer on screen
  glFlush();

}

void setBackgroundColor(){
  // set color in rgb in range 0-1
  glClearColor(0, 0, 0, 1.0);
}

void reshape(int width, int height){

  // viewport => area inside window where stuff is displayed

  // set viewport
  glViewport(0, 0 ,width, height);

  // Projection 

  // manipulate the projection matrix
  glMatrixMode(GL_PROJECTION);

  glLoadIdentity();

  // 2D projection

  gluOrtho2D(-10,10,-10,10);

  glMatrixMode(GL_MODELVIEW);


}