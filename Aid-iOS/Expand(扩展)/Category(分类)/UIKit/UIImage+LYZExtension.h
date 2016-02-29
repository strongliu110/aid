//
//  UIImage+LYZExtension.h
//  AppProject
//
//  Created by 刘育哲 on 15/7/15.
//  Copyright (c) 2015年 刘育哲. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (LYZExtension)

+ (UIImage *)imageWithColor:(UIColor *)color;
+ (UIImage *)imageWithColor:(UIColor *)color size:(CGSize)size;

/** 子图像 */
- (UIImage *)subimageInRect:(CGRect)rect;

/** 水平拉伸图像 @param edge 保留的左右边缘 */
- (UIImage *)horizontalStretchImageWithEdge:(CGFloat)edge;
/** 垂直拉伸图像 @param edge 保留的上下边缘 */
- (UIImage *)verticalStretchImageWithEdge:(CGFloat)edge;
/** 拉伸图像 @param edge 保留的四周边缘 */
- (UIImage *)stretchImageWithEdge:(CGFloat)edge;
/** 水平平铺图像 @param edge 保留的左右边缘 */
- (UIImage *)horizontalTileImageWithEdge:(CGFloat)edge;
/** 垂直平铺图像 @param edge 保留的上下边缘 */
- (UIImage *)verticalTileImageWithEdge:(CGFloat)edge;
/** 平铺图像 @param edge 保留的四周边缘 */
- (UIImage *)tileImageWithEdge:(CGFloat)edge;

/** 图像旋转 @param radians 旋转弧度 */
- (UIImage *)imageRotatedByRadians:(CGFloat)radians;
/** 图像旋转 @param radians 旋转角度 */
- (UIImage *)imageRotatedByDegrees:(CGFloat)degrees;
/** 图像变换 */
- (UIImage *)imageWithTransform:(CGAffineTransform)transform;
/** 带圆角的图像 */
- (UIImage *)imageWithRoundedCornerRadius:(CGFloat)radius AndSize:(CGSize)sizeToFit;

/** 图像缩放，默认 UIViewContentMode = UIViewContentModeScaleToFill */
- (UIImage *)scaleToSize:(CGSize)size;
/** 图像缩放，根据 UIViewContentMode 模式进行 */
- (UIImage *)scaleToSize:(CGSize)size withContentMode:(UIViewContentMode)contentMode;

/** 调整方向 */
- (UIImage *)fixOrientation;

+ (UIImage *)fastImageWithData:(NSData *)data;
+ (UIImage *)fastImageWithContentsOfFile:(NSString *)path;


@end
