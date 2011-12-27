//
//  FirstViewController.h
//  DevTap
//
//  Created by J Irvine on 12/16/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>



@interface FirstViewController : UIViewController

@property (strong, nonatomic) NSMutableArray *items;

@property (strong, nonatomic) IBOutlet UITextField *searchBox;
@property (strong, nonatomic) IBOutlet UIPickerView *resourceType;



@end
