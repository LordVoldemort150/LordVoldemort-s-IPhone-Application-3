//
//  DetailViewController.h
//  Application
//
//  Created by Daniel Bolster on 21/09/12.
//  Copyright (c) 2012 Daniel Bolster. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
