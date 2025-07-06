#include <iostream>
#include <GL/glut.h>
#include <cmath>

void display();
void setBackgroundColor();
void drawCircle(float radius);

int main(int argc, char** argv){
    glutInit(&argc, argv);              
    glutInitDisplayMode(GLUT_RGB);      
    glutInitWindowPosition(100, 100);   
    glutInitWindowSize(800, 600);       
    glutCreateWindow("Shapes Drawing"); 

    glutDisplayFunc(display);           
    setBackgroundColor();               
    glutMainLoop();                     
}

void setBackgroundColor(){
    glClearColor(0.0, 0.0, 0.0, 1.0);  
}

void drawCircle(float radius){
    glBegin(GL_POLYGON);
    for(int i = 0; i < 360; i++){
        float angle = i * 3.14159 / 180;
        float x = radius * cos(angle);
        float y = radius * sin(angle);
        glVertex2f(x, y);
    }
    glEnd();
}

void display(){
    glClear(GL_COLOR_BUFFER_BIT);  
    glLoadIdentity();              

    glColor3f(1.0, 0.0, 0.0);  
    glBegin(GL_LINES);         
        glVertex2f(-0.5, -0.5);  
        glVertex2f(0.5, 0.5);    
    glEnd();

    glColor3f(0.0, 1.0, 0.0);  
    glBegin(GL_TRIANGLES);     
        glVertex2f(-0.5, -0.5);
        glVertex2f(0.5, -0.5);
        glVertex2f(0.0, 0.5);
    glEnd();

    glColor3f(1.0, 0.5, 0.0);  
    drawCircle(0.3);           

    glFlush();  
}
