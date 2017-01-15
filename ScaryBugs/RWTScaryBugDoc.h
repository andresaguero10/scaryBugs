//
//  RWTScaryBugDoc.h
//  ScaryBugs
//
//  Created by Andres Aguero on 1/14/17.
//  Copyright © 2017 Andres Aguero. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class RWTScaryBugData;

@interface RWTScaryBugDoc : NSObject

@property (strong) RWTScaryBugData *data;
@property (strong) UIImage *thumbImage;
@property (strong) UIImage *largeImage;

- (id) initWithTitle:(NSString *)name rating:(float)rating thumbImage:(UIImage *)thumbImage fullImage:(UIImage *)fullImage;

@end
