//
//  Smoke.cpp
//  week5Homework1
//
//  Created by Hazal Mestci on 2/24/17.
//
//

#include "Smoke.hpp"

Smoke::Smoke() {
    
    
}


void Smoke::setup(float _x, float _y) {
    x= _x;
    y= _y;
    //        s= ofRandom(50, 70);
    a= 30;
    lifetime = 150;
    //you can multiply it to make it more random
    xDir= ofNoise(cos(ofGetElapsedTimef())+1, 1);
    yDir= ofRandom( 1, 2);
}



void Smoke::draw() {
    //    ofPushMatrix();
    
    
    ofSetColor(0, 0, 0, a);
    
    ofDrawCircle(x, y, abs(s));
    
    //    ofPopMatrix();
    
    ofSetColor(255, 0, 0, a/10);
    ofDrawCircle(ofGetWindowWidth()/2, ofGetWindowHeight()/2, 25);
    
    //
    
    
}


void Smoke::move() {
    
    
    
}


void Smoke::update() {
    
    //count down the life
    lifetime --;
    //smoke rises, move up
    y-= yDir*2;
    x+= xDir*2;
    //reduce alpha
    if (a >0) {
        a-=0.5;
    }
    //increase or decrease the size
    s=ofMap(a,30,0,-30,150);
    //  s = 30;
    
}
