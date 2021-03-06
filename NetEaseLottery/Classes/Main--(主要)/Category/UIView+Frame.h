//
//  UIView+Frame.h
//  NetEaseLottery
//
//  Created by yuan on 16/1/5.
//  Copyright © 2016年 袁小荣. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Frame)
// get方法

// 如果@property在声明类的时候使用,那么@property会自动生成属性,分类里面不能添加属性
// 如果@property在分类中使用,不会生成成员属性,只会生成get,set方法声明
@property (nonatomic, assign) CGFloat width;
@property (nonatomic, assign) CGFloat height;
@property (nonatomic, assign) CGFloat x;
@property (nonatomic, assign) CGFloat y;
//- (CGFloat)width;
//- (void)setWidth:(CGFloat)width;
//
//- (CGFloat)height;
//- (void)setHeight:(CGFloat)height;

// x

// y
@end
