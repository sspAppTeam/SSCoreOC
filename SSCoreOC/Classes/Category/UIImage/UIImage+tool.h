//
//  UIImage+tool.h
//  FBSnapshotTestCase
//
//  Created by ssp on 2020/3/26.
//



#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (tool)
/**
 *  根据图片名返回一张能够自由拉伸的图片 (从中间拉伸)
 */
+ (UIImage *)mh_resizableImage:(NSString *)imgName;
+ (UIImage *)mh_resizableImage:(NSString *)imgName capInsets:(UIEdgeInsets)capInsets;


/// 返回一张未被渲染的图片
+ (UIImage *)mh_imageAlwaysShowOriginalImageWithImageName:(NSString *)imageName;
/// 获取视频某个时间的帧图片
+ (UIImage *)mh_thumbnailImageForVideo:(NSURL *)videoURL atTime:(NSTimeInterval)time;

/// /// 获取屏幕截图
///
/// @return 屏幕截图图像
+ (UIImage *)mh_screenShot;

- (UIImage *)mh_fixOrientation;
// 颜色生成图片
+ (nullable UIImage *)imageWithColor:(UIColor *)color;
@end

NS_ASSUME_NONNULL_END
