//
//  ARDContextManager.h
//  CoreDataRabbitHole
//
//  Created by Aaron Douglas on 3/4/14.
//  Copyright (c) 2014 Aaron Douglas. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ARDContextManager : NSObject
///----------------------------------------------
///@name Persistent Contexts
///
/// The backgroundContext has concurrency type
/// NSPrivateQueueConcurrencyType and should be
/// used for any background tasks. Its parent is
/// the persistentStoreCoordinator.
///
/// The mainContext has concurrency type
/// NSMainQueueConcurrencyType and should be used
/// for UI elements and fetched results controllers.
/// Its parent is the backgroundContext.
///----------------------------------------------
@property (nonatomic, readonly, strong) NSManagedObjectContext *backgroundContext;
@property (nonatomic, readonly, strong) NSManagedObjectContext *mainContext;

///-------------------------------------------------------------
///@name Access to the persistent store and managed object model
///-------------------------------------------------------------
@property (nonatomic, readonly, strong) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (nonatomic, readonly, strong) NSManagedObjectModel *managedObjectModel;

///--------------------------------------
///@name ContextManager
///--------------------------------------

/**
 Returns the singleton
 
 @return instance of ContextManager
 */
+ (instancetype)sharedInstance;


///--------------------------
///@name Contexts
///--------------------------

/**
 For usage as a 'scratch pad' context
 
 @return a new MOC with NSPrivateQueueConcurrencyType,
 with the parent context as the background writer context
 */
- (NSManagedObjectContext *const)newDerivedContext;

/**
 Save a derived context created with `newDerivedContext` via this convenience method
 
 @param a derived NSManagedObjectContext constructed with `newDerivedContext` above
 */
- (void)saveDerivedContext:(NSManagedObjectContext *)context;

/**
 Save a derived context created with `newDerivedContext` and optionally execute a completion block.
 Useful for if the guarantee is needed that the data has made it into the main context.
 
 @param a derived NSManagedObjectContext constructed with `newDerivedContext` above
 @param a completion block that will be executed on the main queue
 */
- (void)saveDerivedContext:(NSManagedObjectContext *)context withCompletionBlock:(void (^)())completionBlock;

/**
 Save one of the background/main.
 
 Convenience for error handling.
 */
- (void)saveContext:(NSManagedObjectContext *)context;

@end