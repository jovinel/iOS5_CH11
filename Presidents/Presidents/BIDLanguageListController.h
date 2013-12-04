//
//  BIDLanguageListController.h
//  Presidents
//
//  Created by Maria Alice C. Lim on 12/4/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BIDDetailViewController;

@interface BIDLanguageListController : UITableViewController

@property (weak, nonatomic) BIDDetailViewController *detailViewController;
@property (strong, nonatomic) NSArray *languageNames;
@property (strong, nonatomic) NSArray *languageCodes;

@end
