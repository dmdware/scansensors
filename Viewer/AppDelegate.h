/*
  This file is part of the Structure SDK.
  Copyright © 2016 Occipital, Inc. All rights reserved.
  http://structure.io
*/

#import <UIKit/UIKit.h>
#import <CoreMotion/CoreMotion.h>

extern double currentMaxAccelX;
extern double currentMaxAccelY;
extern double currentMaxAccelZ;
extern double currentMaxRotX;
extern double currentMaxRotY;
extern double currentMaxRotZ;

@class ViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate>


@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) ViewController *viewController;


@end
