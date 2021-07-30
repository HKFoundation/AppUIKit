//
//  AppAddressUI.h
//  AppUIKit
//
//  Created by Code on 2020/9/1.
//  Copyright © 2020 北京卡友在线科技有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AppAddressUI : UIView

/// 开启地址弹窗
+ (void)configAppAddressUI:(UIView *)view done:(void (^)(NSString *_Nonnull done))done;

/// 关闭地址弹窗
+ (void)configEnd;

@end

NS_ASSUME_NONNULL_END
