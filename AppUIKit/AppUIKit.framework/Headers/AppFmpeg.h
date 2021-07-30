//
//  AppFmpeg.h
//  AppUIKit
//
//  Created by Code on 2021/1/11.
//  Copyright © 2021 北京卡友在线科技有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

NS_ASSUME_NONNULL_BEGIN

@class AppFmpeg;
/// 实时获得缓冲进度通知
extern NSString *const FM_CACHERANGESCHANGE_NOTIFICATION;

typedef NS_ENUM(NSUInteger, AppFmpegType) {
    /// 初始状态
    unknow = 0,

    /// 播放中
    beginning = 1,

    /// 暂停播放
    paused = 2,

    /// 播放异常
    error = 3,

    /// 播放结束
    end = 4
};

/* ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄*
 * // MARK: 播放器代理相关
 * ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄*/

@protocol AppFmpegDelegate <NSObject>

/// 当前播放器状态
- (void)fm_fmpeg:(AppFmpeg *)fmpeg status:(AppFmpegType)status;

/**
 *  播放进度
 *
 *  @param progress        播放进度 0 ~ 1
 *  @param current_seconds 当前视频播放进度时间
 *  @param length_seconds  视频总时长
 *
 */
- (void)fm_fmpeg:(AppFmpeg *)fmpeg progress:(CGFloat)progress current_seconds:(CGFloat)current_seconds length_seconds:(CGFloat)length_seconds;

/**
 *  缓冲视频
 *
 *  @param cacheRangesArr 缓冲进度数组
 *  @param length         视频总大小
 *
 */
- (void)fm_fmpeg:(AppFmpeg *)fmpeg cacheRangesArr:(NSArray *)cacheRangesArr length:(long long)length;

@end

/* ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄*
 * // MARK: 播放器相关
 * ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄＊ ┄┅┄┅┄┅┄┅┄*/

@interface AppFmpeg : NSObject

@property (nonatomic, weak) id<AppFmpegDelegate> delegate;

/// 当前播放类型
@property (nonatomic, assign, readonly) AppFmpegType status;

/// 视频总时间
@property (nonatomic, assign, readonly) NSTimeInterval length_seconds;

/// 当前播放时间
@property (nonatomic, assign, readonly) NSTimeInterval current_seconds;

/// 播放器对象
@property (nonatomic, strong, readonly) AVPlayer *fmpeg;

/// 播放器 Layer
@property (nonatomic, strong, readonly) AVPlayerLayer *fmpegLayer;

/// 播放器数据源
@property (nonatomic, strong, readonly) AVPlayerItem *fmpegItem;

/// 视频第一帧图片
@property (nonatomic, strong, readonly) UIImage *coverImage;

/// 当前是否在缓冲
@property (nonatomic, assign, readonly) BOOL bool_buffing;

/// 是否用视频第一帧显示为占位图 Default YES
@property (nonatomic, assign) BOOL bool_cover_image;

/// 初始化方法
- (instancetype)initWithURL:(NSURL *)url;

/// 通过该方法触发播放
- (void)fm_configURL:(NSURL *)url;

/// 开始播放
- (void)fm_beginning;

/// 暂停播放
- (void)fm_paused;

/// 设置视频播放开始的时间
- (void)fm_configLoadingForProgress:(NSTimeInterval)time;

@end

NS_ASSUME_NONNULL_END
