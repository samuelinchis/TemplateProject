#include "casa.h"

void casa::DibujarCasa(float x, float y, float z) {
	glTranslated(x, y, z);

	glutSolidCube(0.5);

	glPushMatrix();
	glTranslatef(0, y + 0.5, 0);
		glBegin(GL_TRIANGLES);
			glVertex3f(-1, 0, 0);
			glVertex3f(0, 1, 0);
			glVertex3f(1, 0, 0);
		glEnd();

	glPopMatrix();
}