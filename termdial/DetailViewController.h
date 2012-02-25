//
//  DetailViewController.h
//  termdial
//
//  Created by Ramakrishna Yekulla on 25/02/12.
//  Copyright (c) 2012 ramkrsna@gmail.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
