//
//  AppCarCodeUI.h
//  AppUIKit
//
//  Created by Code on 2021/4/22.
//  Copyright © 2021 北京卡友在线科技有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/* ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄*
 * // MARK: 车牌号码组件
 * ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄*/

@interface AppCarCodeUI : UIView

/* ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄*
 * // MARK: 车牌号码弹窗
 * ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄*/

/// 开启车牌号码弹窗
+ (void)configAppCarCodeUI:(UIView *)view done:(void (^)(NSString *_Nonnull done))done;

/// 关闭车牌号码弹窗
+ (void)configEnd;

/* ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄*
 * // MARK: 车牌号码键盘
 * ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄*/

/// 作为键盘类型初始化（通常使用不到，已封装到 AppUITextField 车牌号码类型）
- (instancetype)initForTextField:(UITextField *)send;

@end

NS_ASSUME_NONNULL_END
