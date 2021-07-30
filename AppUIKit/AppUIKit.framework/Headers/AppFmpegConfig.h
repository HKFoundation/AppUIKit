//
//  AppFmpegConfig.h
//  AppUIKit
//
//  Created by Code on 2020/12/30.
//  Copyright © 2020 北京卡友在线科技有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import "AppFmpeg.h"

NS_ASSUME_NONNULL_BEGIN

/* ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄*
 * // MARK: 视频播放器的一些配置信息
 * ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄*/

typedef NS_ENUM(NSUInteger, AppFmpegGestureType) {
    /// 视频进度调节操作
    progress = 0,

    /// 声音调节操作
    volume = 1,

    /// 屏幕亮度调节操作
    light = 2,

    /// 无任何操作
    none = 3,
};

@interface AppFmpegConfig : NSObject

/// 自定义返回按钮图片
@property (nonatomic, strong) UIImage *popImage;

/// 自定义返回按钮事件文字
@property (nonatomic, copy) NSString *popText;

/// 视频名称文字，Default @"正在播放"
@property (nonatomic, copy) NSString *videoText;

/// 设置自动隐藏面板的时间 0 代表不隐藏 Default 0.f
@property (nonatomic, assign) CGFloat hideInterval;

/// 视频的显示模式，默认按原视频比例显示，多余两边留黑边 AVLayerVideoGravityResizeAspect
@property (nonatomic, assign) AVLayerVideoGravity gravity;

/// 当前视频连接
@property (nonatomic, strong) NSURL *url;

/// 是否有返回按钮 Default YES
@property (nonatomic, assign) BOOL bool_pop;

/// 是否用视频第一帧显示为占位图 Default YES
@property (nonatomic, assign) BOOL bool_cover_image;

/// 是否可以用手势控制音量和屏幕亮度 Default YES
@property (nonatomic, assign) BOOL bool_light_volume;

/// 是否可以用手势控制播放进度 Default YES
@property (nonatomic, assign) BOOL bool_progress;

/* ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄*
 * // MARK: 内部使用参数，不可以随意修改
 * ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄*/

/// 播放器状态 Default stopped
@property (nonatomic, assign) AppFmpegType status;

/// 当前播放时间
@property (nonatomic, assign) NSTimeInterval current_seconds;

/// 视频总时长
@property (nonatomic, assign) NSTimeInterval length_seconds;

/// 保存手指触摸屏幕开始位置
@property (nonatomic, assign) CGPoint touch_begin_point;

/// 保存手指触摸屏幕开始音量
@property (nonatomic, assign) CGFloat touch_begin_volume;

/// 保存当前手势状态
@property (nonatomic, assign) AppFmpegGestureType gestureType;

@end

NS_ASSUME_NONNULL_END
