#pragma once
struct Vector2 {
	float x, y;
	float& getX() {
		return this->x;
	}
	float& getY() {
		return this->y;
	}
	void setX(float value) {
		x = value;
	}
	void setY(float value) {
		y = value;
	}
};