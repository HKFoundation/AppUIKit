//
//  AppFragmentUI.h
//  AppUIKit
//
//  Created by Code on 2020/8/31.
//  Copyright © 2020 北京卡友在线科技有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AppFragmentUI : UIViewController

/* ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄*
* // MARK: 提示，该组件当前只支持带有 NavigationBar 的控制器
* // MARK: 并且全屏展示，如需要定制 Frame 大小可自行修改
* ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄*/

/// 需要加载的标题数据
@property (nonatomic, strong) NSArray *pTitles;

/// 需要加载的控制器名称
@property (nonatomic, strong) NSArray *target;

/// 标题视图的高度，Default 44.0
@property (nonatomic, assign) CGFloat boxTitleHeight;

/// 标题下指示器的高度，Default 3.0
@property (nonatomic, assign) CGFloat pageIndicatorHeight;

/// 标题之间的间距，Default 20.0
@property (nonatomic, assign) CGFloat margin;

/// 标题字体 Default FZLTZHUNHPro--GB1-4 14.0
@property (nonatomic, strong) UIFont *font;

/// 未选中状态下标题的颜色，Default lightGray
@property (nonatomic, strong) UIColor *defaultTextColor;

/// 选中状态下标题的颜色，Default black
@property (nonatomic, strong) UIColor *currentTextColor;

/// 标题下指示器颜色，Default black
@property (nonatomic, strong) UIColor *pageIndicatorColor;

/// 标题是否居中显示，只针对 contentsize 不满一个屏幕有效
@property (nonatomic, assign) BOOL center;

/// 所有属性设置完成后，调用该方法
- (void)configUI;

@end

NS_ASSUME_NONNULL_END
