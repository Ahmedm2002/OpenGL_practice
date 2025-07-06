#include <iostream>
#include <GL/glut.h>

float xpos = 0.0;
float ypos = 0.0;

void display();
void setBackgroundColor();
void keyboard(unsigned char key, int x, int y);

int main(int argc, char** argv){
    glutInit(&argc, argv);              
    glutInitDisplayMode(GLUT_RGB);      
    glutInitWindowPosition(100, 100);   
    glutInitWindowSize(800, 600);       
    glutCreateWindow("Keyboard Control"); 

    glutDisplayFunc(display);           
    glutKeyboardFunc(keyboard);         
    setBackgroundColor();               
    glutMainLoop();                     
}

void setBackgroundColor(){
    glClearColor(0.0, 0.0, 0.0, 1.0);  
}

void display(){
    glClear(GL_COLOR_BUFFER_BIT);  
    glLoadIdentity();              

    glTranslatef(xpos, ypos, 0.0);  

    glColor3f(1.0, 0.0, 0.0);  
    glBegin(GL_QUADS);  
        glVertex2f(-0.2, -0.2);
        glVertex2f(0.2, -0.2);
        glVertex2f(0.2, 0.2);
        glVertex2f(-0.2, 0.2);
    glEnd();

    glFlush();
}

void keyboard(unsigned char key, int x, int y){
    if(key == 'w') ypos += 0.1;  
    if(key == 's') ypos -= 0.1;  
    if(key == 'a') xpos -= 0.1;  
    if(key == 'd') xpos += 0.1;  

    glutPostRedisplay(); 
}
