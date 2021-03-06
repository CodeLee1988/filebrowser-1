//
//  FBCustomPreviewController.h
//  FileBrowser
//
//  Created by Steven Troughton-Smith on 29/09/2014.
//  Copyright (c) 2014 High Caffeine Content. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FBCustomPreviewController : UIViewController
{
	__strong UITextView *textView;
	__strong UIImageView *imageView;
}

+(BOOL)canHandleExtension:(NSString *)fileExt;
- (instancetype)initWithFile:(NSString *)file;

@end
