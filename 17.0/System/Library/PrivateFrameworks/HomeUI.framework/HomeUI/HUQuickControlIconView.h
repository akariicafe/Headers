@class HUQuickControlIconViewProfile, HUIconView, NSString, UILabel;
@protocol HUQuickControlViewInteractionDelegate;

@interface HUQuickControlIconView : UIView <HUQuickControlInteractiveView>

@property (retain, nonatomic) HUIconView *iconView;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UILabel *supplementaryLabel;
@property (retain, nonatomic) id viewValue;
@property (nonatomic, getter=isUserInteractionActive) BOOL userInteractionActive;
@property (copy, nonatomic) HUQuickControlIconViewProfile *profile;
@property (weak, nonatomic) id<HUQuickControlViewInteractionDelegate> interactionDelegate;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) id secondaryValue;
@property (nonatomic) unsigned long long reachabilityState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requiresConstraintBasedLayout;

- (void)_updateLayout;
- (id)initWithProfile:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateUI;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_getLabelsContainingRect;
- (double)_iconAndLabelsHeight;
- (void)_updateLabelFramesOrigins;
- (void)_updateLabelSizes;
- (void)_updateUIForReachabilityState:(unsigned long long)a0;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)a0;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)a0;

@end
