//
//  InstaPopularTableViewController.h
//  InstaPopular
//
//  Created by Karl Bautista on 11/12/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class InstaImage;

@interface InstaPopularTableViewController : UITableViewController{

    NSMutableArray *images;
    InstaImage *anImage;
}

@property(nonatomic, retain) NSMutableArray *images;
@property(nonatomic, retain) InstaImage *anImage;

-(void)getData;

@end
