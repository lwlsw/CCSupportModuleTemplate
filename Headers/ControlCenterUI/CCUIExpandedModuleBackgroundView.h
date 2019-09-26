/*
 * This header is generated by classdump-dyld 1.0
 * on Thursday, January 25, 2018 at 11:29:33 PM Eastern European Standard Time
 * Operating System: Version 11.1.2 (Build 15B202)
 * Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
 */

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <UIKit/UIView.h>

@class MTMaterialView, UIView;

@interface CCUIExpandedModuleBackgroundView : UIView {

	id _client;
	CGFloat _weighting;
	MTMaterialView* _materialView;
	UIView* _obscuringBackgroundView;

}

@property (nonatomic,weak) id client;					//@synthesize client=_client - In the implementation block
@property (nonatomic,retain) MTMaterialView * materialView;			//@synthesize materialView=_materialView - In the implementation block
@property (nonatomic,retain) UIView * obscuringBackgroundView;			//@synthesize obscuringBackgroundView=_obscuringBackgroundView - In the implementation block
@property (assign,nonatomic) CGFloat weighting;					//@synthesize weighting=_weighting - In the implementation block
- (instancetype)initWithFrame:(CGRect)arg1;
- (CGFloat)weighting;
- (void)setWeighting:(CGFloat)arg1;
- (id)client;
- (void)setClient:(id)arg1;
- (void)setObscuringBackgroundView:(UIView *)arg1;
- (MTMaterialView *)materialView;
- (void)setMaterialView:(MTMaterialView *)arg1;
- (UIView *)obscuringBackgroundView;
@end
