//
//  MasterViewController.h
//  termdial
//
//  Created by Ramakrishna Yekulla on 25/02/12.
//  Copyright (c) 2012 ramkrsna@gmail.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
