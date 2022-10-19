#include <GL/glew.h>
#include <GL/glut.h>

void displayMe(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
        glVertex4f(0.5, 0.0, 0.0, 1.0);
        glVertex4f(0.0, 0.5, 0.0, 1.0);
        glVertex4f(0.0, 0.0, 0.0, 1.0);
    glEnd();
    glFlush();
}

int main(int argc, char** argv)
{
    int windowWidth = 400;
    int windowHeight = 300;

    int windowXPos = 100;
    int windowYPos = 100;

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(windowWidth, windowHeight);
    glutInitWindowPosition(windowXPos, windowYPos);
    glutCreateWindow("Hello world!");
    glutDisplayFunc(displayMe);
    glutMainLoop();
    return 0;
}