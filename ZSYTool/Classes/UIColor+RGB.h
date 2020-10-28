//
//  UIColor+RGB.h
//  Parallax Header
//
//  Created by LEPU on 2020/8/19.
//  Copyright © 2020 Daston~Rhadnojnainva. All rights reserved.
/*
 修改提交代码的username
 
 */

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (RGB)

#pragma mark RGB
+ (UIColor *)initWithR:(CGFloat)R G:(CGFloat)G B:(CGFloat)B;

#pragma mark 随机色
+ (UIColor *)randomColor;
#pragma mark 颜色转图片
+ (UIImage *)createImageWithColor:(UIColor*)color;

@end

NS_ASSUME_NONNULL_END
