//
//  FBFilesTableViewController.h
//  FileBrowser
//
//  Created by Steven Troughton-Smith on 18/06/2013.
//  Copyright (c) 2013 High Caffeine Content. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Pepper.h"

@interface FBFilesTableViewController : PUICTableViewController

- (id)initWithPath:(NSString *)path;

@property (strong) NSString *path;
@property (strong) NSArray *files;

@end
