//
//  NSString+LYZExtension.h
//  AppProject
//
//  Created by 刘育哲 on 15/7/15.
//  Copyright (c) 2015年 刘育哲. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (LYZExtension)

/** 去除头部的空格 */
- (NSString *)trimHeadWhitespace;
/** 去除尾部的空格 */
- (NSString *)trimTailWhitespace;
/** 去除两端的空格 */
- (NSString *)trimBothWhitespace;

/** 去除头部的空格和回车 */
- (NSString *)trimHeadWhitespaceAndNewline;
/** 去除尾部的空格和回车 */
- (NSString *)trimTailWhitespaceAndNewline;
/** 去除两端的空格和回车 */
- (NSString *)trimBothWhitespaceAndNewline;

/** 行数 */
- (NSUInteger)numberOfLines;

#pragma mark -

/** 读取文件内容 */
+ (NSString *)readFileContentAtPath:(NSString *)path;

/** 写入文件内容 */
- (BOOL)writeFileAtPath:(NSString *)path useData:(NSData *)content;

#pragma mark -

- (BOOL)equals:(NSString *)str;

@end
