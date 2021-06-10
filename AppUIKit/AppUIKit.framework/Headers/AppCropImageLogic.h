//
//  AppCropImageLogic.h
//  AppUIKit
//
//  Created by Code on 2020/9/7.
//  Copyright © 2020 北京卡友在线科技有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, AppCropImageType) {
    /// 正常四边形裁剪
    normal_crop = 0,

    /// 裁剪为圆形（该选项暂未实现）
    round_crop = 1
};

NS_ASSUME_NONNULL_BEGIN

@interface AppCropImageLogic : UIViewController

- (instancetype)init:(AppCropImageType)cropType image:(UIImage *)image done:(void (^)(UIImage *done))done;

@end

NS_ASSUME_NONNULL_END
