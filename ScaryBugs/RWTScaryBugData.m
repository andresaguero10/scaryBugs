//
//  RWTScaryBugData.m
//  ScaryBugs
//
//  Created by Andres Aguero on 1/14/17.
//  Copyright © 2017 Andres Aguero. All rights reserved.
//

#import "RWTScaryBugData.h"

@implementation RWTScaryBugData

@synthesize title = _title;
@synthesize rating = _rating;

- (id) initWithTitle:(NSString *)title rating:(float)rating
{
    self = [super init];
    if (self) {
        self.title = title;
    }
    return self;
}

@end
