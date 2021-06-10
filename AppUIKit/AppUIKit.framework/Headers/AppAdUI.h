//
//  AppAdUI.h
//  AppUIKit
//
//  Created by Code on 2020/9/3.
//  Copyright © 2020 北京卡友在线科技有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class AppAdUI, AppAdItemUI;
@protocol AppAdDelegate <NSObject>

@required
/// 标记返回 Item 数量
- (NSInteger)numberOfAppAdItem:(AppAdUI *)adItem;

/// 轮播图中需要加载的视图
- (AppAdItemUI *)configAppAdItem:(AppAdUI *)adItem viewForItemAt:(NSInteger)index;

@optional
/// 点击轮播图触发事件
- (void)configAppAdItemDidTapImage:(AppAdUI *)adItem viewForItemAt:(NSInteger)index;

/// 轮播图正在滚动
- (void)configAppAdItemDidLoop:(AppAdUI *)adItem viewForItemAt:(NSInteger)index;

/// 轮播图结束滚动
- (void)configAppAdItemDidEndLoop:(AppAdUI *)adItem viewForItemAt:(NSInteger)index;

@end

@interface AppAdUI : UIView

/// AppAdDelegate 代理方法
@property (nonatomic, weak) id<AppAdDelegate> delegate;

/// 用于控制轮播图滚动时间间隔 0 时则不自动轮播 Default 0.
@property (nonatomic, assign) NSTimeInterval loopInterval;

/// 轮播图滚动视图的上下间距 Default 0
@property (nonatomic, assign) CGFloat marginForTop;

/// 轮播图滚动视图的左右间距 Default 0
@property (nonatomic, assign) CGFloat marginForLeft;

/// 用于设置轮播图中每一个视图的大小 Default .zero
@property (nonatomic) CGSize size;

/// 用于控制是否无限循环 Default NO
@property (nonatomic, assign) BOOL bool_loop;

/// 用于控制覆盖层透明度 Default 0.3
@property (nonatomic, assign) CGFloat alphaForCover;

/// 所有属性设置完成后，调用该方法
- (void)configUpdateFunc;

- (AppAdItemUI *)dequeueAppAdItem;

@end

NS_ASSUME_NONNULL_END
