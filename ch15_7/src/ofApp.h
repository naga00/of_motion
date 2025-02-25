#pragma once

#include "ofMain.h"
#include "Ball3D.h"

class ofApp : public ofBaseApp{

public:
    void setup();
    void update();
    void draw();

    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    void move(Ball3D* ball);
    void sortZ();
    
    static const int numBalls = 100;
    Ball3D* balls[numBalls];
    float fl = 250;
    float vpX = 0;
    float vpY = 0;
    float gravity = 0.2;
    float floor = 200;
    float bounce = -0.6;
};
