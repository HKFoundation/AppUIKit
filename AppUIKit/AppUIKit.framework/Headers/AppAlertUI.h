//
//  AppAlertUI.h
//  AppUIKit
//
//  Created by Code on 2020/9/3.
//  Copyright © 2020 北京卡友在线科技有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AppAlertUI : UIView

/// 开启文字提示弹窗 @[] 按钮按照从右往左布局
+ (void)configAppMsgsUI:(NSString *)pTitle msgs:(NSString *)msgs pFunc:(NSArray *)pFunc done:(void (^)(NSInteger done))done;

/// 开启底部弹窗
+ (void)configAppFuncsUI:(NSArray *)pFuncs done:(void (^)(NSInteger done))done;

/// 关闭弹窗
+ (void)configEnd;

@end

NS_ASSUME_NONNULL_END
