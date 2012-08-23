//
//  ShowPhotoViewController.h
//  Shutbug
//
//  Created by Hendrik Jan Hilbolling on Aug 23, 12.
//  Copyright (c) 2012 AtosOrigin. All rights reserved.
//
/*
 Extras:
 When you click on a row in a table you download the image and present it in a UIViewController
 Use the FlickrFetcher API
 + (NSURL *)urlForPhoto:(NSDictionary *)photo format:(FlickrPhotoFormat)format;
 Use NSData to get the contents (bits) of that url
 Use UIImage to convert those bits to an image
 */

#import <UIKit/UIKit.h>

@interface ShowPhotoViewController : UIViewController 

@end
