//
//  InstaPopularAppDelegate.h
//  InstaPopular
//
//  Created by Karl Bautista on 11/12/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

//@class InstaPopularViewController;
@class InstaPopularTableViewController;

@interface InstaPopularAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) InstaPopularTableViewController *viewController;

@end
