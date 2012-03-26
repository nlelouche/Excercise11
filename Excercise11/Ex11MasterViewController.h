//
//  Ex11MasterViewController.h
//  Excercise11
//
//  Created by Nahuel Lelouche on 3/26/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Ex11DetailViewController;

#import <CoreData/CoreData.h>

@interface Ex11MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) Ex11DetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
