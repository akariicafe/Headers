@class NSString, NCNotificationListStackBackgroundDimmingView, NCNotificationListStackDimmingOverlayView, UIView;
@protocol PLContentSizeManaging, NCNotificationListDimmable;

@interface NCDimmableView : NCHitTestTransparentView <PLContentSizeManaging, NCNotificationListDimmable> {
    NCNotificationListStackDimmingOverlayView *_stackDimmingOverlayView;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _transform;
}

@property (weak, nonatomic) UIView<PLContentSizeManaging, NCNotificationListDimmable> *contentView;
@property (weak, nonatomic) UIView *viewToFadeWhenDimming;
@property (weak, nonatomic) NCNotificationListStackBackgroundDimmingView *backgroundDimmingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })contentSizeForSize:(struct CGSize { double x0; double x1; })a0;
- (void)configureStackDimmingForTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFitsContentWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)_effectiveContentView;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
