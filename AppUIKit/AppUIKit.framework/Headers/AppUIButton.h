//
//  AppUIButton.h
//  AppUIKit
//
//  Created by Code on 2019/8/16.
//  Copyright © 2019 北京卡友在线科技有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, AppImageMode) {
    /// 图片在文字上边
    top = 1,

    /// 图片在文字左边
    left = 2,

    /// 图片在文字下边
    bottom = 3,

    /// 图片在文字右边
    right = 4,
};

@interface AppUIButton : UIButton

/// 提示：highlighted 属性设置为 NO 所以点击事件都没有高亮状态，如需使用请在具体点击事件中修改

/// 一个带有图片和文字的按钮，按钮和文字可以根据需求按照上下左右不同方向设置
/// @param buttonType 按钮类型
/// @param mode 图片相对文字的位置
/// @param margin 图片和文字之间的间距
+ (instancetype)buttonWithType:(UIButtonType)buttonType mode:(AppImageMode)mode margin:(CGFloat)margin;

@end

NS_ASSUME_NONNULL_END
