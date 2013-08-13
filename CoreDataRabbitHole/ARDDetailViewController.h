//
//  ARDDetailViewController.h
//  CoreDataRabbitHole
//
//  Created by Aaron Douglas on 8/12/13.
//  Copyright (c) 2013 Aaron Douglas. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ARDDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
