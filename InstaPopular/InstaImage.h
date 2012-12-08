//
//  InstaImage.h
//  InstaPopular
//
//  Created by Karl Bautista on 11/12/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface InstaImage : NSObject {
	NSString *user; 
    UIImage *profilePic; 
    UIImage *popularPic;
}

@property(nonatomic, retain) NSString *user;
@property(nonatomic, retain) UIImage *profilePic;
@property(nonatomic, retain) UIImage *popularPic;

-(id)initWithUser:(NSString *)newUser profilePic:(NSString *)newProfilePic popularPic:(NSString *)newPopularPic;
+(InstaImage*)imageWithUser:(NSString *)user profilePic:(NSString *)profilePic popularPic:(NSString *)popularPic;

@end
