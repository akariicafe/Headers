@class CKSendMenuPopoverBlurContentsView, UIImageView, UIVisualEffectView, CKSendMenuPresentationPopoverBackdropView, UIView;

@interface CKSendMenuPresentationPopoverView : UIView

@property (retain, nonatomic) UIVisualEffectView *blurBackgroundView;
@property (retain, nonatomic) CKSendMenuPresentationPopoverBackdropView *backdropView;
@property (retain, nonatomic) UIImageView *plusImageView;
@property (retain, nonatomic) CKSendMenuPopoverBlurContentsView *blurContentsView;
@property (nonatomic, getter=isLayoutSubviewsEnabled) BOOL layoutSubviewsEnabled;
@property (retain, nonatomic) UIView *sendMenuView;
@property (retain, nonatomic) UIView *appView;

+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })affineTransformToDownScaleSize:(struct CGSize { double x0; double x1; })a0 toSize:(struct CGSize { double x0; double x1; })a1;

- (id)contentContainerView;
- (id)init;
- (void)prepareForPresentation;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_animationForDismissingContentView:(id)a0 finalBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 finalCenter:(struct CGPoint { double x0; double x1; })a2 finalAlpha:(double)a3;
- (id)animationForDismissingWithFinalBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 finalCenter:(struct CGPoint { double x0; double x1; })a1 finalAlpha:(double)a2;
- (id)animationForPresentingSendMenuViewWithFinalBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 finalCenter:(struct CGPoint { double x0; double x1; })a1;
- (id)animationForTransitioningToAppViewWithFinalBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 finalCenter:(struct CGPoint { double x0; double x1; })a1;
- (id)animationForTransitioningToNewSize:(struct CGSize { double x0; double x1; })a0 center:(struct CGPoint { double x0; double x1; })a1;

@end
