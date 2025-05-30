#pragma once 
#include "scene.h" 


struct AABB
{
	Vector2 center;
	Vector2 size;

	AABB(const Vector2& center, const Vector2& size) : <initialize values>{}

	Vector2 extents() const { return <half size>; }
	Vector2 min() const { return <center - extents>; }
	Vector2 max() const { return <center + extents>; }
};