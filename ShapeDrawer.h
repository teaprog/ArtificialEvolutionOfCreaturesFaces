#ifndef SHAPE_DRAWER_H
#define SHAPE_DRAWER_H

class ShapeDrawer {
	public:
		static void drawCircle(float xPos, float yPos, float width, float height, bool filled = true);
		static void drawLine(float x1, float y1, float x2, float y2);
		static void drawRectangle(float xPos, float yPos, float width, float height, bool filled = true);
		static void drawTriangle(float x1, float y1, float x2, float y2, float x3, float y3, bool filled = true);
};

#endif /* SHAPE_DRAWER_H */