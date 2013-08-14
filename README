CoreDataRabbitHole - Demo app for Going Down the Core Data Rabbit Hole
=======================================================================

This demo app was used in my 2013 That Conference talk entitled Going Down the Core Data Rabbit Hole.  This app is based upon Apple's default Xcode shell Master-Detail app template with Core Data turned on.

## Modifications from Apple's Code

I've added a number of things to the code to support multithreading:

### `CoreDataRabbitHole/ARDAppDelegate.h`
A public method "newManagedObjectContext" to create a child context for use in a background thread

### `CoreDataRabbitHole/ARDAppDelegate.m`
Listen to NSManagedObjectContextDidSaveNotification and call mergeChanges (custom method) to merge them into the main thread context.

### `CoreDataRabbitHole/ARDMasterViewController.m`
Added a new method "insertNewObjectBackground" to do the data insert on a background thread using Grand Central Dispatch.


## Contact Me

Please do NOT hesitate to ask questions!  

* http://twitter.com/astralbodies
* http://astralbodies.net
* http://github.com/astralbodies
* astralbodies at Gmail

## License

Schedule is available under the MIT license. See the LICENSE file for more info.
