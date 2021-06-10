//
//  AppQRCodeUI.h
//  AppUIKit
//
//  Created by Code on 2020/9/22.
//  Copyright © 2020 北京卡友在线科技有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol AppQRCodeUIDelegate <NSObject>

- (void)configQRCode:(NSString *)code;

@end

@interface AppQRCodeUI : UIView

@property (nonatomic, weak) id<AppQRCodeUIDelegate> delegate;

/// codeFrame 是可扫描区域大小
- (instancetype)initWithFrame:(CGRect)frame codeFrame:(CGRect)codeFrame;

@end

NS_ASSUME_NONNULL_END
