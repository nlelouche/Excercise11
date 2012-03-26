//
//  MyViewController.h
//  Excercise11
//
//  Created by Nahuel Lelouche on 3/26/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Beer.h"


@interface MyViewController : UIViewController


@property (nonatomic, retain) IBOutlet UITextField *myTextField;
@property (nonatomic, retain) Beer *beer;

- (void) save;
- (void) cancel;

@end
