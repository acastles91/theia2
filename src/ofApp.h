#pragma once

#include "ofMain.h"
#include "canvas.h"


/*
 * Description of the program:
 *
 * The program opens a bitmap file and from it it, renders a set of instructions. The instructions are produced according to
 * all the parameters of the device / sculpture. The long edge of the bitmap will correspond to the rotation of the barrell: one full
 * rotation will correspond to the length of the image. The small edge of the image corresponds to the resolution of the LED strip,
 * i.e. the number of LEDs. The length of the short edge is fixed. The length of the image is adjustable by a parameter which determines
 * the number of rows through the rotation of the motor. The representation of the cylinder is a canvas, whose short edge is constant,
 * determined by the number of LEDs, and whose long edge is also constant, determined by the number of pulses of the motor per revolution. The
 * bitmap gets mapped onto this canvas.
 *
 *
 * */


class ofApp : public ofBaseApp{

public:

    Canvas canvas;
    ofFbo fbo;


    void setup();
    void update();
    void draw();

    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);

};
