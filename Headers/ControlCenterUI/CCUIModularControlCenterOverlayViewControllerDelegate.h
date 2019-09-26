/*
 * This header is generated by classdump-dyld 1.0
 * on Wednesday, January 24, 2018 at 12:17:23 AM Eastern European Standard Time
 * Operating System: Version 11.1.2 (Build 15B202)
 * Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
 * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
 */


@protocol CCUIModularControlCenterOverlayViewControllerDelegate <CCUIModularControlCenterViewControllerDelegate>
@optional
- (void)controlCenterViewController:(id)arg1 didChangePresentationState:(unsigned long long)arg2;
- (void)controlCenterViewController:(id)arg1 significantPresentationProgressChange:(double)arg2;

@required
- (void)controlCenterViewController:(id)arg1 wantsHostStatusBarHidden:(BOOL)arg2;
- (CGFloat)reachabilityOffsetForControlCenterViewController:(id)arg1;

@end
