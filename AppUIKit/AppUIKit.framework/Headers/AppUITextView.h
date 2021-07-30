//
//  AppUITextView.h
//  AppUIKit
//
//  Created by Code on 2020/12/24.
//  Copyright © 2020 北京卡友在线科技有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AppUITextView : UITextView

/// 提示语文字
@property (nonatomic, copy) NSString *defaultText;

/// 提示语文字颜色
@property (nonatomic, strong) UIColor *defaultTextColor;

/// 文字区域的上下间距 Default 5.f
@property (nonatomic, assign) CGFloat marginForTop;

/// 文字区域的左右间距 Default 5.f
@property (nonatomic, assign) CGFloat marginForLeft;

/// 文字字数限制 Default 0 不做限制，为 0 时隐藏，设置限制字数显示
@property (nonatomic, assign) NSInteger numberForText;

/// 文字的行间距 Default 0.f
@property (nonatomic, assign) CGFloat margin;

@end

NS_ASSUME_NONNULL_END
