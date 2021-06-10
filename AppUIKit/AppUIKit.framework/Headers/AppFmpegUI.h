//
//  AppFmpegUI.h
//  AppUIKit
//
//  Created by Code on 2020/12/30.
//  Copyright © 2020 北京卡友在线科技有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppFmpegConfig.h"

NS_ASSUME_NONNULL_BEGIN

/* ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄*
 * // MARK: 目前作为视频播放器组件 TODO 音视频解析...
 * // MARK: 模拟器音量亮度调节无效，真机正常，横屏时将 Touch 的 Point 横竖坐标对调了
 * ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄*/

@protocol AppFmpegUIDelegate <NSObject>

@optional
/// 返回点击事件
- (void)configPopEvent;

/// 分享点击事件
- (void)configMessageShareEvent;

/// 清晰度点击事件
- (void)configHdEvent;

/// 下载点击事件
- (void)configDownloadEvent;

/// 收藏点击事件 send 标记当前按钮状态
- (void)configMagicEvent:(UIButton *)send;

@end

@interface AppFmpegUI : UIView

@property (nonatomic, weak) id<AppFmpegUIDelegate> delegate;

@property (nonatomic, strong, readonly) AppFmpegConfig *config;

/// 视频播放器初始化方法
- (instancetype)initWithFrame:(CGRect)frame config:(AppFmpegConfig *)config;

@end

NS_ASSUME_NONNULL_END
