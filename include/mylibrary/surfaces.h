//
// Created by Ankitha Damisetty on 4/18/2020.
//
#include <vector>
#include <Box2D/Box2D.h>
#include <cinder/gl/draw.h>
#include <cinder/gl/gl.h>
#include <mylibrary/edge.h>
#include <mylibrary/conversions.h>
#include <cmath>
#ifndef FINALPROJECT_SURFACES_H
#define FINALPROJECT_SURFACES_H

using namespace std;

namespace myapp {

class Surfaces{
  public:
    Surfaces();
    void CreateBox(b2World *my_world);
    void DrawBox();
    void DrawEdges();
    void SetEdges(vector<cinder::vec2> points);
  private:
    b2World *my_wrld;
    b2Body* ground_body;
    b2PolygonShape ground_shape;
    b2Body* left_wall_body;
    b2PolygonShape left_wall_shape;
    b2Body* right_wall_body;
    b2PolygonShape right_wall_shape;
    vector<myapp::Edge> drawn_edges;
};


}
#endif //FINALPROJECT_SURFACES_H
