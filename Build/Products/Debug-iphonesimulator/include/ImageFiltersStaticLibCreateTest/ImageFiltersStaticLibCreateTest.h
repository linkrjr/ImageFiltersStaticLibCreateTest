//
//  ImageFiltersStaticLibCreateTest.h
//  ImageFiltersStaticLibCreateTest
//
//  Created by Ronaldo GomesJr on 29/04/2015.
//  Copyright (c) 2015 Technophile. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface ImageFiltersStaticLibCreateTest : NSObject

@property (nonatomic,readonly) UIImage *originalImage;

- (id)initWithImage:(UIImage *)image;
- (UIImage *)grayScaleImage;
- (UIImage *)oldImageWithIntensity:(CGFloat)level;

@end
