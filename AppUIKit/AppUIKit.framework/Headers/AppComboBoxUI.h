//
//  AppComboBoxUI.h
//  AppUIKit
//
//  Created by Code on 2020/9/1.
//  Copyright © 2020 北京卡友在线科技有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/* ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄*
 * // MARK: 下拉菜单列表UI
 * ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄*/

@protocol AppComboBoxDelegate <NSObject>

/// 返回当前下拉菜单中的所有数据，数组内容取决于有多少个菜单，从左往右依次传递
- (void)configComboBoxTitle:(NSArray *)pTitle;

@end

@interface AppComboBoxUI : UIView

/// 下拉菜单数组，每一个数组是一个单独的菜单 @[@[], @[], @[]]
@property (nonatomic, strong) NSArray *pTitles;

@property (nonatomic, weak) id<AppComboBoxDelegate> delegate;

/// 标题字体 Default FZLTZHUNHPro--GB1-4 14.0
@property (nonatomic, strong) UIFont *font;

/// 使用该初始化方法实例化对象，view 当前控制器的视图
- (instancetype)initWithFrame:(CGRect)frame view:(UIView *)view;

/// 所有属性设置完成后，调用该方法
- (void)configUI;

@end

NS_ASSUME_NONNULL_END
