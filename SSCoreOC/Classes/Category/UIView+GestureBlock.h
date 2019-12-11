//
//  UIView+GestureBlock.h
//  FBSnapshotTestCase
//
//  Created by ssp on 2019/12/11.
//


#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void (^SSWhenTappedBlock)(void);
@interface UIView (GestureBlock)<UIGestureRecognizerDelegate>
- (void)whenTapped:(SSWhenTappedBlock)block;
- (void)whenDoubleTapped:(SSWhenTappedBlock)block;
- (void)whenTwoFingerTapped:(SSWhenTappedBlock)block;
- (void)whenTouchedDown:(SSWhenTappedBlock)block;
- (void)whenTouchedUp:(SSWhenTappedBlock)block;
@end

NS_ASSUME_NONNULL_END
