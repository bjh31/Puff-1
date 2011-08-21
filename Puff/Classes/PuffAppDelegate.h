//
//  PuffAppDelegate.h
//  Puff
//
//  Created by Daniel Loomb on 22/08/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PuffViewController;

@interface PuffAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    PuffViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet PuffViewController *viewController;

@end

