//
//  HUDHelper.h
//  DragonSourceCommon
//
//  Created by WeiHan on 1/29/16.
//  Copyright © 2016 DragonSource. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MBProgressHUD/MBProgressHUD.h>

@interface HUDHelper : MBProgressHUD

- (HUDHelper *(^)())show;

- (HUDHelper *(^)())hide;

- (HUDHelper *(^)(BOOL))animation;

- (HUDHelper *(^)(NSTimeInterval))delay;

- (HUDHelper *(^)(MBProgressHUDCompletionBlock))completion;

- (HUDHelper *(^)(NSString *))title;

- (HUDHelper *(^)(UIFont *))titleFont;

- (HUDHelper *(^)(UIColor *))titleColor;

- (HUDHelper *(^)(NSString *))subTitle;

- (HUDHelper *(^)(UIFont *))subTitleFont;

- (HUDHelper *(^)(UIColor *))subTitleColor;

- (HUDHelper *(^)(BOOL))interactionEnabled;

- (HUDHelper *(^)(MBProgressHUDMode))setMode;

- (HUDHelper *(^)(UIView *))setCustomView;

@end


#pragma mark - Helper Functions

HUDHelper * HUDToast(UIView *view);

HUDHelper * HUDToastInWindow();

HUDHelper * HUDIndicator(UIView *view);

HUDHelper * HUDIndicatorInWindow();

void HUDHide(UIView *view);

void HUDHideAnimated(UIView *view, BOOL animated);

void HUDHideInWindowAnimated(BOOL animated);

void HUDHideInWindow();

void HUDHideAll(BOOL animated);
