//
//  UIView+LYZExtension.h
//  AppProject
//
//  Created by 刘育哲 on 15/7/12.
//  Copyright (c) 2015年 刘育哲. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (LYZExtension)
@property (nonatomic, assign) CGFloat left;    /**< Shortcut for frame.origin.x */
@property (nonatomic, assign) CGFloat right;   /**< Shortcut for frame.origin.x + frame.size.width */
@property (nonatomic, assign) CGFloat top;     /**< Shortcut for frame.origin.y */
@property (nonatomic, assign) CGFloat bottom;  /**< Shortcut for frame.origin.y + frame.size.height */
@property (nonatomic, assign) CGFloat width;   /**< Shortcut for frame.size.width */
@property (nonatomic, assign) CGFloat height;  /**< Shortcut for frame.size.height */
@property (nonatomic, assign) CGFloat centerX; /**< Shortcut for center.x */
@property (nonatomic, assign) CGFloat centerY; /**< Shortcut for center.y */
@property (nonatomic, assign) CGPoint origin;  /**< Shortcut for frame.origin */
@property (nonatomic, assign) CGSize  size;    /**< Shortcut for frame.size */

#pragma mark -

/** 截图 */
- (UIImage *)snapshotImage;

/** 设置阴影 */
- (void)setShadow;
- (void)setShadow:(UIColor *)color;

/** 设置圆角阴影 */
- (void)setShadowCorner:(CGFloat)radius;
- (void)setShadowCorner:(UIColor *)color
                corners:(UIRectCorner)corners
                 radius:(CGFloat)radius;

/** 设置圆角 */
- (void)setRoundedCorner:(CGFloat)radius;
- (void)setRoundedCorner:(UIRectCorner)corners radius:(CGFloat)radius;

/** 获取某点颜色 */
- (UIColor *)colorOfPoint:(CGPoint)point;

#pragma mark -

- (void)setTagName:(NSString*)name;
- (UIView *)viewWithTagName:(NSString *)name;

- (UIView *)getFirstResponder;

- (void)pauseAnimation;
- (void)resumeAnimation;

@end
