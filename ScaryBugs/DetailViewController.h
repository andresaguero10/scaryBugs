//
//  DetailViewController.h
//  ScaryBugs
//
//  Created by Andres Aguero on 1/14/17.
//  Copyright © 2017 Andres Aguero. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RWTRateView.h"
#import "RWTScaryBugData.h"
#import "RWTScaryBugDoc.h"


@interface DetailViewController : UIViewController <UITextFieldDelegate, RWTRateViewDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (strong, nonatomic) RWTScaryBugDoc *detailItem;

@property (weak, nonatomic) IBOutlet UITextField *titleField;
@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@property (weak, nonatomic) IBOutlet RWTRateView *rateView;

@property (strong, nonatomic) UIImagePickerController *picker;

- (IBAction)addPictureTapped:(id)sender;
- (IBAction)titleFieldTextChanged:(id)sender;

@end

