//
//  InstaImage.m
//  InstaPopular
//
//  Created by Karl Bautista on 11/12/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "InstaImage.h"

@implementation InstaImage

@synthesize user, profilePic, popularPic;

-(id)initWithUser:(NSString *)newUser profilePic:(NSString *)newProfilePic popularPic:(NSString *)newPopularPic;
{
	if(!(self = [super init]))
		return nil;
	self.user = newUser;
    
    //Take URL and store data in UIImage
    NSData *profileData = [NSData dataWithContentsOfURL:[NSURL URLWithString:newProfilePic]];
    self.profilePic = [UIImage imageWithData:profileData];
    NSData *popularData = [NSData dataWithContentsOfURL:[NSURL URLWithString:newPopularPic]];
	self.popularPic = [UIImage imageWithData:popularData];
	
	return self;
}

+(InstaImage*)imageWithUser:(NSString *)user profilePic:(NSString *)profilePic popularPic:(NSString *)popularPic;
{
	return [[[InstaImage alloc] initWithUser:user profilePic:profilePic popularPic:popularPic]autorelease];
}

-(void)dealloc
{
    [user dealloc];
    [profilePic dealloc];
    [popularPic dealloc];
    
	[super dealloc];
}

@end