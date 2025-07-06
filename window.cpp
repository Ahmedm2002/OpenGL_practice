#include<iostream>
#include<GL/glut.h>

int main(int argc, char** argv){
  
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_RGB);
  glutInitWindowPosition(200, 200);
  glutInitWindowSize(800, 500);
  glutCreateWindow("Window");
  glutMainLoop();

}