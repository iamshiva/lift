//
//  LFTImage.h
//  lift
//
//  Created by August Mueller on 1/7/14.
//  Copyright (c) 2014 Flying Meat Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LFTGroupLayer.h"

#ifndef debug
    #define debug NSLog
#endif

@interface LFTImage : NSObject {
    
}

@property (assign) NSSize           imageSize;
@property (assign) NSUInteger       bitsPerComponent;
@property (assign) NSUInteger       bitsPerPixel;
@property (assign) NSSize           dpi;
@property (assign) CGColorSpaceRef  colorSpace;
@property (strong) NSString         *creatorSoftware;

+ (instancetype)imageWithContentsOfURL:(NSURL*)u error:(NSError**)err;

- (LFTGroupLayer*)baseGroupLayer;

@end
