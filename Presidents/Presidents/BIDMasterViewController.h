//
//  BIDMasterViewController.h
//  Presidents
//
//  Created by Maria Alice C. Lim on 12/4/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BIDDetailViewController;

@interface BIDMasterViewController : UITableViewController

@property (strong, nonatomic) BIDDetailViewController *detailViewController;
@property (strong, nonatomic) NSArray *presidents;

@end
