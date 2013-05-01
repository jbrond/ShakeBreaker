//
//  ViewController.h
//  ShakeBreaker
//
//  Created by Jan Brond on 5/22/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreMotion/CoreMotion.h>
#import "cubeAccelerationEngine.h"
#import "cubeGyroEngine.h"
@class FliteTTS;

@interface ViewController : UIViewController {
    
    //The speech engine
    FliteTTS *fliteEngine;
    
    CMMotionManager *mm;
    //Boolean shake;
    double accel[3];
    double buffer[5];
    
    cubeAccelerationEngine * cubeAccelEngine;
    cubeGyroEngine * cubeGyroTiltEngine;
    
    BOOL onSetDetection;
    Boolean edgeDetected;
    long previousOffsetTime;
    int shakes;
    accelerationState accelState;
    int waitTime;
    
    
    UIDeviceOrientation previousOrientation;
    UIDeviceOrientation currentOrientation;
    //int shakesTotal;
    //int shakeTime;
    
    //int hitWait;
    //long lastHit;
    
    NSTimer *updateTimer;
    int gameTime;
    int lastGameTime;
    int positionGameTime[7];
    Boolean positionGameCheck[7];
    int currentPosition;
    Boolean hit;
    Boolean countdownFinished;
    Boolean gameRunning;
}
- (IBAction)sendOrientation6Command:(id)sender;
- (IBAction)sendOrientation5Command:(id)sender;
- (IBAction)sendOrientation4Command:(id)sender;
- (IBAction)sendOrientation3Command:(id)sender;
- (IBAction)sendOrientation2Command:(id)sender;
- (IBAction)sendOrientation1Command:(id)sender;
- (IBAction)sendThrowCommand:(id)sender;
- (IBAction)sendShakeCommand:(id)sender;
- (IBAction)sendTiltShakeCommand:(id)sender;
- (IBAction)sendTiltRightCommand:(id)sender;
- (IBAction)sendTiltLeftCommand:(id)sender;
- (IBAction)sendHitCommand:(id)sender;
- (IBAction)bntStartGame:(id)sender;
-(void) countdownSpeak;
@end
