/*
  This file is part of the Structure SDK.
  Copyright © 2016 Occipital, Inc. All rights reserved.
  http://structure.io
*/

#import <UIKit/UIKit.h>
#define HAS_LIBCXX
#import "Structure.framework/Headers/Structure.h"
#import <CoreMotion/CoreMotion.h>

@interface ViewController : UIViewController <STSensorControllerDelegate>


- (IBAction)resetMaxValues:(id)sender;

@property (strong, nonatomic) CMMotionManager *motionManager;


@end
