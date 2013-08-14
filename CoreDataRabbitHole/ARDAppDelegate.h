//
//  ARDAppDelegate.h
//  CoreDataRabbitHole
//
//  Created by Aaron Douglas on 8/12/13.
//  Copyright (c) 2013 Aaron Douglas. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ARDAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

+ (NSManagedObjectContext *)newManagedObjectContext;

@property (strong, nonatomic) UINavigationController *navigationController;

@property (strong, nonatomic) UISplitViewController *splitViewController;

@end
