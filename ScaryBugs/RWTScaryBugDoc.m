//
//  RWTScaryBugDoc.m
//  ScaryBugs
//
//  Created by Andres Aguero on 1/14/17.
//  Copyright © 2017 Andres Aguero. All rights reserved.
//

#import "RWTScaryBugDoc.h"
#import "RWTScaryBugData.h"

@implementation RWTScaryBugDoc

@synthesize data = _data;
@synthesize thumbImage = _thumbImage;
@synthesize largeImage = _largeImage;

- (id) initWithTitle:(NSString *)name rating:(float)rating thumbImage:(UIImage *)thumbImage fullImage:(UIImage *)fullImage
{
    self = [super init];
    if (self) {
        self.data = [[RWTScaryBugData alloc]initWithTitle:name rating:rating];
        self.thumbImage = thumbImage;
        self.largeImage = thumbImage;
        
    }
    return self;
}


@end
