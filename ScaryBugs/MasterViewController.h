//
//  MasterViewController.h
//  ScaryBugs
//
//  Created by Andres Aguero on 1/14/17.
//  Copyright © 2017 Andres Aguero. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

// Code tha initializes a detail view controller i am assuming
@property (strong, nonatomic) DetailViewController *detailViewController;

// an array that will store our instances of Scary Bug Doc
@property (strong) NSMutableArray *bugs;


@end

