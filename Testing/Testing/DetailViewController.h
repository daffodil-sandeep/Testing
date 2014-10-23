//
//  DetailViewController.h
//  Testing
//
//  Created by Abu on 23/10/14.
//  Copyright (c) 2014 Abu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

