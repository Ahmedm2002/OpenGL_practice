#include<iostream>
#include<GL/glut.h>

void setBackgroundColor();
void display();

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
  
  setBackgroundColor();

  // Run the program until the user terminates it
  glutMainLoop();

}


void display(){
  // clear the previous view
  glClear(GL_COLOR_BUFFER_BIT);

  // reset any transformation or rotations
  glLoadIdentity();
  
  // write code to draw

  

  //  Displays the frame buffer on screen
  glFlush();

}

void setBackgroundColor(){
  // set color in rgb in range 0-1
  glClearColor(1.0, 0.4, 0.9, 1.0);
}
