//
//  AppPayCodeUIv.h
//  AppUIKit
//
//  Created by Code on 2019/8/20.
//  Copyright © 2019 北京卡友在线科技有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/* ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄*
 * // MARK: AppPayCodeUI 支付密码组件
 * ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄*/

@interface AppPayCodeUI : UIView

/* ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄*
 * // MARK: 支付密码弹窗
 * ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄*/

/// 密码框位数 Default 6 位
@property (nonatomic, assign) NSInteger digitLength;

/// 密码框之间间距 Default 10.f
@property (nonatomic, assign) CGFloat margin;

/// 支付类型，密码框尺寸 Default 44.f * 44.f
@property (nonatomic, assign) CGSize size;

/// 是否是密文显示 Default YES
@property (nonatomic, assign) BOOL bool_secure;

/* ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄*
 * // MARK: 支付密码键盘
 * ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄*/

/// 作为键盘类型初始化（通常使用不到，已封装到 AppUITextField 支付类型）
- (instancetype)initForTextField:(UITextField *)send;

/// 用于更新密码框文字
- (void)configUpdatePayCodeText:(UITextField *)send;

@end

NS_ASSUME_NONNULL_END
