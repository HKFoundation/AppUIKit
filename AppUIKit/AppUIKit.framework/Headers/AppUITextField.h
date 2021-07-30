//
//  AppUITextField.h
//  AppUIKit
//
//  Created by Code on 2019/8/16.
//  Copyright © 2019 北京卡友在线科技有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, AppTextMode) {
    /// 内容不做限制
    common = 0,

    /// 手机号码类型（UIKeyboardTypeNumberPad）
    phone = 1,

    /// 车牌号码类型（自定义车牌键盘）
    car = 2,

    /// 数字类型 0-9（UIKeyboardTypeNumberPad）
    digit = 3,

    /// 身份证号码类型（UIKeyboardTypeNumberPad）
    card = 4,

    /// 货币类型 默认最大999999.99（UIKeyboardTypeDecimalPad）
    fee = 5,

    /// 验证码类型 0-9（UIKeyboardTypeNumberPad）需要在初始化赋值frame
    code = 6,

    /// 支付类型（UIKeyboardTypeNumberPad）样式 🫁 🫁 🫁 🫁 🫁 🫁 密码框
    pay = 7,

    /// 自定义类型
    user = 8
};

@interface AppUITextField : UITextField

/// 内容类型，Default common
@property (nonatomic, assign) AppTextMode mode;

/// 限制文本长度 Default INT16_MAX 验证码类型默认是 6位，支付类型默认是 6 位 可以通过设置改变限制位数
@property (nonatomic, assign) NSUInteger digitLength;

/// 小数位数 Default 2 只应用于货币类型
@property (nonatomic, assign) NSUInteger floatLength;

/// 正则表达式或允许使用的字符集
@property (nonatomic, copy) NSString *regex;

/* ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄*
 * // MARK: 货币类型属性
 * ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄*/

/// 货币符号前缀，Default 手机所属地的货币符号
@property (nonatomic, copy) NSString *feepPrefix;

/* ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄*
 * // MARK: 支付类型属性
 * ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄*/

/// 支付类型，密码框间距 Default 10.f
@property (nonatomic, assign) CGFloat margin;

/// 支付类型，密码框尺寸 Default 44.f * 44.f
@property (nonatomic, assign) CGSize size;

/// 是否是密文显示 Default YES
@property (nonatomic, assign) BOOL bool_secure;

@end

NS_ASSUME_NONNULL_END
