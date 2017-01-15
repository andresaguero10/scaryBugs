//
//  DetailViewController.h
//  ScaryBugs
//
//  Created by Andres Aguero on 1/14/17.
//  Copyright © 2017 Andres Aguero. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSDate *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

