//
//  ARDMasterViewController.h
//  CoreDataRabbitHole
//
//  Created by Aaron Douglas on 8/12/13.
//  Copyright (c) 2013 Aaron Douglas. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ARDDetailViewController;

#import <CoreData/CoreData.h>

@interface ARDMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) ARDDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
